
#include <Windows.h>
#include <TlHelp32.h>
#include "bvinjector.h"
#include <iostream>

int main() {
    bvinjectorstart();

    std::cout << "Exiting main app..." << std::endl;
    return 0;
}