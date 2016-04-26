#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    while(true) {
        string input;
        cin >> input;
        if( input == "*") {
            break;
        }
        int duration[26] = {0};
        duration['W'-'A'] = 64;
        duration['H'-'A'] = 32;
        duration['Q'-'A'] = 16;
        duration['E'-'A'] = 8;
        duration['S'-'A'] = 4;
        duration['T'-'A'] = 2;
        duration['X'-'A'] = 1;
        
        int i;
        int state = 1;
        int d = 0;
        int correct = 0;
        for(i = 0; i < input.size(); i++) {
            if(input[i] == '/') {
                if( state == 1) {
                    d = 0;
                }
                else {
                    if(d == 64)
                        correct++;
                    state = 1;
                    d = 0;
                }
            }
            else {
                state = 0;
                d += duration[input[i]-'A'];
            }
        }
        cout << correct << endl;
    }
	return 0;
}
