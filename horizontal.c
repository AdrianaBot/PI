//Ficha 1 - 3.3. Triângulo HORIZONTAL

#include <stdio.h>

void triangulo(int h) {
    for (int n = 0; n < h; n++) {
        for (int p = 0; p < 2 * h - 1; p++) {
            if (p >= h - 1 - n && p <= h - 1 + n) 
                printf("#");
            else printf(" ");
        }
        printf("\n");
    }  
}

int main(){
    triangulo(3);
    return 0;
}