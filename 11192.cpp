#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	while(true) {
	    int n;
	    cin >> n;
	    if( n == 0)
	        break;
	    string input;
	    cin >> input;
	    int sz = input.size();
	    int gs = sz/n;
	    int g, i, j;
	    for(g = 0; g < n; g++) {
	        for(i = g*gs, j = (g+1)*gs-1; i < j; i++, j--) {
	            swap(input[i], input[j]);
	        }
	    }
	    cout << input << endl;
	}
	return 0;
}
