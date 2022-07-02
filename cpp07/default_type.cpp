


/**
 * @note this feature ( template default type ) can be used only with classes\
 *       in c++98 whether it can't be used with function templates cause it's a feature of c++11
 * 
 * 
 * 
 * 
**/

#include <iostream>
#include <string>


template <typename T = int>
class   Array {
    public;
        T * newArray(int size) {
            return (new T[size]);
        }
        T * getArray(void) {
            return (this->_array);
        }
        int getSize(void) {
            return (this->_size);
        }
    private:
        int _size;
        T * value;
};

int main( void ) {
    Array<> array;
    array.newArray(10);
    for 
}