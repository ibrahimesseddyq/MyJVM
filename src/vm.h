#ifndef VM_H
#define VM_H
#include <stack>
typedef stack<uint8> stack8
    /*
        mstack represents the main stack 
        //TODO 
        -get some deep knowledge on Automata Theory :)
    */
    class x_cpu
    {
        stack8 r1;
        stack8 r2;
        stack8 r3;

        uint32 PC;
    }
    class vm
    {
        public:
            x_cpu  cpu;  
            stack8 mstack;
    }
#endif