echo `make clean`
echo `make all`

rm -rf output_files

mkdir -p output_files

declare -i NoTest   # The total number of test
NoTest=0

declare -i pass #The number of test passed
pass=0

for DRIVER in compiler_tests/*_driver.c ; do
    echo "========================================================================"	
	NoTest=NoTest+1
    NAME=$(basename $DRIVER _driver.c)
    CTEST=compiler_tests/$NAME.c
	
	echo ""
    echo "Testcase $NAME" #print test name
	
    # Compile test with selfmade compiler
    bin/c_compiler -S $CTEST -o output_files/$NAME.s 
    if [[ $? -ne 0 ]]; then
        echo "ERROR : Compiler under test couldn't compile "
        continue
    fi
	
    # Compile driver with normal GCC MIPS
    mips-linux-gnu-gcc -c $DRIVER -o output_files/${NAME}_driver.o
    if [[ $? -ne 0 ]]; then
        echo "ERROR : Couldn't compile driver program using GCC."
        continue
    fi


    # Link driver object and assembly into executable
    mips-linux-gnu-gcc -static output_files/${NAME}.s output_files/${NAME}_driver.o -o output_files/${NAME}_linked
    if [[ $? -ne 0 ]]; then
        echo "ERROR : Couldn't link."
        continue
    fi

    # Run the executable using mips simulator
    qemu-mips output_files/${NAME}_linked
	if [[ $? -ne 0 ]]; then
        echo "ERROR : Test failed"
        pass=pass-1 
	else
		echo "passed $NAME "
    fi

    
    pass=pass+1
    echo "========================================================================"
done
echo "${pass} test passed out of $NoTest"

    if [[ $TEST_OUTPUT -eq 20 ]] ; then
        echo " "
        echo "$NAME, Fail, no $NAME-got executable in ${working_exec}"
    elif [[ $TEST_OUTPUT -ne 0 ]] ; then
        echo " "
        echo "$NAME, Fail, Expected "0", got ${TEST_OUTPUT}"
    elif [[ ${have_compiler} -ne 0 ]] ; then
        echo " "
        echo "$NAME, Fail, No C compiler"
    else
        echo " "
        echo "$NAME, Pass"
    fi
        echo " "
        echo "-------------------------------"
        echo " "
done
