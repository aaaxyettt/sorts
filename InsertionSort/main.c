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

void Swap(int *mass, int s){
        for (int i = 1; i< s; i++){
                 for (int j = i; j > 0 && mass[j-1]>mass[j]; j--){
                        swap(mass[j-1], mass[j]);

                        }

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

int main(){
        int mass[10];
        random(mass, 10);
        print(mass, 10);
        Swap(mass, 10);
        print(mass, 10);
//        cout<<s(mass, 10)<<endl;

        return 0;
}
