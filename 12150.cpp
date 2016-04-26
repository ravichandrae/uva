#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    while(true) {
        int n;
        cin >> n;
        if(n == 0)
            break;
        int i;
        vector<int> orig(n,0);
        bool possible = true;
        for(i = 0; i < n; i++) {
            int c,p;
            cin >> c >> p;
            if(i+p >= n || i+p < 0 || orig[i+p] > 0) {
                possible = false;
            }
            else {
                orig[i+p] = c;
            }
        }
        if(possible)
        {
            for(i = 0; i < n-1; i++){
                cout << orig[i] << " ";
            }
            cout << orig[n-1] << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        
    }
	return 0;
}
