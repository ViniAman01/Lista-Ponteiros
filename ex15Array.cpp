#include <iostream>

using namespace std;

void Size(char *, char *, int *);
void Reverse(char *, char *, int *);

void (*Array[2])(char *, char *, int *) = {Size,Reverse};

int main(void)
{
    char str[100],*ptr;
    int tam;
    (*Array)(str,ptr,&tam);
    (*(Array+1))(str,ptr,&tam);
    cout << str << endl;
    return 0;
}

void Size(char *str, char *ptr, int *tam)
{
    *tam = 0;
    cout << "Write a string: ";
    cin >> str;
    ptr = str;
    while(*(ptr++) != '\0')
    {
        (*tam)++;
    }   
}

void Reverse(char *str, char *ptr, int *tam)
{
    int i = 0;
    char aux;
    ptr = str;
    for(ptr; ptr < (str+*tam/2); ptr++)
    {
        i++;
        aux = *ptr;
        *ptr = *((str+*tam)-i);
        *((str+*tam)-i) = aux;
    }
}