#include <stdio.h>
#include <stdlib.h>

int main(){
    int bilangan;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan == 0){
        printf("Bilangan adalah nol");
    } else if (bilangan < 0){
        printf("Bilangan adalah negatif");
    }else{
        printf("Bilangan adalah positif");
    }
    return 0;

}