#include<stdio.h>
int main(){
    int number ;
    int sum =0 ;
    printf("enter the range:");
    scanf("%d",&number);
    for(int i=0 ; i<=number ; i++){
        
        sum = sum + i ;
        
    }
    printf("total sum is : %d\n",sum);
}