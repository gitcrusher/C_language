#include<stdio.h>
int main(){
    int n;
    int m;
    printf("Enter your column no: ");
    scanf("%d",&m);
    printf("Enter your row no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=m;k++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}