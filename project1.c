#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int rand_num= (rand()%100)+1;
    int n ;
    int number_of_gusses=0;
    do
    {
    printf("Guess the number :\n");
    scanf("%d",&n);
    number_of_gusses++;
    if (n<rand_num)
    {
        printf("Enter number is LESS than the rand number \n");  
    }
    if (n>rand_num)
        {
            printf("The entered number is HIGHER than the rand number \n");
        }

    } while (n!=rand_num);
    printf("You have guessed the numebr in %d Guess",number_of_gusses);
    
    return 0;
}
