#include "pub.h"
void mergeNeighbor(int *a);
void goUp(int bitmap[][4])
{
    int i,j,idx;
        int collector[4];
    for(j=0;j<4;j++)
    {
        idx=0;
        memset(collector,0,sizeof(int)*4);
        for(i=0;i<4;i++)
        {
            if(bitmap[i][j]>0)
                collector[idx++]=bitmap[i][j];
        }
        mergeNeighbor(collector);
        idx=0;
        for(i=0;i<4;i++)
            bitmap[i][j]=0;
        for(i=0;i<4;i++)
            if(collector[i]>0)
                bitmap[idx++][j]=collector[i];
    }
}
void goDown( int bitmap[][4] )
{
        int i,j,idx;
        int collector[4];
    for(j=0;j<4;j++)
    {
        idx=0;
        memset(collector,0,sizeof(int)*4);
        for(i=3;i>=0;--i)
        {
            if(bitmap[i][j]>0)
                collector[idx++]=bitmap[i][j];
        }
        mergeNeighbor(collector);
        idx=3;
        for(i=0;i<4;i++)
            bitmap[i][j]=0;
        for(i=0;i<4;i++)
            if(collector[i]>0)
                bitmap[idx--][j]=collector[i];
    }
}
void goLeft( int bitmap[][4] )
{
    int i,j,idx;
    int collector[4];
    for(i=0;i<4;i++)
   {
       idx=0;
       memset(collector,0,sizeof(int)*4);
        for(j=0;j<4;j++)
            if(bitmap[i][j]>0)
                collector[idx++]=bitmap[i][j];
        mergeNeighbor(collector);
        idx=0;
       memset(bitmap[i],0,sizeof(int)*4);
        for(j=0;j<4;j++)
        {
            if(collector[j]>0)
                bitmap[i][idx++]=collector[j];
        }
   } 
}
void goRight( int bitmap[][4] )
{   
    int i,j,idx;
    int collector[4];
    for(i=0;i<4;i++)
   {
       idx=0;
       memset(collector,0,sizeof(int)*4);
        for(j=3;j>=0;j--)
            if(bitmap[i][j]>0)
                collector[idx++]=bitmap[i][j];
        mergeNeighbor(collector);
        idx=3;
       memset(bitmap[i],0,sizeof(int)*4);
        for(j=0;j<4;j++)
        {
            if(collector[j]>0)
                bitmap[i][idx--]=collector[j];
        }
   } 
}


