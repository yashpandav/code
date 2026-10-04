#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int findmax(int* Count) {
    int mx = 0;
    for (int i = 0; i < 26; i++)
        mx = max(mx, Count[i]);
    return mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int ans = 1;

        /*
            For a substring of length L:
                maxFrequency >= L / 2

            Therefore:
                L <= 2 * maxFrequency

            We check every possible left endpoint and expand the
            substring. Since there are only 26 characters, we can
            maintain frequencies while expanding.
        */

        for (int i = 0; i < N; i++) {
            int Count[26] = {};

            for (int j = i; j < N; j++) {
                Count[S[j] - 'a']++;

                int len = j - i + 1;
                int mx = findmax(Count);
    
                if (mx >= len / 2)
                    ans = max(ans, len);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
