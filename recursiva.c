#include <stdio.h>
#include <string.h>

int recursivaS(const char *str, int start, int end) {
    if (start >= end) return 1; 
    if (str[start] != str[end]) return 0; 
    return recursivaS(str, start + 1, end - 1);
}

int recursiva(const char *str, int hash_index, int len) {
    return recursivaS(str, 0, hash_index - 1) &&
           recursivaS(str, hash_index + 1, len - 1);
}

int main() {
    char input[100];
    printf("Insira a string: ");
    scanf("%s", input);

    int len = strlen(input);
    int hash_index = -1;
    for (int i = 0; i < len; i++) {
        if (input[i] == '#') {
            hash_index = i;
            break;
        }
    }

    if (hash_index == -1 || 
        !recursiva(input, hash_index, len)) {
        printf("A string não pertence ao conjunto L.\n");
    } else {
        printf("A string pertence ao conjunto L.\n");
    }

    return 0;
}
