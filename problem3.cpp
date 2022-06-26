/* C */

#include <stdio.h>
#include <string.h>

int count_char(char c,char* words)
{
    int n = 0;
    int i = 0;
    for(i=0; i<strlen(words); i++)
    {
        if (*(words+i)==c) n++;
    }
    return n;
}

int main(void)
{
    const int N = 50;
    char c;
    char words[N];
    int n = 0;
    scanf("%c ",&c);
    scanf("%[^\n]",words);
    n = count_char(c,words);
    printf("%d\n",n);
    return 0;
}