#include <stdio.h>
int main() {
    
    int N;
    scanf("%d", &N);
    int A[N];
    int evenElement=0;
    int oddElement=0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < N; i++) {
        if(A[i]%2==0) {
            evenElement++;
        }
        else {
           oddElement++;
        }
    }
    printf("%d %d", evenElement, oddElement);

    return 0;
}