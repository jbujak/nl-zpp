import re

def main():
    print("\nGENERATED STRUCTS TESTS:")

    file_ = open('cache_test/test_generated_struct.h', 'r')
    contents = file_.read()

    testnum = 1

    def test(title, fun):
        nonlocal testnum
        print("\nTest {} - {}".format(testnum, title))
        if fun():
            print("PASSED\n");
        else:
            print("FAILED\n");
        testnum = testnum + 1       


    test("Empty struct", lambda: re.search(r"\s*struct\s*test_generated_struct0empty_struct0struct\s*\{\s*\};", contents))
    test("Empty function is not a struct", lambda: not re.search(r"\s*struct\s*test_generated_struct0empty_function0struct\s*\{\s*\};", contents))

main()
