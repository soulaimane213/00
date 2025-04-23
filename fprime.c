#include <stdio.h>
#include <stdlib.h>

int check_prime(int number);



int check_prime(int n){

 int i;

    if (n <= 1)
        return 0;
    i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }


    return 1;


}

int main() {

        int i =0;
        int primediv =1;


        int number = 225225;


        while(number != 1){

                int dev = check_prime(primediv);




                if(dev == 1)  {

                        while(number % primediv ==0) {
                            number /= primediv;
                                 printf("%d" , primediv);
                          }


                } 

                primediv++;

        }

}
