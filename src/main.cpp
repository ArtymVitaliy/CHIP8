#include "common.h" 
#include "iostream"
#include "log.h"
#include "memory.h"

int main()
{
    Memory::getInstance().getBlock(5555);
    Logger::logPrint(std::cout, "test");
    return 0;
}
