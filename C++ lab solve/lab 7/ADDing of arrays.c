#include<stdio.h>
int main()
{
int array1[10]={1,2,3,4,5,6,7,8,9,0},array2[10]={23,212,41,3,2,5,3,3,23,2},array3[10],i;

printf("Addition between two array\n");
printf("Third array is : \n");
for(i=0;i<10;i++)
    {

    array3[i]=array1[i]+array2[i];

    printf("array3[%d] = %d\n",i,array3[i]);
    }

return 0;
}
