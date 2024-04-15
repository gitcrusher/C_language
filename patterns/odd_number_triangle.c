#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;// this is initialized in this for loop so that values would be same if its added out of the loop the values will be all odd no in sequence like 1,3,5,7,9,11,13,17,19... and so on
        for(int  j=1;j<=i;j++){// by changing j<=n we could make it as a square with repeated element
            printf("%d",a);
            a=a+2;
        }
         printf("\n");

    }
    return 0;
}
    