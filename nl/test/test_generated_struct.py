import re
import sys

def main():
    print("\nGENERATED STRUCTS TESTS:")

    file_ = open('cache_test/test_generated_struct.h', 'r')
    contents = file_.read()

    testnum = 1
    fail = False

    def test(title, fun):
        nonlocal testnum, fail
        print("\nTest {} - {}".format(testnum, title))
        if fun():
            print("PASSED\n");
        else:
            print("FAILED\n");
            fail = True
        testnum = testnum + 1       


    test("Empty struct", lambda: re.search(r"\s*struct\s*test_generated_struct0empty_struct00type\s*\{\s*\};", contents))
    test("Empty function is not a struct", lambda: not re.search(r"\s*struct\s*test_generated_struct0empty_function00type\s*\{\s*\};", contents))

    return (1 if fail else 0)

sys.exit(main())
