#include "sorts.hpp"
#include <iostream>


int main(){
	std::cout << "Selection Sort" << std::endl;
	int ar[10];
	random(ar, 10);
	print(ar, 10);
	selectionSort(ar, 10);
	print(ar, 10);

	std::cout << "Insertion Sort" << std::endl;
	int ar2[10];
	random(ar2, 10);
	print(ar2, 10);
	insertionSort(ar2, 10);
	print(ar2, 10);

	std::cout << "Counting Sort" << std::endl;
	int bigAr[10000];
	int smallAr[100];
	randomFill(bigAr, 10000, 0, 99);
	print(bigAr, 10000);
	std::cout << std::endl;
	countSort(bigAr, smallAr, 10000);
	printSmallAr(smallAr);
	return 0;
}


