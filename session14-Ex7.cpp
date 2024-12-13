#include<stdio.h>
#include<string.h>

int main(){
	char input[100];
	int chuCount=0;
	int soCount=0;
	int dbCount=0;
	printf("Nhap vao chuoi ky tu: ");
	fgets(input,sizeof(input),stdin);
	for(int i=0;i<strlen(input);i++){
		if(input[i]>=65 &&input[i]<=90 || input[i]>=97 && input[i]<=122){
			chuCount++;
		}else if(input[i]>=48 &&input[i]<=57){
			soCount++;
		}else{
			dbCount++;
		}
	}
	printf("So ky tu chu cai la: %d",chuCount);
	printf("\nSo ky tu chu so la: %d",soCount);
	printf("\nSo ky tu dac biet la: %d",dbCount);
	return 0;
}