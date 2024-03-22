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
        stack8 r1; // TODO: use queue instead of stack
        stack8 r2; // TODO: use queue instead of stack
        stack8 r3; // TODO: use queue instead of stack

        uint32 PC;
    }

    // mstack represents the main stack 
    //TODO 
    //-get some deep knowledge on Automata Theory :)
    // 
    class vm
    {
        public:
            x_cpu  cpu;  
            stack8 mstack;
            //heap  mheap;
    }
    /*
        take a lot at powerset construction
            Ref:
                Rabin, M. O.; Scott, D. (1959). "Finite automata and their decision problems". IBM Journal of Research and Development. 3 (2): 114–125. doi:10.1147/rd.32.0114. ISSN 0018-8646.
                Brzozowski, J. A. (1963). "Canonical regular expressions and minimal state graphs for definite events". Proc. Sympos. Math. Theory of Automata (New York, 1962). Polytechnic Press of Polytechnic Inst. of Brooklyn, Brooklyn, N.Y. pp. 529–561. MR 0175719.
                Anderson, James Andrew (2006). Automata theory with modern applications. Cambridge University Press. pp. 43–49. ISBN 978-0-521-84887-9.    
    */
#endif