/*symbolic patternn*/
#include<stdio.h>

void main()
{
    int i;
    int j;
     printf("\n Symbolic Pattern\n\n");
      for(i=1;i<=5;i++)
      {
          for(j=1;j<=i;j++)
          {
              printf("*");
          }
          printf("\n");
      }
}
