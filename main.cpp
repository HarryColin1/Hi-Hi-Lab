#include <iostream>
#include <string>
#include "src/hello.hpp"


int main()
{

    StringCompare compare;

    cout << compare.strcmp_case_insensitive("Hi", "hi") << endl;
    cout << compare.strcmp_case_insensitive("abc", "abd") << endl;
    cout << compare.strcmp_case_insensitive("ABD", "abc") << endl;
    cout << compare.strcmp_case_insensitive("Hello", "HelloWorld") << endl;

    return 0;
}
