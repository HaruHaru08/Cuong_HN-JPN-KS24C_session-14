#include <stdio.h>
#include <string.h>

int main() {
    char sentence[] = "Hello, What your name";
    int count = 0;
    int i = 0;
    printf("Chuoi da khai bao: %s\n", sentence);
    while (sentence[i] != '\0') {
        if ((i == 0 || sentence[i - 1] == ' ') && sentence[i] != ' ') {
            count++;
        }
        i++;
    }
    printf("So tu trong chuoi la: %d\n", count);
    return 0;
}
