#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[] = "Hello, What your name";
    int count = 0;
    int i = 0;
    printf("Chuoi da khai bao: %s\n", sentence);
    while (sentence[i] != '\0') {
        if (isalpha(sentence[i])) {
            count++;
        }
        i++;
    }
    printf("So ky tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}
