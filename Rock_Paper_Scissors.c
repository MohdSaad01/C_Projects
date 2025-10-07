#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int userchoice(){
    int userch;
    
    do{
        printf(" Choose an option:-\n1.Rock\n2.Paper\n3.Scissors\n");    
        printf("Enter a choice: ");
        scanf("%d",&userch);
    }while(userch<1 || userch>3);

    switch(userch){
        case 1:
            printf("You chose Rock.\n");
            break;

        case 2:
            printf("You chose Paper.\n");
            break;

        case 3:
            printf("You chose Scissors.\n");
            break;
    }

    return userch;
}

int compchoice(){
    int compch=(rand()%(3-1+1)+1);

    switch(compch){
        case 1:
            printf("Computer chose Rock.\n");
            break;

        case 2:
            printf("Computer chose Paper.\n");
            break;

        case 3:
            printf("Computer chose Scissors.\n");
            break;
    }
    return compch;
}

void compare(int user,int comp){
    if(user==comp){
        printf("It's a TIE.");
    }
    else if(user==1 && comp==3 ||
            user==2 && comp==1 ||
            user==3 && comp==2 
        ){
            printf("You WIN.");
        }       
    else{
        printf("You LOSE.");
    }
}

void main(){
    printf("** Rock Paper Scissors **\n");
    
    srand(time(NULL));
    int user=userchoice();
    int comp=compchoice();
    compare(user,comp);
    
}
   