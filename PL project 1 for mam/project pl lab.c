#include<stdio.h>
int main ()
{
    int t,m,i=0;
    char ans;
    printf("  New Quiz  \n");
    printf("If you want to give this type 1:");
    scanf("%d",&t);
    if (t==1)
    {
        printf("You are eligible for the Quiz \n");
        printf("#Note: You have to press A or B or C or D as the answer for all question<\n ");
        printf("[Those A,B,C,D are the serial number of every questions given bellow.]\n");
        //mam my questions are star from here..
        printf("\n  Question number 1 is\n");
        printf("What is the ASCII value of A.\n");
        printf(" A.65\n B.25\n C.69 \n D.99");
        printf("\n What is your answer:");
        getchar();

        scanf("%c", &ans);
printf("The correct ans is A.65");
        switch(ans)
        {
        case 'A':

            printf("CONGRATULATION YOUR ans IS RIGHT");
            i=1;
            break;
        case 'B':

            printf("Sorry your ans is wrong.");
            printf("The correct ans is A.65");
            break;
        case 'C':

            printf("Sorry your ans is wrong.");
            printf("The correct ans is A.65");
            break;
        case 'D':

            printf("Sorry your ans is wrong.");
            printf("The correct ans is A.65");
            break;
        default:
            printf("sorry you have press a wrong option");
            break;
        }
        printf("\n Question number 2 is\n");
        printf("Which one is binary number ");
        printf(" \n A.2 \n B.3\n C.0 \n D.5");
        printf("\n What is your answer:");
        getchar();

        scanf("%c", &ans);

        switch(ans)
        {
        case 'C':

            printf("CONGRATULATION YOUR ans IS RIGHT");

            i=i+1;
            break;
        case 'A':

            printf("Sorry your ans is wrong.");
            printf("The correct ans is C.0");
            break;
        case 'B':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is C.0");
            break;
        case 'D':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is C.0");
            break;
        default:
            printf("sorry you have press a wrong option");
            break;
        }
        printf("\n Question number 3 is\n");
        printf("what is the sum of 1+1");
        printf(" \n A.4\n B.2 \n C.6 \n D.0");
        printf("\n What is your answer:");
        getchar();

        scanf("%c", &ans);

        switch(ans)
        {
        case 'B':

            printf("CONGRATULATION YOUR ans IS RIGHT");
            i=i+1;
            break;
        case 'A':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is B.2");
            break;
        case 'C':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is B.2");
            break;
        case 'D':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is B.2");
            break;
        default:
            printf("sorry you have press a wrong option");
            break;
        }
        printf("\n Question number 4 is\n");
        printf("What is the symbol of multipication ");
        printf(" \n A.+\n B.- \n C./ \n D.*");
        printf("\n What is your answer:");
        getchar();

        scanf("%c", &ans);

        switch(ans)
        {
        case 'D':

            printf("CONGRATULATION YOUR ANS IS RIGHT");
            i=i+1;
            break;
        case 'A':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is D.*");
            break;
        case 'B':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is D.*");
            break;
        case 'C':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is D.*");
            break;
        default:
            printf("sorry you have press a wrong option");
            break;
        }
        printf("\n Question number 5 is\n");
         printf("what is the value of 10*2");
         printf(" \n A.20\n B.28 \n C.39 \n D.0");
          printf("\n What is your answer:");
        getchar();

          scanf("%c", &ans);

        switch(ans)
        {
        case 'A':

            printf("CONGRATULATION YOUR ANS IS RIGHT");
            i=i+1;
            break;
        case 'B':

            printf("Sorry your ans is wrong.");
             printf("The correct ans is A.20");
            break;
        case 'C':

            printf("Sorry your ans is wrong.");
            printf("The correct ans is A.20");
            break;
        case 'D':

            printf("Sorry your ans is wrong.");
            printf("The correct ans is A.20");
            break;
        default:
            printf("sorry you have press a wrong option");
            break;
        }


    }
    else
    {
        printf("Thats all for today ");
    }
    printf("\n your total correct ans is:%d",i);
    m=i*10;
    printf("\n 10 mark for each correct ans.\n So your total mark is :%d",m);
    return 0;

}
