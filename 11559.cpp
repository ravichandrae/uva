#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n,b,h,w;
    while( cin >> n >> b >> h >> w ) {
        vector<int> hotel_cost(h);
        vector< vector<int> > beds(h, vector<int>(w));
        int i;
        for(i = 0; i < h; i++) {
            cin >> hotel_cost[i];
            for(int j=0; j < w; j++) {
                cin >> beds[i][j];
            }
        }
        
        int min_budget = INT_MAX;
        for(i = 0; i < h; i++) {
            int min_beds = *max_element(beds[i].begin(), beds[i].end());
            
            int cost = 0;
            if( min_beds >= n)
            {
                min_budget = min(min_budget, hotel_cost[i]*n);
            }
        }
        if(min_budget > b) {
            cout << "stay home" << endl;
        }
        else
            cout << min_budget << endl;
    }
	return 0;
}
