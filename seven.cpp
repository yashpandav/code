#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int t=0;t<T;t++)
    {
        int n;
        long long D;
        cin >> n >> D;

        long long x[1000];

        for(int i=0;i<n;i++)
            cin >> x[i];

        for(int i=n-1;i>=0;i--)
            D = (D / x[i]) * x[i];

        cout << D << '\n';
    }

    return 0;
}
