#include <stdio.h>
int main()
{

    // char a[5]={'s', 'o', 'm', 'e', 'l'};
    // char a[5]="somel";
    // for(int i=0; i<5; i++) {
    //     // printf("%c", a[i]);
    //     printf("%s", a);

    // }

    char a[5] = "somel\0";
    for (int i = 0; i < 5; i++)
    {
        // printf("%c", a[i]);
        printf("%s", a);
    }

    return 0;
}