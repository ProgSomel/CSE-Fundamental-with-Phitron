#include <stdio.h>
int main() {
    
    int arr[5]={2, 7, 5, 10, 3};
    int value;
    scanf("%d",&value);
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(arr[i]+arr[j]==value) {
                printf("%d %d ",arr[i], arr[j]);
                break;
            }
        }
    }
    return 0;
}