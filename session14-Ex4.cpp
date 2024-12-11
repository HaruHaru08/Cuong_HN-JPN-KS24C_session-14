#include <stdio.h>

int main() {
    char word[] = "Play Game";
    char check;
    int count = 0;
    printf("Nhap 1 ky tu bat ky: ");
    scanf("%c", &check);
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == check) {
            count++;
        }
    }
    printf("So lan ky tu '%c' xuat hien trong chuoi la: %d\n", check, count);
    return 0;
}
