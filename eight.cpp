#include <iostream>
#include <cmath>
using namespace std;

double length(double x, double y, double x1, double y1) {
    double dx = x - x1;
    double dy = y - y1;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int t, i, j, temp, A, B;
    double ribbon, first, second, last, second_last;

    cin >> t;

    while(t--) {
        ribbon = 0;

        cin >> B >> A;

        if(B == 3) {
            int a[3];

            cin >> a[0] >> a[1] >> a[2];

            for(i=0;i<2;i++) {
                for(j=i+1;j<3;j++) {
                    if(a[i] > a[j]) {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }

            first = a[0];
            second = a[1];
            last = a[2];

            ribbon += length(second, first, first, second);
            ribbon += length(first, second, first, last);
            ribbon += length(first, last, second, last);
            ribbon += length(second, last, last, second);
            ribbon += length(last, second, last, first);
            ribbon += length(last, first, second, first);

            long long z = (long long)ceil(ribbon);

            cout << z * A << endl;
            continue;
        }

        int a[B];

        cin >> a[0] >> a[1];

        if(a[0]>a[1]) {
            second = a[0];
            first = a[1];
            last = a[0];
            second_last = a[1];
        }
        else {
            first = a[0];
            second = a[1];
            last = a[1];
            second_last = a[0];
        }

        for(i=2;i<B;i++) {
            cin >> a[i];

            if(a[i] < first) {
                second = first;
                first = a[i];
            }
            else if(a[i] < second) {
                second = a[i];
            }

            if(a[i] > last) {
                second_last = last;
                last = a[i];
            }
            else if(a[i] > second_last) {
                second_last = a[i];
            }
        }

        ribbon += length(second, first, first, second);
        ribbon += length(first, second, first, last);
        ribbon += length(first, last, second_last, last);
        ribbon += length(second_last, last, last, second_last);
        ribbon += length(last, second_last, last, first);
        ribbon += length(last, first, second, first);

        long long z = (long long)ceil(ribbon);

        cout << z * A << endl;
    }

    return 0;
}
