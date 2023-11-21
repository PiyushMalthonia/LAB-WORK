
#include<stdio.h>
void main()
{
    int i,j,mat[10][10],size=3,sr=0,sc=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("enter the element math1[%d][%d]",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<size;i++)
    {
        sr=sc=0;
        for(j=0;j<size;j++)
        {
            sr=sr+mat[i][j];
            sc=sc+mat[j][i];
        }
    printf("%d:sr=%d and %d:sc=%d",i,sr,j,sc);
}
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        printf("%d\t",mat[i][j]);
    }
    printf("\n");
}
}