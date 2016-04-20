#include <iostream>
#include <vector>
using namespace std;

int main() {
    string H = "Happy", B="birthday", T = "to", Y="you", R="Rujia";
    string song[16] = {H, B, T, Y, H, B, T, Y, H, B, T, R, H, B, T, Y};
    int n;
    cin >> n;
    vector<string> names(n);
    int i;
    for( i = 0; i < n; i++) {
        cin >> names[i];
    }
    int ni = 0;
    int people = 0;
    
    for(i = 0; i < 16 && ni < n; i++, ni++) {
        cout << names[ni] << ": " << song[i] << endl;
    }
    if(i < 16) {
        ni = 0;
        while(i < 16) {
            cout << names[ni] << ": " << song[i] << endl;
            i++;
            ni = (ni+1)%n;
        }
    }
    else if(ni < n) {
        i = 0;
        while(ni < n) {
            cout << names[ni] << ": " << song[i] << endl;
            ni++;
            i = (i+1)%16;
        }
        ni = 0;
        while(i < 16) {
            cout << names[ni] << ": " << song[i] << endl;
            i++;
            ni = (ni+1)%n;
        }
    }
	return 0;
}
