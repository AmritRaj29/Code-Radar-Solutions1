#include <stdio.h>

int main() {
    int num1,num2,num3,
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1==num2 && num2==num3){
        printf("Equilateral\n");
    }else if(num1==num2 && num2!=num3 && num1+num2>num3 ){
        printf("Isosceles\n");
    }else{
        print("Scalene\n");
    }

    return 0;
}