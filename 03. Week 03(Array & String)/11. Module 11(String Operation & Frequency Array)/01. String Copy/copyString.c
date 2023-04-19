#include <stdio.h>
#include <string.h>
int main() {
    
    char a[100], b[100];
    scanf("%s %s", a, b);
    int lengthOfb = strlen(b);
    // for(int i = 0; i <= lengthOfb; i++) {
    //     a[i] = b[i];
    // }
    strcpy(a, b);
    
    printf("%s", a);

    return 0;
}