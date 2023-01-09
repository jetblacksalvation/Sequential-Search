#include <iostream>
#include <string>

int main(void) {
	srand(time(NULL));
	int arr[100];
	for (int* a = arr; a != arr + 100; a++) {
		*a = 1+rand() % 10;
	}
	std::cout << "what thing are you looking for?\n";
	int target; std::cin >> target; int occurance = 0;
	for (int* a = arr; a != arr + 100; a++) {
		if (target == *a) {
			std::cout << "got it \n";
			occurance++;
		}
	}
	std::cout << "The occurance is " << occurance << ".\n";
}