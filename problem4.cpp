#include <stdio.h>
#include <string.h>

void count_word(char *word, char *sen, int &num)
{
    num=0;
    int i=0,j=0;
    while (1)
    {
        if(i>strlen(sen)) break;
        for (j=0; j<strlen(word); j++)
        {
            if(*(word+j)!=*(sen+i+j)) break;
            else if(j+1==strlen(word)) 
            {
                num++; 
                break;
            }
            else continue;
        }
        i++;
    }
}

int main(void)
{
    const int MAX_WORD_LEN=10;
    const int MAX_SENT_LEN=100;
    char word[MAX_WORD_LEN];
    char sentence[MAX_WORD_LEN];
    int num=0;
    scanf("%s ", word);
    scanf("%s", sentence);
    count_word(word, sentence, num);
    printf("%d\n", num);
    return 0;
}