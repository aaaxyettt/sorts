#include "rec.hpp"

int show1(int El){
        if(El < 0){
//поробуй здесь вызвать std::cout << std::endl;
                return 0;
        }
        std::cout << El << " "; //std::endl; , лучше после вызова этой функции вызвать на новую строку...
        show1(El - 1);	//на одну строчку ниже)
        return El;
}

//это не годится.... параметр должен быть 1!!!, а не два...
//попробуй вызвать вывод чисел на экран после вызова функции...
int show2(int El, int n){
        if(n > El){
                return 0;
        }
        std::cout << n << " "; //std::endl;
        n++;
        show2(El, n);
        return n;
}

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
//функция, которая возвращает максимальное значение из массива
//не должна принимать третий параметр... потому что не очевидно как пользоваться....
int getMax(int *ar, int size, int max){
	if(size <= 0){
		std::cout << max << std::endl;
		return 0;
	}
	else if(ar[size - 1] > max){
		max = ar[size - 1];
	}
	size--;
	getMax(ar, size, max);
	return size;
}
//аналогично как с функцией выше...
int getMin(int *ar, int size, int Min){
	if(size <= 0){
		std::cout << Min << std::endl;
		return 0;
	}
	else if(ar[size - 1] < Min){
		Min = ar[size - 1];
	}
	size--;
	getMin(ar, size, Min);
	return size;
}







	



