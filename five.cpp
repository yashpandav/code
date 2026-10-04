#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    int cnt = 0, num = n;
    long long largest = -1000000001;

    while(num)
    {
        long long x;
        cin >> x;

        if(x > 0)
        {
            sum += x;
            cnt++;
        }
        else if(x == 0)
            cnt++;

        if(x > largest)
            largest = x;

        num--;
    }

    if(cnt==0)
    {
        sum = largest;
        cnt = 1;
    }

    cout << sum << " " << cnt;

    return 0;
}
