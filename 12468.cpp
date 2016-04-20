#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    while(true){
        int a,b;
        cin >> a >> b;
        if( a == -1)
            break;
        cout << min(abs(a-b),100-abs(a-b)) <<endl;
    }
	return 0;
}
