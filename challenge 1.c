#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,M;
    printf("entrer le nombre N :");
    scanf("%d",&N);

    for(i=1;i<=10;i++){
        M = i * N;
        printf("%d x %d = %d\n",i,N,M);
}
    return 0;
}
