#include<stdio.h>

int main(){
    int arr [3][10];
    int n ;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the desired numbe for which you want table\n");
        scanf("%d",&n);

        for (int j = 0; j <10 ; j++)
        {
            arr[i][j]=n*(j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nMultiplication Table for number %d:\n", arr[i][0]);
        for (int j = 0; j <10 ; j++)
        {
           printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
        
    }
    return 0;
}