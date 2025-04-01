#include <unistd.h>

void ft_putchar(char c ) {
	write(1 ,&c ,1);
}

void ft_putnumber(int num1 , int num2) {

			ft_putchar((num1 / 10) + 48);
			ft_putchar((num1 % 10) + 48);
			ft_putchar(' ');	
			ft_putchar((num2 / 10) + 48);
			ft_putchar((num2 % 10) + 48);
			if(num1 != 98 ||  num2 != 99){
				ft_putchar(',');
				ft_putchar(' ');
			}

}


void ft_print_comb2() {
	int num1 =0;
	int num2 =0;

	while(num1 <= 98)  {	
		num2 = num1 + 1;
		while(num2 <=99){ 
		ft_putnumber(num1 , num2);
		num2++;
		}
		num1++;
	}
}


int main() {

	ft_print_comb2();

}
