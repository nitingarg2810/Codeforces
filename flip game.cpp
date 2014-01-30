#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int getMaxOnes(vector<int> sequence) {
    int N = sequence.size();
    int maxOnes = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int ones = 0;
            for (int k = 0; k < N; k++) {
                if (k >= i && k <= j)
                    ones += (sequence[k] != 1);
                else
                    ones += sequence[k];
            }
            maxOnes = max(maxOnes, ones);
        }
    }
    return maxOnes;
}

int main() {
    int N, a;
    vector<int> sequence;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a;
        sequence.push_back(a);
    }
    cout << getMaxOnes(sequence) << endl;
    return 0;
}
