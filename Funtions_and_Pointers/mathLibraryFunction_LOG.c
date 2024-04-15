#include<stdio.h>
#include<math.h>
int main(){
    double a,b;
    printf("Enter the value of a: ");
    scanf("%lf",&a);
    printf("Enter the value of b: ");
    scanf(" %lf",&b);
    double left_side=log(a*b);
    double right_side=log(a)+log(b);
    if (left_side==right_side) printf("Identit Holds\n");
    else printf("Identity does not hold\n");    
    return 0;
}