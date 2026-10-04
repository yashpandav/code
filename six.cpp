#include <iomanip>
#include <cmath>
using namespace std;

double solve(double** arr,double K,int n)
{
    double low = -1e9, high = 1e9;

    for(int i = 0; i < n; i++)
        low = max(low, -arr[i][1]);

    low += 1e-12;

    for(int it = 0; it < 200; it++)
    {
        double mid = (low + high) / 2.0;
        double sum = 0;

        for(int i = 0; i < n; i++)
            sum += arr[i][0] / (arr[i][1] + mid);

        if(sum > K)
            low = mid;
        else
            high = mid;
    }

    return (low + high) / 2.0;
}

int main()
{
    int n, col;
    cin >> n >> col;

    double** arr = new double*[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = new double[2];
        cin >> arr[i][0] >> arr[i][1];
    }

    double K;
    cin >> K;

    cout << fixed << setprecision(6) << solve(arr, K, n);

    for(int i = 0; i < n; i++)
        delete[] arr[i];

    delete[] arr;

    return 0;
}
