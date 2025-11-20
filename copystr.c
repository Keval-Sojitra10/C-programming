#include <stdio.h>

int main() {
    char src[100], dest[100];
    int i;

    printf("Enter a string: ");
    fgets(src,100,stdin);

    for(i = 0; src[i] != '\0'; i++)
    {  
    dest[i] = src[i];
    }
    dest[i] = '\0';
    
    printf("Copied string: %s", dest);

    return 0;
}
