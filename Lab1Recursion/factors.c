//find factors
#include <stdio.h>
void main(){
    int n,i;
    printf("ENter a number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d , ",i);
        }
    }
}