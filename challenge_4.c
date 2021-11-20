#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int s = 0;
    int m = 0;
    printf("entrer le nombre N :");
    scanf("%d", &n);

    while (n != 0){
        if(n<0 || n>100)
      printf(" serie les nombres  positifs entre 0 et 100 :\n");
        else if (n > 0 && n <= 100){
            if (m < n)
                m = n;
            s = s + n;
        }
        printf("entrer le nombre N :");
        scanf("%d", &n);
    }
    printf("le max : %d \n",m);
    printf("la somme : %d",s);
    return 0;
}
