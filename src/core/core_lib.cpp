#include "core_lib.h"
#include <iostream>

core_lib::core_lib()
{
    std::cout << "Core library initialized." << std::endl;
}

core_lib::~core_lib()
{
    std::cout << "Core library destroyed." << std::endl;
}

void core_lib::library()
{
    std::cout << "This is the core library." << std::endl;
}
