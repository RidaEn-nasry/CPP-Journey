

#include <limits.h>
#include <iostream>

int main(int argc, char **argv)
{
    // overflowing a float number
        

    // biggest number that can be represented by a 32-bit float is 3.40282347e+38f (FLT_MAX) 

    // changing a float number to binary representation
    float f  = 3.40282347e+38f;
    int bits[32];
    for (int i = 0; i < 32; i++)
    {
        bits[i] = f 
    }
    for (int i = 0; i < 32; i++)
    {
        std::cout << bits[i];
    }


}