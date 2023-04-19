#include <stdio.h>
#include <string.h>
int main() {
    
    char a[100], b[100];
    scanf("%s %s", a, b);
    // int lengthOfA = strlen(a);
    // int lengthOfB = strlen(b);
    // for(int i = 0; i <=lengthOfB; i++) {
    //     a[lengthOfA] = b[i];
    //     lengthOfA++;
    // }
    
    strcat(a, b);
        printf("%s", a);
    
    return 0;
}