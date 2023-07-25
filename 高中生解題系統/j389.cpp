#include <iostream>

#include <string>
#include <cmath>
using namespace std;
int main()
{
    int l = sqrt(2147483647);
    int prime[l+1] = {1};
    prime[0] = prime[1] = prime[2] = 0;
    for (int i = 2; i <= l; i++)
    {
        for (int j = 2; i*j <= l; j++)
        {
            prime[i * j] = 1;
        }
    }
    int tar, total = 0;
    cin >> tar;
    for (int i = 2; i <= l; i++)
    {
        if (prime[i] == 0)
        {
            total+=i;
            tar--;
            if (tar == 0)
            {
                cout << total << endl;
                return 0;
            }
        }
    }
    return 0;
}