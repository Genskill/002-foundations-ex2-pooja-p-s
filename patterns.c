#include <stdio.h>
#include <cs50.h>

void pattern1(int n)
{
   while (n != 0) {
            for (int i = 0; i < n; i++) {
                printf("#");
            }
            printf("\n");
            n--;
        }   
}

void pattern2(int n)
{
    for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=n-i; j++)
    {
       printf(" ");
     }
    for(int k=1; k<=i;k++)
    {
     printf("#");
    }
   printf("\n");
   }

}



 
  



int main(void) 
{
    int ch = get_int("Enter type of pattern (1 or 2) ");
    int n = get_int("Number of rows ");
    if(ch==1)
        pattern1(n);
    if(ch==2)
        pattern2(n);
    return 0;
 }
