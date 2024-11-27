#include<stdio.h>
int return_10times(int*a );
int return_10times(int*a ){
    return (10*(*a));
}

int main(){
    int a = 10;
    printf("THE NEW VALUE OF THE VARIABLE IS :\n %d",return_10times(&a));
    return 0;
}