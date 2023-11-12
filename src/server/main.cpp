#include <iostream>
#include <fmt/format.h>
#include <core_lib.h>

int main(int argc, char **argv)
{
    fmt::print("Hello, {}!\n", "world");

    core_lib();
    return 0;
}
