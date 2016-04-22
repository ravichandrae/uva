#include <iostream>
#include <algorithm>

using namespace std;

//Returns the index of smallest char greater then input[ind] and appear after ind
int least_greater_right(string &input, int ind)
{
	int res_ind = ind+1;
	for(int i = ind+2; i < input.size(); i++)
	{
		if(input[i] > input[ind] && input[i] < input[res_ind])
			res_ind = i;
	}
	return res_ind;
}

//Generate the next greater id with the same chars
string next_id(string& input)
{
	int len = input.size();
	string res = "No Successor";
	if(len < 2)
		return res;
	int i;
	//Check if all the chars are in descending order
	for(i = len-1; i > 0 && input[i] <= input[i-1]; i--);
	
	if(i == 0)//No successor
		return res;
	
	int left_ind = i-1;
	int right_ind = least_greater_right(input, left_ind);

	swap(input[left_ind], input[right_ind]);
	
	reverse(input.begin()+left_ind+1, input.end());

	res= input.substr(0, left_ind+1)+ input.substr(left_ind+1);
	
	return res;
}

int main()
{
	while(true)
	{
		string input;
		cin >> input;
		if(input == "#")
			break;
		cout << next_id(input) << endl;
	}
	return 0;
}
