#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	unsigned i = 0, all=0;
	string S, w;
	cout << "enter a word: ";
	getline(cin, w);
	fstream f;
	f.open("text.txt");
	while (getline(f, S))
	{
		transform(S.begin(), S.end(), S.begin(),
			[](unsigned char c) { return std::tolower(c); });
		int p = 0, found = 0, count = 0;
		while (found!= string::npos)
		{
			found = S.find(w, p);
			if(found>=0)
				count++;
			p = found+w.length();
		}
		//cout << i << " " << count << endl;
		all += count;
		i++;
	}
	cout << "the word " << "<" << w << ">" << " occurs " << all << " times";
	f.close();
	return 0;
}
