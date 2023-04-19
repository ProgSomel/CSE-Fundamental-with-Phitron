#include <stdio.h>
int main() {
    
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt[7] ={0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        int val = a[i];
        cnt[val]++;
    }
    // printf("0 - %d\n", cnt[0]);
    // printf("0 - %d\n", cnt[1]);
    // printf("0 - %d\n", cnt[2]);
    for(int i = 0; i <=6; i++) {
        printf("%d - %d\n",i,cnt[i]);
    }
    return 0;
}