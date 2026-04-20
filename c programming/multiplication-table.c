#include<stdio.h>
int main(){
    int multipliar ;
    printf("Enter the multipliar :");
    scanf("%d",&multipliar);
    for(int i=1 ; i<=10 ; i++){
        int ans = i*multipliar;
        printf("%d x %d = %d\n" , multipliar , i , ans);
    }

}