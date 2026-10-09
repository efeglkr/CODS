#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x ,y,toplam ;
	printf("1.sayiyi giriniz:");
	scanf("%d",&x);
	printf("2. sayiyi giriniz:");
	scanf("%d",&y); 
	toplam=x+y;
	printf("toplam:%d",toplam);
	return 0; 
}
