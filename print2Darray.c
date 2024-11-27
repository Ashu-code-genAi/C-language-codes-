#include<stdio.h>

int main(){
    int Arr [3][2];
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of array [%d][%d]  \n", i,j );
            scanf("%d",&Arr[i][j]);
        }
        
        
    }
     for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of array [%d][%d] is %d \n", i,j , Arr[i][j]);
            
        }
        
    } 
    return 0;
} 