#include <stdio.h>

 

int main() {
    int num;
    scanf("%d", &num);
    if(num%num==0 && num%1==0){
        printf("Prime\n");
    }else{
        printf("Not Prime\n")

    }
    return 0;
}