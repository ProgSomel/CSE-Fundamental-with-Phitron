#include <stdio.h>
#include <string.h>
int main()
{

    char s[1000001];
    scanf("%s", s);
    int sum = 0;
    int size = strlen(s);
    for (int i = 0; i < size; i++)
    {
        sum+=s[i]-48;
    }
    printf("%d", sum);
    return 0;
}