/* O programa a seguir faz a leitura do tamanho de um array, em seguida faz leitura de elementos que
farão parte do array, e depois faz escrita dos elementos contidos no array;*/
#include <stdio.h>

void Leitura(int *, int *, int *);
void Escrita(int *, int *, int *);

void (*Array[2])(int *, int *, int *) = {Leitura,Escrita};

int main(void)
{
    int *arr1,*ptr,n;
    printf("\n\nPointer: Store and retrieve elements from an array: \n");
    printf("-----------------------------------------------------------\n");
    for(int i = 0; i < 2; i++)
    {
        Array[i](&n,ptr,arr1);
    }
    return 0;
}

void Leitura(int *n, int *ptr, int *arr1)
{
    int i = 0;
    printf("Input the number of elements to store in the array: ");
    scanf("%d",n);
    printf("Input %d number of elements in the array: \n",*n);
    for(ptr = arr1; ptr < (arr1+ *n); ptr++)
    {
        i++;
        printf("element - %d: ",i);
        scanf("%d",ptr);
    }
}

void Escrita(int *n, int *ptr, int *arr1)
{
    int i = 0;
    printf("The elements you entered are: \n");
    for(ptr = arr1; ptr < (arr1+ *n); ptr++)
    {
        i++;
        printf("element - %d: %d \n",i,*ptr);
    }
}