#include <stdio.h>

void main()
{
    int ara[3][3];
    int a,b,i,j,row,col,sum=0;
    printf("Enter row number: ");
    scanf("%d",&row);
    printf("Enter column number: ");
    scanf("%d",&col);
    printf("Enter your element one by one: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&ara[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==j)
            if(ara[i][j]%2==0){
            sum = sum+ ara[i][j];
            }
        }
        printf("\n");
    }
    printf("Your array in matrix is: \n");

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",ara[i][j]);
        }
        printf("\n");
    }
    printf("\nSum=%d\n",sum);
}

