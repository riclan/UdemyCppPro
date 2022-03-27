#include <iostream>

#include "config.hpp"
#include "my_lib.h"

int main()
{
    print_hello_world();

    std::cout << project_version_major << std::endl;
    std::cout << project_version_minor << std::endl;
    std::cout << project_version_patch << std::endl;

    return 0;
}
