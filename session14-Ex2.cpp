#include <stdio.h>

int main() {
    char word[] = "Hello";
    printf("Chuoi da khai bao la: %s\n", word);
    printf("Cac ky tu trong chuoi la:\n");
    int length=sizeof(word)/sizeof(char);
    for (int i = 0;i<length-1; i++) {
        printf("%c ", word[i]);
    }
    printf("\n");
    return 0;
}

