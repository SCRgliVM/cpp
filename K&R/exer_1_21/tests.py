import subprocess

TEST_PROGRAM = ".\\build\\Learning.exe"

def test(test_number, test_input, test_out):
    program_out = subprocess\
                    .run([TEST_PROGRAM], text=True, capture_output=True, input=test_input)\
                    .stdout
    if test_out == program_out:
        print("Test #"+str(test_number)+" passed")
    else:
        print("Test #"+str(test_number)+" failed")
        print("    Expected out:"+repr(test_out))
        print("    Receive out :"+repr(program_out))

if __name__ == "__main__":
    test(1, "", "")
    test(2, "\n\n", "\n\n")
    test(3, "  d ", "\t\td\t")
    test(4, "Some test text", "Some\ttest\ttext")