#include <stdio.h>
#include <string.h>

int monolitica(const char *str) {
    int len = strlen(str), i, j;

   
    int hash_index = -1;
    for (i = 0; i < len; i++) {
        if (str[i] == '#') {
            hash_index = i;
            break;
        }
    }
    
    if (hash_index == -1) return 0; 
    
    
    for (i = 0, j = len - 1; i < hash_index && j > hash_index; i++, j--) {
        if (str[i] != str[j]) return 0; 
    }
    return 1; 
}

int main() {
    char input[100];
    printf("Insira a string: ");
    scanf("%s", input);
    
    if (monolitica(input)) {
        printf("A string pertence ao conjunto L.\n");
    } else {
        printf("A string não pertence ao conjunto L.\n");
    }
    return 0;
}
