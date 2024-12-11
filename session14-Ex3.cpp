#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "Hello";
    int length = strlen(word);
    printf("Chuoi da khai bao la: %s\n", word);
    printf("Chuoi dao nguoc la: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}
