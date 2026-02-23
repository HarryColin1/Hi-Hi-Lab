#include <string>
#include <cctype>
#include "hello.hpp"

using namespace std;

int StringCompare::strcmp_case_insensitive(const string& firstString, const string& secondString)
{
    long i = 0;

    while (i < firstString.length() && i < secondString.length())
    {
        char firstChar = tolower(firstString[i]);
        char secondChar = tolower(secondString[i]);

        if (firstChar != secondChar)
            return firstChar - secondChar;

        i++;
    }

    if (firstString.length() > secondString.length())
    {
        return 1;
    }
    if (firstString.length() < secondString.length())
    {
        return -1;
    }
    return 0;
}