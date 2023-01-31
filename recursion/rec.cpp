#include "rec.hpp"

int show1(int El){

        if(El < 0){

                return 0;
        }

        std::cout << El << std::endl;

        El--;

        show1(El);

        return El;

}


int show2(int El, int n){

        if(n > El){
                return 0;
        }

        std::cout << n << std::endl;

        n++;

        show2(El, n);

        return n;
}

