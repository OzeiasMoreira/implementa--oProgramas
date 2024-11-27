#include <stdio.h>
#include <string.h>

int iterativa(const char *str) {
    int len = strlen(str);
    int i = 0, j = len - 1;

    while (i < len && str[i] != '#') i++;
    if (i == len) return 0; 

    int hash_index = i;
    i = 0;
    
    while (i < hash_index && j > hash_index) {
        if (str[i] != str[j]) return 0;
        i++;
        j--;
    }
    
    return (i == hash_index && j == hash_index); 
}

int main() {
    char input[100];
    printf("Insira a string: ");
    scanf("%s", input);
    
    if (iterativa(input)) {
        printf("A string pertence ao conjunto L.\n");
    } else {
        printf("A string não pertence ao conjunto L.\n");
    }
    return 0;
}
