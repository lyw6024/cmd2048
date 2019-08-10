#include "pub.h"
#include <conio.h>

void goUp( int[][4] );
void goDown( int[][4] );
void goLeft( int[][4] );
void goRight( int[][4] );
void draw( int[][4] );
void generator( int[][4] );

int main(void)
{
    char op,gameContinues=1;
    int bitmap[4][4];


    generator(bitmap);

    while(1)
    {
        if(gameContinues==0)
            break;
        op=getch();
        switch (op)
        {
            case 'a':
                goLeft(bitmap);
                break;
            case 'w':
               
                goUp(bitmap);
                break;
            case 'd':
              
                goRight(bitmap);
                break;
            case 's':
                goDown(bitmap);
                
                break;
            default:
                gameContinues=0;
                break;
        }

        draw(bitmap);



    }


    return 0;
}

void mergeNeighbor(int *a)
{
    int i;
    for(i=0;i<3;i++)
    {
        if(a[i]==a[i+1])
        {
            a[i]=2*a[i];
            a[i+1]=0;
        }
    }
}


