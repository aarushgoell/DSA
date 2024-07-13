// It is taking nlog(logn) time complexity for checking whether a number is prime or not

#include <bits/stdc++.h>
using namespace std;

int n = 1000000;
bool seive[1000001];

void createSeive()
{

    for (int i = 2; i <= n; i++)
    {
        seive[i] = true;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (seive[i] == true)
        {
            for (int j = i * i; j <= n; j += 2)
            {
                seive[j] = false;
            }
        }
    }
}

int main()
{

    createSeive();
    int n;
    cout << "Enter input" << endl;
    cin >> n;
    if (seive[n])
    {
        cout << "YES IT IS A PRIME"
             << " ";
    }
    else
    {
        cout << "NO IT IS NOT A PRIME"
             << " ";
    }

    return 0;
}
