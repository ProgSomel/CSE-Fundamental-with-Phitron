#include <stdio.h>
int main() {
    
    int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);
    int totalDaYS = M1*D;
    int daysNeeded = totalDaYS/M2;
    printf("%d", daysNeeded);
    return 0;
}