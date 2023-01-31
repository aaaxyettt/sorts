#include "rec.hpp"
#include <iostream>

int main(){

        show1(5);       //вывод чисел от  n до 0  
        
	std::cout << "\n";

        show2(5, 0);   //вывод чисел от  n до 0 

	std::cout << "\n"

	int ar[10];    //поиск наибольшего и наименьшего чисел в массиве  
	random(ar, 10);
	print(ar, 10);
	getMax(ar, 10, ar[9]);
	getMin(ar, 10, ar[9]);


        return 0;

}

