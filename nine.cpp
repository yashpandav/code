#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> freq;
    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    int result = 0, maxCount = 0;

    for (auto p : freq) {
        if (p.second > maxCount) {
            maxCount = p.second;
            result = p.first;
        }
    }

    cout << result;

    return 0;
}
