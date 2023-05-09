#include <stdio.h>
int main() {
    
    int arr[4] = {20, 40, 10, 30} ;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j <4; j++) {
            if(arr[i]<arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < 4; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}