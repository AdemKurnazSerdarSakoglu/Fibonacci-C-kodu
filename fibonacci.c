#include<stdio.h>

unsigned long long int fibonacci(unsigned int  n);	//prototip

int main(void)
{
	unsigned long long int result;	//fibonacci value
	unsigned int number; 	//input by user
	
	printf("Tamsayi giriniz: ");
	scanf("%u",&number);
	
	result=fibonacci(number); 	//kullanýcýdan alýnan sayinin fibonacci degerinin hesaplanmasý.
	
	printf("Fibonacci(%1d)= %11u \n",number , result);	//sonucu görüntülenmesi
return 0;
}

unsigned long long int fibonacci(unsigned int n)	//fibonacci fonksiyonunun recursive tanimi..
{
	if(n==0 || n==1){		//ana olay..
		return n;
	}
	else{	//recursive adim
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
