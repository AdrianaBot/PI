//Ficha 2 - Algoritmos numéricos sobre inteiros 

#include <stdio.h>

//1.

float multInt1 (int n, float m) {
    float r = 0;
    for (int i = 0; i < n; i++) {
        r += m;
    }
    return r;
}

//2.
float multInt2 (int n, float m) {
    int r = 0;
    int count = 0; 
    for ( ; n > 0; n /= 2, m *= 2) {
        if (n % 2 != 0) {
            r += m;
            count++;
        } 
    }
    //printf("%d\n", count);    esta linha serve para verificar o número de operações efetuadas
    return r;
}

//3.
int mdc1 (int a, int b) {
    int menor;
    int maior;
    int r;
    if (a < b) {
        menor = a;
        maior = b;
    }
    else {
        menor = b; 
        maior = a;
    }
    for (int divisor = 1; divisor <= menor; divisor++) {
        if (menor % divisor == 0 && maior % divisor == 0) {
            r = divisor;
        }
    }
    return r;
}

//4.
int mdc2 (int a, int b) {
    while (a > 0 && b >0) {
        if (a > b) {
            a -= b;
        }
        if (a < b) {
            b -= a; 
        }
        if (a == b) {
            a;
        }
    }
    return a;
}

//5.
int mdc3 (int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a %= b;
        }
        if (b > a) {
            b %= a;
        }
        if (a == b) {
            a;
        }
    }
    return a+b;
}

//6. a) 
int fib1 (int n) {
    if (n < 2) {
        return 1;
    }
    if (n >= 2) {
        return fib1 (n-1) + fib1 (n-2);
    }
}
//esta solução conta 0 como o 1º elemento na sequência de Fibonacci

//b)
int fib2 (int n) {
    int a = 0, b = 1, c;
    if (n < 2) {
        return 1;
    }
    else {
        for ( ; n > 1; n --) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
//esta solução conta 1 como o 1º elemento na sequência de Fibonacci

