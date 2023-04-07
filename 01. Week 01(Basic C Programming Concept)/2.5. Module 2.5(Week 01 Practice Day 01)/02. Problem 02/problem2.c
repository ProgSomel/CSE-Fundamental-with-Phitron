#include<stdio.h>
int main() {
   int a, b;
   scanf("%d %d", &a, &b);
   int sum = a+b;
   int sub = a-b;
   int mul = a*b;
   float div = a/b;
   printf("%d %c %d %c %d\n",a, '+', b, '=', sum); 
   printf("%d %c %d %c %d\n",a, '-', b, '=', sub); 
   printf("%d %c %d %c %d\n",a, '*', b, '=', mul); 
   printf("%d %c %d %c %0.2f\n",a, '/', b, '=', div); 
    return 0;
}