#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    while(true) {
        int nCourses;
        cin >> nCourses;
        if(nCourses == 0)
            break;
        int nCat;
        cin >> nCat;
        vector<int> courses(nCourses);
        int i, j, k;
        for(i = 0; i < nCourses; i++) {
            cin >> courses[i];
        }
        vector<int> categoryCount(nCat);
        vector<int> categoryMinimum(nCat);
        vector< vector<int> > categoryCourses(nCat);
        
        for(i = 0; i < nCat; i++) {
            cin >> categoryCount[i];
            cin >> categoryMinimum[i];

            for(j = 0; j < categoryCount[i]; j++)
            {
                int cn;
                cin >> cn;
                categoryCourses[i].push_back(cn);
            }
        }
        
        vector<int> categoryContrib(nCat);
        
        for(i = 0; i < nCourses; i++) {
            for(j = 0; j < nCat; j++) {
               bool found = false;
               for(k = 0; k < categoryCount[j]; k++) {
                   if( courses[i] == categoryCourses[j][k] )
                   {
                       found = true;
                       break;
                   }
               }
               if(found)
                categoryContrib[j]++;
            }
        }
        bool satisfied = true;
        for(i = 0; i < nCat; i++) {
            if( categoryContrib[i] < categoryMinimum[i])
            {
                satisfied = false;
                break;
            }
        }
        if( satisfied )
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
	return 0;
}
