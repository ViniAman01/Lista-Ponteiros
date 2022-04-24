#include <iostream>

using namespace std;

void sum(double *);

void (*ArrayFunc[1])(double *) = {sum};

int main(void)
{
    double result;
    ArrayFunc[0](&result);
    cout << "Sum: " << result << endl;
    return 0;
}

void sum(double *sum)
{
    double num;
    double *ptr = sum;
    *sum = 0;
    for(ptr; ptr < (sum+10); ptr++)
    {
        cout << "Number " << ": ";
        cin >> num;
        *sum += num;
    }
}