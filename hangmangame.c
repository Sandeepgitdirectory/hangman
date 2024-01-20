#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// push the file 
int main(){
    int number,guess,nguesses;
    srand(time(0));
    number=rand()%100+1;//this funcn generates the number
    do{
        printf("Guess the number 1 and 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed the right number\n");
        }
        nguesses++;
    }while(guess!=number);
    
    return 0;
}