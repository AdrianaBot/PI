//Ficha 3

#include <stdio.h> 
#include <stdlib.h>

/*1. a) 

int main() {
    int x [15] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int *y, *z, i;
    y = x;
    z = x+3;
    for (i=0; i<5; i++) {
        printf ("%d %d %d\n", x[i], *y, *z);
        y = y+1; z = z+2;
    }
}

OUTPUT: 1 1 4 
        2 2 6
        3 3 8
        4 4 10 
        5 5 12

b) 

int main() {
    int i, j, *a, *b;
    i = 3; j = 5;
    a = b = 42;
    a = &i; b = &j;
    i++;
    j = i + *b;
    b = a;
    j = j + *b;
    printf("%d\n", j);
    return 0;
}

OUTPUT: 13*/

//2.
void swapM(int *x, int *y){
    int swap = *y;
    *y = *x;
    *x = swap;
}


//3.
void swap(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

//4. 
int soma (int v[], int N) {
    int total = 0;
    for (int i = 0; i < N; i++) {
        total += v[i];
    }
    return total;
}

//5. com swapM
void inverteArray1 (int v[], int N) {
    for (int i = 0; i < N/2; i++) {
        swapM(v+i,v+N-i);
    }
}

//com swap
void inverteArray2 (int v[], int N) {
    int j = N-1;
    int i = 0;
    for ( ; j < i; i++, j--) {
        swap(v, i, j);
    }
}

//6.
int maximum(int v[], int N, int *m) {
    if (N > 0) {
        for (int i = 0; i < N - 1; i++) {
            int aux = 0;
            if (v[i] > aux) {
                aux = v[i];
            }
            *m = aux;
        }
        return 0;
    }
    return 1;
}

//7. calculando explicitamente o quadrado dos números
void quadrados (int q[], int N) {
    for (int i = 0; i < N - 1; i++) {
        q[i] = i * i;
    }
}

//sem calcular explicitamente o quadrado dos números
void quadrados2 (int q[], int N) {
    q[0] = 0;
    for (int i = 1; i < N; i++) {
        q[i] = q[i-1] + 2 * i - 1;
    }
}

//8. a)
void pascal (int v[], int N) {
    v[0] = 1;
    v[N] = 1;
    if (N == 1) {
        return;
    }
    else {
        int anterior = 1;
        int atual;
        for (int i = 1; i < N; i++) {
            atual = (anterior * (N - i + 1)) / i;
            v[i] = atual;
            anterior = atual;
        }
    }
}

//b)
void pascal2 (int N) {
    int anterior = 1;
    int atual;
    for (int j = 0; j < N; j++) {
        for (int i = 0; i <= j; i++) {
        if (i == 0) {
            printf("1 ");
            continue;
        }
        atual = (anterior * (j - i + 1)) / i;
        printf("%d ", atual);
        anterior = atual;
        }
        printf("\n");
    }
}
