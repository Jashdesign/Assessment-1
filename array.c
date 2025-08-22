#include<stdio.h>
void main(){
    // int arr[5];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // for(int i=0;i<5;i++){
    //     printf("Value : %d\n",arr[i]);
    // }

    // int arr[5];
    // for(int i=0;i<=4;i++){
    //     printf("Enter integer: ");
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<=4;i++){
    //     printf("Integer: %d\n",arr[i]);
    // }

    // int arr[5][4];
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("Enter integer [%d] [%d] : ",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
        
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("integer [%d] [%d] : %d\n",i,j,arr[i][j]);
    //     }
        
    // }
    int arr[5][4][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter integer [%d] [%d] [%d] : ",i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter integer [%d] [%d] [%d] : \n",i,j,k);
            }
        }
        
    }
    
}