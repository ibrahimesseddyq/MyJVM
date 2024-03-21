#ifndef VM_H
#define VM_H
#include <stack>
    /*
        mstack represents the main stack 
        //TODO 
        -add registers
        -add a processor stimulator
    */
    class vm
    {
        public:
            stack<uint8> mstack;
    }
#endif