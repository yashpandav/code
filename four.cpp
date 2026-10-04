#include <algorithm>
using namespace std;

void thirdLargest(int arr[],int arr_size)
{
    sort(arr, arr + arr_size, greater<int>());

    int count = 1;

    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            count++;

            if (count == 3)
            {
                cout << "The third Largest element is " << arr[i];
                return;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    thirdLargest(arr,n);

    return 0;
}
