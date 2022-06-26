#include <stdio.h>
#include <string.h>
#define x 50

void invert(int n, char str[])
{
    char temp[x];
    int i;
    strcpy (temp, str);
    char *p=str;
    for (i=0; i<n; i++)
    {
        *(p+i)=temp[n-i-1];
    }
    for (i=0; i<strlen(str)-n; i++)
    {
        *(p+n+i)=temp[strlen(str)-i-1];
    }
}

int main(void)
{
    int firstletter;
    char str[x];
    scanf("%d", &firstletter);
    scanf("%s", str);
    invert (firstletter, str);
    printf("%s\n",str);
    return 0;
}