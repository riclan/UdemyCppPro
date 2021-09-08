#include <iostream>

#include "my_lib.h"

#include "ProjectConfig.h"

int main()
{
    cout_hello_world();

    std::cout << PROJECT_VERSION_MAJOR << "."
        << PROJECT_VERSION_MINOR << "."
        << PROJECT_VERSION_PATCH << std::endl;

    return 0;
}
