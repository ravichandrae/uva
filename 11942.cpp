#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    cout << "Lumberjacks:" << endl;
    while(t--){
        int nums[10];
        int i;
        for(i = 0; i < 10; i++) {
            cin >> nums[i];
        }
        int rel = nums[1] > nums[0] ? 1:0;
        bool ordered = true;
        for( i = 2; i < 10; i++ ) {
            if( rel == 1) {
                if(nums[i] < nums[i-1])
                {
                    ordered = false;
                    break;
                }
            }
            else {
                if(nums[i] > nums[i-1])
                {
                    ordered = false;
                    break;
                }
            }
        }
        if(ordered)
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
	return 0;
}
