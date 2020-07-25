#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<iterator>
#include<locale>
using namespace std;

int main()
{
	cout<<"Enter numbers (2 4 6 8): \n";
	int n1,n2,n3,n4;
	cin>>n1>>n2>>n3>>n4;
	vector<int> myVect;
	myVect.push_back(n1);
	myVect.push_back(n2);
	myVect.push_back(n3);
	myVect.push_back(n4);
	int Sum = accumulate(myVect.begin(), myVect.end(), 0);
	cout<<"\nSum = "<< Sum;
	return 0;
}
