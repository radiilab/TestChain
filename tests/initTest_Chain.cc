#include "testChain.h"
/*
in this code the default parameterized 
It checks whether the testnetowk is performing 
at its level 
gcc core command 
    
    
    gcc -lstdc++ \
    -o TestChain \
    -std=c++11 \
    -stdlib=libc++ \
    -x c++ \
    main.cpp Block.cpp Blockchain.cpp sha256.cpp
    ./TestChain

NOTE: we use cmake as our buildsystem and not use the core instructions directly
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    testChain ploy;
    // ploy the pod
    ploy.testHashChain();
    /* code */
    return 0;
}
