#include <cs50.h>
#include <math.h>
#include <stdio.h>


void determine_card(long credit_no, int digit_no);
int validate_card(long credit_no, int digit_no);

int main(void){
    int digit_no=0;
    long credit_no = get_long("Credit Number: ");
    long credit_no2 = credit_no;


    //get the digit number
    do{
    credit_no2/=10;
    digit_no++;
    }while(credit_no2!=0);

    //determine the card
    if(digit_no == 15 || digit_no == 13 || digit_no == 16){

        //validate the card
        if(validate_card(credit_no, digit_no) != 0){
           // printf("VALID\n");

            //determine the card
            determine_card(credit_no, digit_no);

        }else{
            printf("INVALID\n");
        }
    }else{
        printf("INVALID\n");
        }


    }

void determine_card(long credit_no, int digit_no){
    if(digit_no == 15){
        printf("AMEX\n");
    }else if(digit_no == 13){
        printf("VISA\n");
    }else if(digit_no == 16){
        if(credit_no/1000000000000000 == 5){
            printf("MASTERCARD\n");
        }else{
            printf("VISA\n");
        }
    }
}

int validate_card(long credit_no, int digit_no){
    //get the number on each digit of the credit number
        int place_no[digit_no];
        long credit_no3 = credit_no;
        int sum_place_no = 0;

        for(int i=0; i<digit_no; i++){
            place_no[i] = credit_no3%10;
            credit_no3 = credit_no3/10;
           // printf("%i\n", place_no[i]);
        }

    for(int i=0; i<digit_no; i++){
        if(i%2 != 0){
            if(place_no[i]<5){
            sum_place_no += place_no[i]*2;me            }else{
            sum_place_no += place_no[i]*2-9;
            }
        }else{
        sum_place_no += place_no[i];
        }
    }
    if(sum_place_no%10 == 0){
        return 1;
    }else{
        return 0;
    }
}
