#include <stdio.h>
#include <string.h>
int main() {
    
    char s[1000001];
    fgets(s, 1000001, stdin);
    int sum = 0;
    int size = strlen(s);
    for(int i = 0; i < size; i++) {
        sum += s[i];
    }
    printf("%d", sum);
    return 0;
}