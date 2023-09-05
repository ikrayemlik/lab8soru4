

#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "Hello, ";
    char str2[] = "world!";
    char str3[20];

    strcat(str1, str2);
    printf("Birle�tirilmi� dize: %s\n", str1);

    printf("str1'in uzunlu�u: %lu\n", strlen(str1));


    strcpy(str3, str1);
    printf("Kopyalanan dize: %s\n", str3);

    
    int cmpResult = strcmp(str1, str3);
    if (cmpResult == 0) {
        printf("str1 ve str3 e�ittir\n");
    } else if (cmpResult < 0) {
        printf("str1 str3'ten k���k\n");
    } else {
        printf("str1 str3'ten b�y�k\n");
    }


    char altdize[10];
    strncpy(altdize, str1 + 7, 5);
    altdize[5] = '\0';
    printf("Alt dize: %s\n", altdize);


    char *searchResult = strstr(str1, "world");
    if (searchResult != NULL) {
        printf("str1'de 'd�nya' konumunda bulundu: %ld\n", searchResult - str1);
    } else {
        printf("str1'de 'd�nya' bulunamad�\n");
    }

    return 0;
}
