#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

int main() {
    string input;
    while(true) {
        getline(cin,input);
        if(input == "DONE")
            break;
        int i = 0, j = input.size()-1;
        bool palindrome = true;
        while(i < j){
            while(input[i] == '.' || input[i] == ',' || input[i] == '!' || input[i] == '?' || input[i] ==' ')
                i++;
            while(input[j] == '.' || input[j] == ',' || input[j] == '!' || input[j] == '?'|| input[j] ==' ')
                j--;
            if( tolower(input[i]) != tolower(input[j]) )
            {
                palindrome = false;
                break;
            }
            else
            {
                i++; j--;
            }
        }
        if( palindrome )
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;
    }
	return 0;
}
