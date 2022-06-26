#include <stdio.h>
#include <string.h>
//本回答
int count_char(char c,char *words)
{
    int n = 0;
    int i = 0;
    while(words[i]!='\0')
    {
        if (words[i]==c) n++; // i文字目とcが一致とcが一致すればn+1
        i++;
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