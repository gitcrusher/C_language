//code should take input of now thta shoud be itrated from 1 unntill that no and then another output whoch would be telling how many times to print that output
#include<stdio.h>
int main(){
    int r;
    int c;
    // int g;
    // int b;
    // int i;
    printf("Enter your no: ");
    scanf("%d ",&c);
    printf("\nEnter rows you want: ");
    scanf("%d",&r);
    for(int i=1;i<=c;i++){
        for(int j=1;j<=r;j++){
            printf("%d",j);
            ;        }
        printf("\n");
    }
    // for (int i=1;i<=c;i++){
    //     printf("%d",i);
    //     b=i;
    // }
    // for(int j=1;j<=g;j++){
    //     printf("%d",b);
    // }
    // printf(" \n");
    // return 0;
}