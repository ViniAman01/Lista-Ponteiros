#include <iostream>

using namespace std;

void sum(double *);

int main(void)
{
    double result;
    sum(&result);
    cout << "Sum: " << result << endl;
    return 0;
}

void sum(double *sum)
{
    double num;
    *sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cout << "Number " << i+1 << ": ";
        cin >> num;
        *sum += num;

    }
}