#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int codes[128] = {0};
    codes['B'] = codes['F'] = codes['P'] = codes['V'] = 1;
    codes['C'] = codes['G'] = codes['J'] = codes['K'] = 2;
    codes['Q'] = codes['S'] = codes['X'] = codes['Z'] = 2;
    codes['D'] = codes['T'] = 3;
    codes['L'] = 4;
    codes['M'] = codes['N'] = 5;
    codes['R'] = 6;
    string input;
    int prev;
	while(cin >> input) {
	    int i;
	    prev = 0;
	    for(i = 0; i < input.size(); i++) {
	        int d = codes[input[i]];
	        if( d != 0 && prev != d)
	            cout << d;
	        prev = d;
	    }
	    cout << endl;
	}
	return 0;
}
