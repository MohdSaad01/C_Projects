#include <stdio.h>


int points=0;

void questions(int i){
    char ques[][100]={
        "Q1. According to DeMorgan's;s Theorem, the Boolean expression (AB) is equivalent to:",
        "Q2. Which of these is not a key value of Agile software development?",
        "Q3. How many Hz does the video standard PAL support?",
        "Q4. Which of the following is NOT a computer science algorithm?",
        "Q5. Which of the following physical typologies are used with Ethernet Networks?"
    };

    printf("\n%s\n",ques[i]);
}

void answers(int i){
    char ans[][117]={
        " 1) AB + BA\n 2) AB\n 3) AB + AB\n 4) A + B",
        " 1) Individuals and interactions\n 2) Customer collaboration\n 3) Responding to change\n 4) Comprehensive documentation",
        " 1) 25\n 2) 50\n 3) 59\n 4) 60",
        " 1) Bubble Sort\n 2) Merge Sort\n 3) Quick Sort\n 4) Float Sort",
        " 1) Ring\n 2) Mesh\n 3) Hex\n 4) Star"
    };

    printf("\n%s\n",ans[i]);
}

int check(int i){
    int choice;
    printf("Enter your choice: ");
    scanf("%d",&choice);

    int correct[]={4,4,3,4,4};

    if(correct[i]==choice){
        printf("\nCorrect!!\n");
        return 1;
    }
    else{
        printf("\nWrong!!\n");
        return 0;
    }


}

int main(){

    for(int i=0;i<5;i++){
        questions(i);
        answers(i);
        if(check(i)){
            points++;
        };
    }
    printf("\nYour score is %d out of 5.\n",points);

}