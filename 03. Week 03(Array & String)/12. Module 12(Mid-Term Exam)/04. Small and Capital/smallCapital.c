#include <stdio.h>
#include <string.h>
int main() {
    
    char s[1001];
    scanf("%s", &s);
    int capital = 0;
    int small = 0;
    for(int i=0; i<strlen(s); i++) {
       if(s[i] >= 97&&s[i] <=122) {
        small++;

       }
       else {
        capital++;
       }

    }
    printf("%d %d", capital, small);
    return 0;
}