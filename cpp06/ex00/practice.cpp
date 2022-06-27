

#include <limits.h>
#include <iostream>

int main( void )
{
    // overflowing a float number
        

    // biggest number that can be represented by a 32-bit float is 3.40282347e+38f (FLT_MAX) 

//    example of lose of precision when converting a float to a double:
    double d = 3.14159265358979323846;
   float f = 3.14159265358979323846f;
//    double d = f;
   std::cout << "f: " << f << std::endl;
   std::cout << "d: " << d << std::endl;
//    std::cout << "f - d: " << f - d << std::endl;


}