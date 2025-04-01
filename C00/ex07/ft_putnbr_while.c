#include <unistd.h>
#include <stdio.h>

int ft_digit(int nbr) {
	int result =0;
	if(nbr ==  0) {
		result = 1;
		return result;
	}

	while(nbr > 0) {
		result++;
		nbr /= 10;
	}
	

	return result;
}

int ft_div(int digit) {

	int result =1;
	if(digit == 1) {
		return result;
	}


	while(digit > 1){
		result = result * 10;
		
		digit--;
	}
	return result;
}

void ft_putchar(char c) {
	write(1 , &c,1);
}

void ft(int nbr)  {

	if(nbr < 0){
		ft_putchar('-');
		nbr = -nbr;

	}	
	int digit = ft_digit(nbr);
	int div = ft_div(digit);
	
	char c ;

	while(digit > 0) {

		c = (nbr / div ) % 10 + 48;
		ft_putchar(c);
		div /= 10;
		digit--;
	}

}


int main() {

	int nbr = -765467866;
	ft(nbr);

}
