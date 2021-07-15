#include<stdio.h>
int main()
{
int myArray[10],i,j;
printf("Give us 10 Numbers\n");

for(i=0;i<=9;i++){
scanf("%d",&myArray[i]);
}//scan loop

printf("Matches are : ");

for(i=0;i<=9;i++)
    {

    for(j=i+1;j<=9;j++)
    {
        if(myArray[i]==myArray[j])
            {
             if(myArray[j]!=0){
             printf("%d ",myArray[j]);
               myArray[i]=0;
               myArray[j]=0;
             }





            }
        }


    }

return 0;
}
