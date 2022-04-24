/* O programa a seguir faz a leitura do tamanho de um array, em seguida faz leitura de elementos que
farão parte do array, e depois faz escrita dos elementos contidos no array;*/
#include <stdio.h>

int main(void)
{
    int *arr1,*ptr,n;
    int i = 0;
    printf("\n\nPointer: Store and retrieve elements from an array: \n");
    printf("-----------------------------------------------------------\n");
    printf("Input the number of elements to store in the array: ");
    scanf("%d",&n);
    printf("Input %d number of elements in the array: \n",n);
    for(ptr = arr1; ptr < (arr1+n); ptr++)
    {
        i++;
        printf("element - %d: ",i);
        scanf("%d",ptr);
    }
    printf("The elements you entered are: \n");
    for(ptr = arr1; ptr < (arr1+n); ptr++)
    {
        printf("element - %d: %d \n",i,*ptr);
    }
    return 0;
}