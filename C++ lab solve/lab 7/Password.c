#include<stdio.h>
int main()
{
char Password[100],MainPass[6]={'T','R','O','Z','A','N'};
int i,Total=0;

scanf("%s",&Password);

for(i=0;Password[i]!='\0';i++)
    {

    Total= Total+1;

    }

    if(Total==6)
        {
        for(i=0;i<6;i++)
            {

            if(Password[i]==MainPass[i])
                {
                if(i==5)
                    {

                    printf("Successful");

                    }


                }else
                {

                 printf("Not Successful");
                    break;
                }

            }

        }
        else
        {

        printf("Not Successful");


        }



return 0;
}
