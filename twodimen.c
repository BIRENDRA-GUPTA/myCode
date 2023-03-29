#include<stdio.h>
void main()
{
    int m,n,c,d,first[10][10],second[10][10],sum[10][10];
    printf("enter the number of row and columns of matrics\n");
    scanf("%d%d",&m,&n);
    printf("enter the elements of first matrics\n");

    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    scanf("%d",&first[c][d]);
    printf("enter the elements of seconds matrics\n");
 for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    scanf("%d",&second[c][d]);

    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    sum[c][d]=first[c][d]+second[c][d];
    printf("sum of entered matrics:-\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        printf("%d\t",sum[c][d]);
        printf("\n");
    
    }
}