/* Conversão de número decimal em octal e hexadecimal*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x; 
    x=20; 
    printf ("Numero decimal:%d\t", x); // mostrar o valor x em decimal 
    printf ("Numero octal: %o\t", x); // mostra o valor de x em octal 
    printf ("Numero hexadecimal: %x\n", x); // mostra o valor de x em hexadecimal 
    return 0;
}
