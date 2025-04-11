#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) {
	write(1 ,&c, 1);
}



void ft_printaddres(void *addr) {
	int i =0;
	int j =0;

	char hexa[16]= "0123456789abcdef";
	char buffer[16];
	unsigned long int tmp_addr = (unsigned long int )addr;
	while(tmp_addr > 0) {
		
		buffer[j] = hexa[tmp_addr % 16];
		tmp_addr /= 16;
		i++;
		j++;	
	}

		while(i < 16){
			buffer[j] = '0';
			j++;
			i++;
		}
		i--;
	
		while(i >= 0) {
			ft_putchar(buffer[i]);
			i--;
		}
} 



void print_last_spaces( unsigned int size) {

int remaining = size % 16; 
    int spaces_needed = (remaining == 0) ? 0 : 16 - remaining; 
	//printf("%d" , spaces_needed);
  	  
    for (int i = 0; i < spaces_needed; i++) {
        ft_putchar(' '); 
        ft_putchar(' ');
        if (i % 2 != 0) ft_putchar(' ');
    }

}



void print_last_chunks(int start , char *string , unsigned int size) {
	
	unsigned int Ustart = start;
	//int remai = size - Ustart ;

	while(Ustart < size) {
		if(string[Ustart] == '\n' || string[Ustart] == '\t') {
			ft_putchar('.');
			
		}else {
			ft_putchar(string[Ustart]);
		}
		Ustart++;

	}






}


void *ft_print_memory(void *addr, unsigned int size) {

	// Our main variables;
	unsigned int i =0;
//	int j =0;
//	int k =0;
	unsigned int start =0;
	char hexa[16]= "0123456789abcdef";

	//temporary addres ;
	//unsigned long long int tmp_addr = (unsigned long long int )addr;

	//switching the adress to long int;
	//unsigned long long int  adress = (unsigned long long  int)addr;
	
	//unsigned long int div =16;
	
	//switching the adrees to char for printing;
	char *string = (char *)addr;

	
	while(i < size) {
	
	

		
		if(i % 16 == 0 && i != 0) {
			 start = i - 16;
			while(start < i) {
					
				if(string[start] == '\n' || string[start] == '\t') {	
					ft_putchar('.');
		}		else {
					ft_putchar(string[start]);
				}
				start++;
			}
			


			ft_putchar('\n');
			ft_printaddres(&string[i]);
			ft_putchar(':');
			ft_putchar(' ');
		
		}else if(i ==0) {
	
			ft_printaddres(&string[i]);

		ft_putchar(':');
			ft_putchar(' ');	
		}

		ft_putchar(hexa[string[i] / 16]);
		ft_putchar(hexa[string[i] % 16]);
		if(i % 2 != 0){	
			ft_putchar(' ');
	
		}	
		
		i++;
	}

	print_last_spaces(size);
	print_last_chunks(start , string , size);

	return addr;
}

//int main() {

//	char string[] ="Bonjour les amis\nches\t\n\tc est fou\ntout\tce qu on\npeut faire avec\t\n\nprint_memory\n\n\n\tlol\nlol\n ";
//	char string1[]= "helohellohello\n\nhello\n\nhello\n";
	//char string[] = "soulaimanefinishedtehft_printmemorybutforgetthenorminete";
//	unsigned int size = sizeof(string);
//	unsigned int size1 = sizeof(string1);

//	ft_print_memory(string , size);
//	printf("\n\n\n");
//	ft_print_memory(string1 , size1);

	
//}

 




