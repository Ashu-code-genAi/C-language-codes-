#include<stdio.h>
int count_no(int arr [],int n ){
    int no_of_positive = 0;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
           no_of_positive++; 
        }
        
    }
    return no_of_positive;
}
int main(){
   int arr[] ={ 1, -2, 3,4, -5,6} ;
    printf("Number of positive integer is %d \n", count_no(arr,6));
    return 0;
}