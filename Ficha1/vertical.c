//Ficha 1 - 3.3. Triângulo VERTICAL

#include <stdio.h>

void triangulo(int h){
    for (int n = 0; n < h; n++) {
        for (int p = 0; p <= n; p++){
            printf("#");
        }
        printf("\n");
    }
    for (int n = 0; n < h-1; n++) {
        for (int p = h-1; p > n; p--){
            printf("#");
        }
        printf("\n");
    }
}

int main(){
    triangulo(5);
    return 0;
}
