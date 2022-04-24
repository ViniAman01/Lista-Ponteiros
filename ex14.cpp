#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    char text[100],*str;
    int count = 0;
    cout << "Write a string: ";
    cin >> text;
    str = text;
    while(*(str++) != '\0')
    {
        count++;
    }
    cout << "Leght of '" << text << "' = " << count << endl;
    return 0;

}