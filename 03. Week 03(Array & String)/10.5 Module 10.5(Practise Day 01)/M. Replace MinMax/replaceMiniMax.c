#include <stdio.h>
int main() {
    
    int n;
    scanf("%d", &n);
    int a[n];
    int max = a[0];
    int min = a[0];
    int minIndex, maxIndex;
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++) {
        if(a[i]<min) {
            min = a[i];
            minIndex = i;
        }
    }
           
    for(int i=0; i<n; i++) {
        if(a[i]>max) {
            max = a[i];
            maxIndex = i;
        }
    }
    
           
    for(int i = 0; i <n; i++) {
        if(i==maxIndex) {
            i=minIndex;
        }
        
        else if(i==minIndex) {
            i = maxIndex;
        }
    }
    for(int i = 0; i <n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}