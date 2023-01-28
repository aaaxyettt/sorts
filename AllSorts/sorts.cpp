#include "sorts.hpp"


void random(int *ar, int size){
        srand(time(nullptr));
        for (int i = 0; i < size; i++) {
                ar[i] = rand() % 100;
        }
}

void print(int *ar, int size){
        for(int i = 0; i < size; i++){

                std::cout << ar[i] << '\t';
        }
        std::cout << '\n';
}


int search(int *ar, int size, int i){
        int min = ar[i];
        int index = 0;
        for(int j = i; j < size; j++){
                  if(ar[j] <= min){
                          min = ar[j];
                          index = j;
                  }
        }
        return index;
}


void swap(int &a,int  &b){
	int temp = a;
	a = b;
	b = temp;
}



void selectionSort(int *ar, int size){
        for(int i = 0; i < size; i++){
                swap(ar[i], ar[search(ar, size, i)]);
        }
}



bool check(int *ar, int size){
         int count = 0;

         for(int i = 0; i < (size - 1); i++){
                 if(ar[i] <=  ar[i +1]){
                         count = count + 1;
                 }
         }
         std::cout << std::endl;
         if (count == 9){
                 return true;
         }
	 return false;
}



void NewNumber(int *ar, int size, int number){
         std::cout<< number << std::endl;
         if (number < ar[0]){
                 std::cout << "0" << std::endl;
         }else if (number > ar[size - 1]){
                 std::cout << size << std::endl;
         }else{
                 int index = 0;
                 for(int i = 1; i < size - 1; i++){
                         if (ar[i] == number){
                                index = i;
                         } else if(ar[i] < number && number < ar[i+1]){
                                index = i + 1;

                         }

                 }
                 std::cout << index << std::endl;
           }
}



void insertionSort(int *ar, int size){
        for (int i = 1; i< size; i++){
                 for (int j = i; j > 0 && ar[j-1] > ar[j]; j--){
                        swap(ar[j-1], ar[j]);
                 }
	}
}





void randomFill(int *bigAr, int size, int min, int max){
	srand(time(nullptr));
        for (int i = 0; i < size; i++){
		int num = rand()%100;
                if (num <= max && num >= min){
			bigAr[i] = num;
                }
                else{
			i = i - 1;
		}
        }
}


void printBigAr(int *bigAr, int size){
	for(int i = 0; i < size; i++){
		std::cout << bigAr[i] << "\t";
        }
	std::cout << "\n"; 
}


void countSort(int *bigAr, int *smallAr,int size){
	for(int j = 0; j < size; j++){
		int num = bigAr[j];
		smallAr[num] = smallAr[num] + 1;
	}
}


void printSmallAr(int *smallAr){
	for(int i = 0; i < 100; i++){
		if(smallAr[i] <= 10){
			for(int k = 0; k < smallAr[i]; k ++){
				std::cout << i << " " << "\t";
			}
			std::cout << "\n";
		}
		else{
			for(int k = 0; k < 10; k ++){
				std::cout << i << " " << "\t";
			}
			std::cout << " - " << smallAr[i] - 10 << "\n";
		}

	}
}

