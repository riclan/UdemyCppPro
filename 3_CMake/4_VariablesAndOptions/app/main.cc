#include <iostream>

#include "my_lib.h"

#include "ProjectConfig.h"

#ifdef USE_PRINTF
    #define my_print_function print_hello_world
#else
    #define my_print_function cout_hello_world
#endif

int main()
{
    std::cout << PROJECT_VERSION_MAJOR << "."
              << PROJECT_VERSION_MINOR << "."
              << PROJECT_VERSION_PATCH << std::endl;

    my_print_function();

    return 0;
}