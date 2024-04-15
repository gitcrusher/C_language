#include<stdio.h>
int main(){
    int sum[] = {13,45,65,43,21};
    int max = 0;//ik tra da aa random number ha.....
    for(int i = 0;i<5;i++){
        if(max<sum[i]){
            max = sum[i];

        }
    }
    printf("%d",max);
}