#include <stdio.h>
int main() {
    
    int n1;
    scanf("%d", &n1);
    int ar1[n1];

    for(int i = 0; i < n1; i++) {
        scanf("%d", &ar1[i]);
    }
    int n2;
    scanf("%d", &n2);
    int ar2[n2];

    for(int i = 0; i < n2; i++) {
        scanf("%d", &ar2[i]);
    }
    int ans[n1+n2];

    for(int i = 0; i < n1; i++) {
        ans[i] = ar1[i];
    }
    int i = n1;
    for(int j = 0; j < n2; j++) {
        ans[i] = ar2[j];
        i++;
    }
    for(int i = 0; i < n1+n2; i++) {
        printf("%d ", ans[i]);
    }

    

    return 0;
}