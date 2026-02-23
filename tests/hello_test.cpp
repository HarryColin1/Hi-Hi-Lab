#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"
#include <string>
#include <iostream>

using namespace std;
    StringCompare compare;

TEST_CASE( "Compares the string" )
{
    REQUIRE(compare.strcmp_case_insensitive("Hi", "hi") == 0);
    REQUIRE(compare.strcmp_case_insensitive("abc", "abd") < 0);
    REQUIRE(compare.strcmp_case_insensitive("ABD", "abc") > 0);
    REQUIRE(compare.strcmp_case_insensitive("Hello", "HelloWorld") < 0);
}
