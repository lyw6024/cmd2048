#include <stdlib.h>
#include "pub.h"
void draw(int a[][4])
{
    int i,j;
    system("cls");
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(j>0)
                    printf(" ");
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
}
