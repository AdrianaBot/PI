//Ficha 1. Primeiros Programas
#include <stdio.h>
#include <math.h>

/*1. Estado e atribuições
1.1.

INPUT:
int x, y;
x = 3; y = x+1;
x = x*y; y = x+y;
printf("%d %d\n", x, y);

x = 3; y = 3+1 = 4;
x = 3 * 4 = 12; y = 12 + 4 = 16;

OUTPUT: 12 16

1.2.

INPUT:
int x, y;
x = 0;
printf ("%d %d\n", x, y);

OUTPUT: undefined behaviour - comportamento indefinido (a variável y não foi inicializada, pelo que a máquina pode devolver um valor aleatório)

1.3.

INPUT: 
char a, b, c;
a = 'A' = 65; b = ' ' = 32; c = '0'= 48;
printf ("%c %d\n", a,a);
a = a + 1; c = c + 2
printf ("%c %d %c %d\n", a,a,c,c);
c = a + b;
printf ("%c %d\n", c,c);

('A',65)
a = ('B',66); c = ('2',50);
('B', 66, '2', 50)
c = ('b',98)
('b',98)

OUTPUT: A 65
B 66 2 50
b 98

1.4.

INPUT:
int x,y;
x = 200; y = 100;
x = x+y; y = x-y; x = x-y;
printf("%d %d\n", x,y);

x = 200 + 100 = 300; y = 300 - 100 = 200; x = 300 - 200 = 100
x = 100; y = 200

OUTPUT: 100 200

2.1. a)

INPUT:
int x,y;
x = 3; y = 5;
if (x>y) 
    y = 6;
printf ("%d %d\n", x,y);

OUTPUT: 3 5 (x<y, logo, y = 5)

b)

INPUT: 
int x,y;
x = y = 0;
while (x != 11) {
    x = x+1; y += x; (NOTA: y += x <=> y = y + x;)
}
printf ("%d %d\n", x,y);

x != 11, logo, x = 0 + 1 = 1 e y = 0 + 1 = 1;
x = 1 + 1 = 2 e y = 1 + 2 = 3;
x = 2 + 1 = 3 e y = 3 + 3 = 6;
x = 3 + 1 = 4 e y = 6 + 4 = 10;
x = 4 + 1 = 5 e y = 10 + 5 = 15;
x = 5 + 1 = 6 e y = 15 + 6 = 21;
x = 6 + 1 = 7 e y = 21 + 7 = 28;
x = 7 + 1 = 8 e y = 28 + 8 = 36;
x = 8 + 1 = 9 e y = 36 + 9 = 45;
x = 9 + 1 = 10 e y = 45 + 10 = 55;
x = 10 + 1 = 11 e y = 55 + 11 = 66

OUTPUT: 11 e 66

c) 

INPUT:
int i; 
for (i=0; (i<20); i++) (NOTA: i, i+1, ...)
    if (i%2 == 0) putchar ('_'); (NOTA: o resto da divisão de i por 2 (testa se é par))
    else putchar ('#');

i = 0 -> _
i = 0 + 1 = 1 -> #
i = 1 + 1 = 2 -> _
i = 2 + 1 = 3 -> # [...]

OUTPUT: _ # _ # _ # _ # _ # _ # _ # _ # _ # _ # 

d)

INPUT: void f (int n) {
    while (n>0) {
        if (n%2 == 0) putchar ('0');
        else putchar ('1');
        n = n/2;
    }
    putchar ('\n');
}
int main() {
    int i;
    for (i=0; (i<16); i++)
        f (i);
    return 0;
}

0 1 0 1 0 1 ... 

OUTPUT: 
        1
        01
        11
        001
        101
        011
        111
        0001
        1001
        0101
        1101
        0011
        1011
        0111
        1111

3.1.*/
int quadrado(int n) {
    int x = scanf("%d", &n);
    if (x!=1)
        return 0;
    for (int linha = 0; linha < n; linha++) {
        for (int hashtag = 0; hashtag < n; hashtag++) {
            printf("#");
        }
        printf("\n");
    }
}

//3.2.
int xadrez(){
    char carater = '_';
    int n;
    int i = scanf("%d", &n);
    if (i!=1)
        return 0;
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (carater == '_') {
            printf("#");
            carater = '#';
            }
            else if (carater == '#') {
            printf("_");
            carater = '_';
            }
         }
         printf("\n");
    }   
}

//3.3.
int circulo(int raio){
    int count = 0;
    for (int n = 0; n <= 2 * raio; n++) {
        for (int p = 0; p <= 2 * raio; p++) {
            int x = raio - p;
            int y = raio - n;
            double dist = sqrt (x * x + y * y);
            if (dist <= raio) {
                printf("#");
                count++;
            }
            else printf(" ");
        }
        printf("\n");
    }
    printf("%d\n", count);
    return count;
}
