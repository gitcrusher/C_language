#include<stdio.h>
int main(){
    int r;
    printf("Enter value for r: ");
    scanf("%d",&r);
    int c;
    printf("Enter value for c: ");
    scanf("%d",&c);
    int arr[r][c] ;
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}