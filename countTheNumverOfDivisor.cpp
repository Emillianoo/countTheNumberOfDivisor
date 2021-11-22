#include <iostream>

using namespace std;

int main()
{
    //Count the divisors of a number; MAX 5000
    int y, n, sum = 0;
    cout << "Enter a dividend: ";
    cin >> y;
    for (n = 1; n < 5000; n++) 
    {
        if (y % n == 0)
        {
            cout << n << "\n";
            sum++;
        }
    }
    cout << "Sum of divisors: " << sum;
    
}
