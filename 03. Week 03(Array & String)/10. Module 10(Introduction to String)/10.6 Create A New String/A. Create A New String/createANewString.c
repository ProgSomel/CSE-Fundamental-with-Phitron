#include <stdio.h>
#include <string.h>
int main() {
    
    char a[1001];
    char b[1001];
    scanf("%s", &a);
    scanf("%s", &b);
    int s1 = strlen(a);
    int s2 = strlen(b);
    printf("%d %d\n", s1, s2);
    printf("%s %s", a, b);


    return 0;
}