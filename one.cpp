include <iostream>
#include <iomanip>
using namespace std;
#define LEN 20
int main() {
    char var[3][LEN];
    char inp[3][LEN];

    cin >> var[0] >> inp[0];
    cin >> var[1] >> inp[1];
    cin >> var[2] >> inp[2];

    double m = atof(inp[0]);
    double d = atof(inp[1]);
    double x = atof(inp[2]);

    cout << fixed << setprecision(2);

    if (inp[0][0] == '?')
        cout << "m " << -d * x;
    
    if (inp[1][0] == '?')
        cout << "d " << -m / x;
    
    if (inp[2][0] == '?')
        cout << "x " << -m / d;

    return 0;
}
