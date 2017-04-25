#include <stdio.h>

int mdc(int, int, int *, int*);

int mdc(int a, int b, int *x, int *y){

    int xm, yn, r, q, d;

    if (b == 0){
        *x = 1;
        *y = 0;

        return a;
    }
    r = a%b;
    q = a / b;
    d = mdc(b, r, &xm, &yn);
    *x = yn;
    *y = xm - q * yn;

    return d;
}

int main(int argc, char **argv){

    int d, x, y;

    d = mdc(17331, 3041, &x, &y);
    printf("\t\tLetra a\n\n");
    printf("%d = (3041 * %d) + (17331 * %d)\n", d, x, y);
    printf("Inverso Multiplicativo do 3041 mod 17331 => %d\n\n", y);

    d = mdc(21753, 213, &x, &y);
    printf("\t\tLetra b\n\n");
    printf("%d = (213 * %d) + (21753 * %d)\n", d, x, y);
    printf("Inverso Multiplicativo do 213 mod 21753 => %d\n\n", y);

    d = mdc(9571, 548, &x, &y);
    printf("\t\tLetra c\n\n");
    printf("%d = (548 * %d) + (9571 * %d)\n", d, x, y);
    printf("Inverso Multiplicativo do 548 mod 9571 => %d\n\n", y);

    d = mdc(68432, 24573, &x, &y);
    printf("\t\tLetra d\n\n");
    printf("%d = (24573 * %d) + (68432 * %d)\n", d, x, y);
    printf("Inverso Multiplicativo do 24573 mod 68432 => %d\n\n", y);

    return 0;
}
