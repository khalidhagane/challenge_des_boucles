#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N;
    printf("entrer le nombre N :");
    scanf("%d",&N);

     for(i=2;i<N;i++){
        if((N%2)==0)
            printf("le nombre pas premier");
        else
            printf("le nombre premier");
       return 0;
     }
     if(N==0 || N==2)
         printf("le nombre pas premier");

     else
        printf("le nombre premier");

    return 0;
}
