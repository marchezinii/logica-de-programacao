#include <stdio.h>
int compararStrings(char *str1, char *str2);

int main() {
    char *str[] = {"python", "pascal", "java", "rubi", "lua"};
    int i, j;
    char *temp;
    int k;

    for (i = 0; i < 4; i++) {
        k = i;
        for (j = i + 1; j < 5; j++) {
            if (compararStrings(str[k], str[j]) < 0) {
                k = j;
            }
        }
        temp = str[i];
        str[i] = str[k];
        str[k] = temp;
    }

    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
int compararStrings(char *str1, char *str2) {
    int i = 0;
 
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1; 
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }
    
    if (str1[i] == '\0' && str2[i] != '\0') {
        return -1;
    } else if (str1[i] != '\0' && str2[i] == '\0') {
        return 1;
    }
    
    return 0;
}