#include <iostream>
#include <stdio.h>

#include "my_lib.h"
#include "linalg.h"
#include "boost/version.hpp"

void print_hello_world()
{
    printf("Printf: Hello World\n");
}

void cout_hello_world()
{
    std::cout << "Cout: Hello World" << std::endl;
}

void print_linalg_vector()
{
    linalg::aliases::float3 my_float3 { 1, 2, 3 };
    std::cout << "Vec: " << my_float3[0] << ", " << my_float3[1] << ", " << my_float3[2] << std::endl;
}

void print_boost_version()
{
    std::cout << "Boost Version: " << BOOST_VERSION << std::endl;
}
