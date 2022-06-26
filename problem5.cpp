#include <stdio.h>
#include <string.h>
#define N 51

int main(void)
{
    char key, letter[N];
    scanf("%c %s", &key, &letter);
    char *p=letter;
    int i, j;
    if (*(p+strlen(letter)-1)==key)
    {
        for(i=0; i<strlen(letter); i++)
        {
            *(p+i)=*(p+i+1);
        }
        *(p+strlen(letter))='\0';
    }
    for(i=0; i<strlen(letter)-1; i++)
    {
        if(*(p+i)==key) 
        for(j=i; j<strlen(letter)-1; j++)
        {
            *(p+j+1)=*(p+j+2);
        }
    }
    printf("%s", letter);
    return 0;
}