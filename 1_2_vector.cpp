#include<iostream>
//#include<bits/stdc++.h>
#include<vector>
#include<sstream>
#include<string>

using namespace std;

int main()
{
	vector<int> myVect;
	int num;
	string input;
	cout << "Enter numbers: ";
	getline(cin, input);
	istringstream is(input);
	
	while (is >> num){
		myVect.push_back(num);
	}
	int sum;
	for (int i=0; i<myVect.size(); i++)
	//for(auto i: myVect)
		//sum += i;
		sum = sum + myVect[i];
	cout<<sum;
	return 0;
}
