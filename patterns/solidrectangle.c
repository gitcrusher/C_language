#include<stdio.h>
int main(){
    int r;
    int c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("\nEnter the number of columns : ");
    scanf(" %d",&c);

    for (int i=1;i<=r;i++){ // outter loop deciding no of rows
        for(int i=1;i<=c;i++){ // inner loop deciding no co columns in each row
            printf("*");
        }
        printf("\n");
    }
    if(r=c){
        printf("its a square");
    }
    else
    {
        printf("its a rectangle");
    }
    
}