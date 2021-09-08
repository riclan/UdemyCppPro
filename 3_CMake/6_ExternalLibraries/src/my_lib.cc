#include <iostream>
#include <stdio.h>

#include "my_lib.h"

void print_hello_world()
{
    printf("Hello World!\n");
}

void cout_hello_world()
{
    std::cout << "Hello World!" << std::endl;
}

linalg::aliases::float3 print_linalg_vector()
{
    linalg::aliases::float3 my_float3 { 1, 2, 3 };

    std::cout << "Vec: " << my_float3[0] << ", " << my_float3[1] << ", " << my_float3[2] << std::endl;

    return my_float3;
}
