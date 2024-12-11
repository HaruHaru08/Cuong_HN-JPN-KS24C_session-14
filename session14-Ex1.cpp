#include<stdio.h>
#include<string.h>

int main(){
	char word[50];
	printf("Nhap mot chuoi bat ky: ");
	fgets(word,50,stdin);
	printf("Chuoi ban vua nhap la: ");
	fputs(word,stdout);
	int length=strlen(word);
	printf("Do dai cua chuoi la: %d",length);
	return 0;
}