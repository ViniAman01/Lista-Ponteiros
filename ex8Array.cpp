#include <iostream>
#include <time.h>

using namespace std;

void halley(int *);
void prox(int *);

void (*Array[2])(int *) = {halley,prox};

int main(void)
{
    int v[10];
    (*Array)(v);     
    (*(Array+1))(v);
    return 0;
}

void halley(int data[])
{
    int *ptr = data;
    int sum = 0;
    cout << "Próximas aparições: " << endl;
    for(ptr; ptr < (data+10); ptr++)
    {
        sum++;
        *ptr = 1986 + 10*sum;
        cout << *ptr << " ";
    }
    cout << endl;
}

void prox(int data[])
{
    time_t segundos;
    time(&segundos);
    struct tm tm = *localtime(&segundos);
    int *ptr = data;
    while(*ptr < (tm.tm_year+1900))
    {
        ptr++;
    }
    cout << endl << "Próxima aparição: " << *ptr << endl;
}