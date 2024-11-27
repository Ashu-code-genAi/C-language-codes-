#include<stdio.h>
float force (float mass);
float force (float mass){
    float g = 9.8;
    return(mass*g);
}

int main(){
    float a;
    printf("Enter the mass of the object :\n");
    scanf("%f",&a);
    printf("The force acting upon the object having mass %.2f Kg is %.2f N\n",a ,force(a));

    return 0;
}