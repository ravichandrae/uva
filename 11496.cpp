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
        vector<int> sample(n);
        
        for(i = 0; i < n; i++) {
            cin >> sample[i];
        }
        
        int peaks = 0;
        if( (sample[0] > sample[n-1] && sample[0] > sample[1]) ||
            (sample[0] < sample[n-1] && sample[0] < sample[1]))
            peaks++;
        if( (sample[n-1] > sample[n-2] && sample[n-1] > sample[0]) ||
            (sample[n-1] < sample[n-2] && sample[n-1] < sample[0]))
            peaks++;
        for(i = 1; i < n-1; i++) {
            if( (sample[i] > sample[i+1] && sample[i] > sample[i-1]) ||
                (sample[i] < sample[i+1] && sample[i] < sample[i-1]))
                peaks++;
        }
        cout << peaks << endl;
    }
	return 0;
}
