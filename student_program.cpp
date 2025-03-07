#include <stdio.h>

char* reverse(char str1[]);

int main() {
    char text[50];

    printf("Enter str1: ");
    fgets(text, sizeof(text), stdin);

    // ลบ '\n' ที่เกิดจาก fgets
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            text[i] = '\0';
            break;
        }
    }

    reverse(text);

    printf("MAIN : %s\n", text);

    return 0;
}

char* reverse(char str1[]) {
    int len = 0;


    while (str1[len] != '\0') {
        len++;
    }


    for (int i = 0; i < len / 2; i++) {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }

    printf("FUNC : %s\n", str1);

    return str1;
}
