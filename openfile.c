#include<stdio.h>

int main(){
    FILE*ptr;
    ptr= fopen("manya2.txt","r");
    if (ptr == NULL)
    {
        printf("The file is empty sorry\n");
    }
    
    int num;
    fscanf(ptr,"%d",&num);
    printf("The VALUE OF NUM IS %d\n",num);
    fclose(ptr);
    
    return 0;
}