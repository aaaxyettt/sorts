#include <iostream>
#include <time.h>

using namespace std;

void random(int *mass, int s){
        srand(time(nullptr));
        for (int i = 0; i < s; i++) {
                mass[i] = rand() % 100;
        }
}

void print(int *mass, int s){
        for(int i = 0; i < s; i++){

                std::cout << mass[i] << '\t';
        }
        std::cout << '\n';
}


int search(int *mass, int i, int n){
        int min = mass[i];
        int index = 0;
        for(int j = i; j < n; j++){
                  if(mass[j] <= min){
                          min = mass[j];
                          index = j;
                  }
        }
        return index;
}


void sort(int *mass, int n){
        for(int i = 0; i < n; i++){
                swap(mass[i], mass[search(mass, i, n)]);
        }
}

bool s(int *mass, int s){
         int count = 0;

         for(int i = 0; i < (s-1); i++){
                 if(mass[i] <=  mass[i +1]){
                         count = count + 1;
                 }
         }
         cout<<endl;
         if (count == 9){
                 return true;
         }
	 return false;
}

void NewNumber(int *mass, int s, int n){
         cout<< n << endl;
         if (n < mass[0]){
                 cout << "0" << endl;
         }else if (n > mass[s - 1]){
                 cout << s << endl;
         }else{
                 int index = 0;
                 for(int i = 1; i < s - 1; i++){
                         if (mass[i] == n){
                                index = i;
                         } else if(mass[i] < n && n < mass[i+1]){
                                index = i + 1;

                         }

                 }
                 cout << index << endl;
           }
}


int main(){
        int mass[10];
        random(mass, 10);
        print(mass, 10);
        sort(mass, 10);
        print(mass, 10);
//        cout<<s(mass, 10)<<endl;

//        NewNumber(mass, 10, 27);
        return 0;
}



