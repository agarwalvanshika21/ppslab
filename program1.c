#include <stdio.h> 

int main(){

    int marksForSub1 , marksForSub2 , marksForSub3 , marksForSub4 , marksForSub5 ;

    int sum;

    float percentage;

    int total_marks= 500;

    printf("Enter the marks for sub 1 :");
    scanf("%d" , &marksForSub1);

    printf("Enter the marks for sub 2 :");
    scanf("%d" , &marksForSub2);

    printf("Enter the marks for sub 3 :");
    scanf("%d" , &marksForSub3);

    printf("Enter the marks for sub 4 :");
    scanf("%d" , &marksForSub4);

    printf("Enter the marks for sub 5 :");
    scanf("%d" , &marksForSub5);

    sum= marksForSub1 + marksForSub2 + marksForSub3 + marksForSub4 + marksForSub5 ;

    percentage = ((float)sum/total_marks)*100;

    printf("sum of the marks : %d \n" , sum);
    printf("percentage is : %2f\n ", percentage);

    return 0;
}


