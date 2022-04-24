#include <iostream>
#include <stdlib.h>

using namespace std;

void size(char *, char *, int *);

void (*Array)(char *, char *, int *) = size; 

int main(void)
{
    char text[100],*str;
    int count;
    Array(text,str,&count);
    cout << "Leght of '" << text << "' = " << count << endl;
    return 0;

}

void size(char *text, char *str, int *count)
{
    *count = 0;
    cout << "Write a string: ";
    cin >> text;
    str = text;
    while(*(str++) != '\0')
    {
        (*count)++;
    }
    
}