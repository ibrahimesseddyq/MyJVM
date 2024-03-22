/*
    Author:       Ibrahim Esseddyq [ibes-sed]
    Contributors: [none]

    Description:
    Here you can find the VM definition and its components ex, Cpu...

    Specs:
    no specs
*/
#ifndef VM_H
#define VM_H
#include <stack>
typedef std::stack<uint8> stack8

    class x_cpu
    {
        stack8 r1;
        stack8 r2;
        stack8 r3;

        uint32 PC;
    }

    // mstack represents the main stack 
    //TODO 
    //-get some deep knowledge on Automata Theory :)
    class vm
    {
        public:
            x_cpu  cpu;  
            stack8 mstack;
    }
#endif