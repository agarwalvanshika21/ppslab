#include <stdio.h> 

int main(){

    float radius ;

    float area , circumference ;

    float x = 3.14 ;

    printf("Enter the radius :");
    scanf("%f" , &radius);

    area = x*radius*radius ;

    circumference = 2*x*radius ;

    printf("the area of the circle is : %2f \n" , area);
    printf("circumference of the circle is : %2f " , circumference);

    return 0;
}