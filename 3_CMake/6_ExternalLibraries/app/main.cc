#include <iostream>

#include "my_lib.h"

#include "ProjectConfig.h"

int main()
{
    std::cout << PROJECT_VERSION_MAJOR << "."
              << PROJECT_VERSION_MINOR << "."
              << PROJECT_VERSION_PATCH << std::endl;

    cout_hello_world();
    print_linalg_vector();

    return 0;
}