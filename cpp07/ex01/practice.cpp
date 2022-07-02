

#include <cstddef>
#include <iostream>
void	display(int *arr, size_t size) {
	for (size_t i = 0; i < size; i++ ){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}



template <typename T>
void	IncDisplay(T *arr, size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		arr[i] += 1;
		std::cout << arr[i] << " "; 
	}
	std::cout << std::endl;
}


int main ( void ) {

	int arr[] = {1, 2, 3, 4, 5};
	display(arr, 5);
	IncDisplay<int >(arr, 5);
	return 0;
}
