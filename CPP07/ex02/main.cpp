/*#include <iostream>
#include "Array.hpp"

void test_default_constructor() {
    Array<int> arr;
    std::cout << "Default Constructor: " << (arr.size() == 0 ? "Passed" : "Failed") << std::endl;
}

void test_param_constructor() {
    unsigned int n = 5;
    Array<int> arr(n);
    std::cout << "Parameterized Constructor: " << (arr.size() == n ? "Passed" : "Failed") << std::endl;
}

void test_copy_constructor() {
    unsigned int n = 5;
    Array<int> arr1(n);
    for (unsigned int i = 0; i < n; ++i) {
        arr1[i] = i;
    }
    Array<int> arr2 = arr1;
    bool passed = (arr2.size() == n);
    for (unsigned int i = 0; i < n; ++i) {
        if (arr2[i] != arr1[i]) {
            passed = false;
            break;
        }
    }
    std::cout << "Copy Constructor: " << (passed ? "Passed" : "Failed") << std::endl;
}

void test_assignment_operator() {
    unsigned int n = 5;
    Array<int> arr1(n);
    for (unsigned int i = 0; i < n; ++i) {
        arr1[i] = i;
    }
    Array<int> arr2;
    arr2 = arr1;
    bool passed = (arr2.size() == n);
    for (unsigned int i = 0; i < n; ++i) {
        if (arr2[i] != arr1[i]) {
            passed = false;
            break;
        }
    }
    std::cout << "Assignment Operator: " << (passed ? "Passed" : "Failed") << std::endl;
}

void test_subscript_operator() {
    unsigned int n = 5;
    Array<int> arr(n);
    for (unsigned int i = 0; i < n; ++i) {
        arr[i] = i;
    }
    bool passed = true;
    for (unsigned int i = 0; i < n; ++i) {
        if (arr[i] != static_cast<int>(i)) {
            passed = false;
            break;
        }
    }
    std::cout << "Subscript Operator: " << (passed ? "Passed" : "Failed") << std::endl;
}

void test_out_of_bounds_access() {
    try {
        Array<int> arr(5);
        arr[5] = 10; // This should throw an exception
        std::cout << "Out of Bounds Access: Failed" << std::endl;
    } catch (const std::exception &) {
        std::cout << "Out of Bounds Access: Passed" << std::endl;
    }
}

int main() {
    test_default_constructor();
    test_param_constructor();
    test_copy_constructor();
    test_assignment_operator();
    test_subscript_operator();
    test_out_of_bounds_access();
    return 0;
}
*/
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
