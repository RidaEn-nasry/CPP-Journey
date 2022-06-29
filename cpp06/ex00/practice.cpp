


#include <iostream>




// int count(char *str) {

// }


// char    getAsciiNum( char c ) {
//     return (c - '0');
// }

int main( void ) {
//    converting a string char* to int using static_cast 
    std::string str = "123";
    int arr[3];
    for (int i =0; i < str.size(); i+++)
        arr[i] = static_cast<int>(str[i]) - '0';
    
    int sum = 0;
    for (int i =0; i < str.size(); i++)
        sum += arr[i] * pow(10, str.size() - i - 1);
    

    // char *str = new char[6];
    
    // strcpy(str, "12345");

    // int arr[5];
    // for (size_t i = 0; str[i] != '\0'; i++)
    // {
    //     arr[i] = static_cast<int>(str[i]) - '0'; 
    //     std::cout << arr[i] << std::endl;

    // }

    // // convert all digits in arr to one int
    // int result = 0;
    // for (size_t i = 0; i < 5 ; i++)
    //     result += arr[i] * pow(10, 5 - i);
    // std::cout << result << std::endl;
    return 0;
}