#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[51];
    char str2[51];
    char finalstr[101];

    scanf("%s %s", str1, str2);
    sprintf(finalstr,"%s%s", str1, str2);

    int i;
    int N=strlen(str1)+strlen(str2);
    int check=1;

    for(i=0; i<N; i++)
    {
        if (finalstr[i]!=finalstr[N-1-i]) 
        {
            check=0;
            break;
        }
    }

    if(check!=0) printf("ok:%s\n",finalstr);
    else printf("not_ok:%s\n",finalstr);
    return 0;
}