#include<stdio.h>

int main(){
    FILE*fptr;
    fptr= fopen("manya.txt","w");
    int num = 100;
    fprintf(fptr,"%d",num);
    fclose(fptr);
    
    return 0;
}