#include <iostream>
#include <ctime>

using namespace std;

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

int main(void)
{
    int v[10];
    halley(v);     
    prox(v);
    return 0;
}