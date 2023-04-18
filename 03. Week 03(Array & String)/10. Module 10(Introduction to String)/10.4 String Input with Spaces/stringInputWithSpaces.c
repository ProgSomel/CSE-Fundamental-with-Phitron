#include <stdio.h>
#include <string.h>
int main() {
    
    char a [18];
    fgets(a, 6, stdin);//?6 ----->size+null(5+1)
    printf("%s", a);
    return 0;
}