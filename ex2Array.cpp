#include <iostream>

using namespace std;

void findFact(int *, int *);

void (*ArrayFunc[1])(int *, int *) = {findFact};

int main()
{
    int fact;
    int num1;
    printf("\n\n Pointer : Find the factorial of a given number :\n");
    printf("------------------------------------------------------\n");
    printf(" Input a number : ");
    scanf("%d", &num1);
    (*ArrayFunc)(&num1, &fact);
    printf(" The Factorial of %d is : %d \n\n", num1, fact);
    return 0;
}

void findFact(int *n, int *f)//O ponteiro "f" precisa do operador de desreferência(*) dentro do escopo da função.
{
    int i;
    *f = 1;
    for (i = 1; i <= *n; i++)
    *f = *f * i;
}