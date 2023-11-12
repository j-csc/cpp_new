# cpp_new

## Requirements
- vcpkg
- cmake 3.14^
- clang 14.0.3

## Setup
```bash
# Add vcpkg as a submodule
git submodule add https://github.com/microsoft/vcpkg.git
git submodule update --init --recursive

# Install vcpkg dependencies
./vcpkg/bootstrap-vcpkg.sh
./vcpkg/vcpkg integrate install
```