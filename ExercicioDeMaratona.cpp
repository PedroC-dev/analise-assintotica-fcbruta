#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, Q;
    int caso = 1;
    
    while (cin >> N >> Q) {
        if (N == 0 && Q == 0)
            break;
        vector<int> marbles(N);
        for (int i = 0; i < N; i++) {
            cin >> marbles[i];
        }
        
        sort(marbles.begin(), marbles.end());
        cout << "CASE# " << caso++ << ":\n";
        
        
        for (int i = 0; i < Q; i++) {
            int x;
            cin >> x;
            
            auto it = lower_bound(marbles.begin(), marbles.end(), x);
            if (it != marbles.end() && *it == x) {
                cout << x << " found at "<< (it - marbles.begin() + 1)<<endl;
            } else {
                cout << x << " not found\n";
            }
        }
    }
    return 0;
}