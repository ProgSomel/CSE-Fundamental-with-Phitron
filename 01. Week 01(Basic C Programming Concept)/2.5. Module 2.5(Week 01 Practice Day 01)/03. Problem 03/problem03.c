#include<stdio.h>
int main() {
   int a;
   scanf("%d", &a);
   if(a>=0) {
    int result = a%2;
    if(result==0) {
        printf("even");
    }
    else {
        printf("odd");
    }
   }
    return 0;
}