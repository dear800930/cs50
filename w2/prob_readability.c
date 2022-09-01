#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


float L, S, W;
int index, count_words(string text);
int count_letters(string text);
int count_sentences;

int main(void)
{
    //get string
    string text = get_string("Text: ");

    //calculte no. of words
    W = count_words(text);


    //calculate the average no. of letters per 100words
    L = count_letters(text)*100 /W;

    //calculate the average no. of sentences per 100words
    for(int i=0, n= strlen(text); i<n; i++){
        if(text[i] ==46 || text[i]==33 || text[i]== 63){
            count_sentences++;
        }
    }
    S = count_sentences*100 /W;
    printf("words : %f\nletters : %f\n, sentences : %f\n",W, L, S);

    //calculate the index
    index = round(0.0588 * L - 0.296 * S - 15.8);

    if(index < 1)
    {
        printf("Before Grade 1\n");
    }else if(index >=1 && index <= 16)
    {
        printf("Grade %i\n", index);

    }else
    {
        printf("Grade 16+\n");
    }
}

int count_words(string text){
    int w=0;
    for(int i=0, n= strlen(text); i<n; i++){
        if(text[i] == 32){

            w++;
        }
    }
    return w+1;
}

int count_letters(string text){
    int l=0;
    for(int i=0, n= strlen(text); i<n; i++){
        if(tolower(text[i])>=97 && tolower(text[i])<=122){

            l++;
        }
    }
    return l;
}
