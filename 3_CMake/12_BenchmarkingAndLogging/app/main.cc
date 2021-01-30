#include <iostream>

#include "loguru.hpp"

#include "my_lib.h"

int main(int argc, char **argv)
{
    cout_hello_world();
    print_linalg_vector();
    print_boost_version();

    loguru::init(argc, argv);
    loguru::add_file("everything.log", loguru::Append, loguru::Verbosity_MAX);
    loguru::add_file("info.log", loguru::Append, loguru::Verbosity_INFO);
    loguru::add_file("warning.log", loguru::Append, loguru::Verbosity_WARNING);
    loguru::add_file("error.log", loguru::Append, loguru::Verbosity_ERROR);

    LOG_F(INFO, "Hello this is an info!");
    LOG_F(WARNING, "Hello this is a warning!");
    LOG_F(ERROR, "Hello this is an error!");

    // int a = 2;
    // int b = 3;
    // CHECK_EQ_F(a, b, "You can also supply a custom message, like to print something: %d", a + b);

    return 0;
}