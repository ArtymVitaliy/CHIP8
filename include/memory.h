#ifndef __MEMORY_H
#define __MEMORY_H

#define MAX_MEMORY_SIZE 4095
#define RESERVED_MEMORY_SIZE 0x200
#include "log.h"
class Memory 
{

private:
    unsigned char memory[MAX_MEMORY_SIZE];
    Memory()
    {
        for (int i=0; i<MAX_MEMORY_SIZE; i++)
            this->memory[i] = 0;
    }
    Memory(Memory const&);          
    void operator=(Memory const&);  
    bool isProgramMemory(unsigned int address)
    {
       return (address >= RESERVED_MEMORY_SIZE && address <= MAX_MEMORY_SIZE);
    } 
public:
    static Memory& getInstance()
    {
        static Memory instance;
        return instance;
    }

    unsigned char getBlock(unsigned short address) 
    {
        if (isProgramMemory(address)) 
            return memory[address];
        else
            Logger::logPrint(std::cout, "get memmory in address");
        return 0;
    }
    void setBlock(unsigned short address, unsigned char val)
    {
        if (isProgramMemory(address)) 
            memory[address] = val;
        else
            Logger::logPrint(std::cout, "set memmory in address");
        return;
    }

};

#endif 
