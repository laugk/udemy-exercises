
#include <iostream>

using namespace std;


/**
 * The following function update receives 2 parameters, both of them are integer pointers as you can see.
 * They will receive address of 2 integer variables by the tester, those integer variables will be declared by the
 * tester.
 * Your task will be to update those integer variables declared by tester using these pointers p and q.

int update(int *p, int *q){
    // Instruction 1 : Update the integer variable pointed by p: add 10 with that.
    
    *p += 10;
    
    // Instruction 2: Update the integer variable pointed by q: subtract 5 from that.
    
    *q -=5;
    // Instruction 3: You should return the product of those 2 values from this function using return after the
    // above updations.
    
    
    return *p * *q;
    
}

*/
