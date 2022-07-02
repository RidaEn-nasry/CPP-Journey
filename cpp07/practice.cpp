#include <iostream>
template <typename T>
void do_thing_templated(T a) {
	a--;
	std::cout << a;
}

void do_thing(int a) {
	a++;
	std::cout << a;
}

template <typename T, typename F>
void iterator(T *arr, unsigned size, F f) {
	for (unsigned i = 0; i < size; i ++) {
		f(arr[i]);
	}
}

int main () {
	int arr[] = {3, 5, 7};
	iterator(arr, 3, do_thing);
	iterator(arr, 3, do_thing_templated<int>);
}
