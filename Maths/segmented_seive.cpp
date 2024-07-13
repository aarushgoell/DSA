#include <bits/stdc++.h>
using namespace std;

int n = 1000000;
bool seive[1000001];

void seivearray()
{

    for (int i = 2; i <= n; i++)
    {
        seive[i] = true;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (seive[i] == true)
        {
            for (int j = i * i; j <= m; j += i)
            {
                seive[i] = false;
            }
        }
    }
}

vector<int> generateprime(int n)
{
    vector<int> vec;
    for (int i = 2; i <= n; i++)
    {
        if (seive[i] = true)
        {
            vec.push_back(i);
        }
    }
    return vec;
}

int main()
{

    seivearray();

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        vector<int> allprimes = generateprime(sqrt(r));

        int dummy[r - l + 1];
        for (int i = 0; i < r - l + 1; i++)
        {
            dummy[i] = 1;
        }

        for (auto pr : allprimes)
        {
            int multiple = (l / pr) * pr;
            if (multiple < l)
            {
                multiple += pr;
            }

            for (int j = max(multiple, pr * pr); j < r; j += pr)
            {
                dummy[j - l] = 0;
            }
        }

        for (int i = l; i <= r; i++)
        {
            if (dummy[i - l] == 1)
            {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
