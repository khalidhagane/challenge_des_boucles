#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s=0,max=0,i,n;

    for(i=1;i<=10;i++)
    {
         printf("entrr le nombre N :");
         scanf("%d",&n);

        if(max<n){
            s=s+i;
            max=n;
         }
    }

        printf("le max = %d\n",max);
        printf("la somme = %d",s);
    return 0;
}
