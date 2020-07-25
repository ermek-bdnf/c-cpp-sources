//11 proxy
#include<iostream>
#include<string>
#include<map> //container for an associative array

using namespace std;

class IBook
{
	public:
		virtual string getPage(int num) = 0;
		virtual ~IBook(){}
};

class Book : public IBook
{
	public:
		string getPage(int num) override
		{
			//..
			string page = "This is page " + to_string(num);
			return page;
		}
};

class BookProxy : public IBook
{
	private:
		IBook* book;
		map<int, string> pages; //associative array
	public:
		BookProxy(IBook* book)
		{
			this->book = book;
		}
		~BookProxy()
		{
			delete book;
		}
		string getPage(int num) override
		{
			string page;
			if(pages.find(num) == pages.end())
			{
				page = book->getPage(num);
				pages[num] = page;
			}
			else
			{
				page = pages[num];
				page.insert(0, "From cache: ");
			}
			return page;
		}
};

void print(string page)
{
	cout << page << endl;
}

int main()
{
	IBook* myBook = new BookProxy(new Book());
	print(myBook->getPage(1));
	print(myBook->getPage(2));
	print(myBook->getPage(1));
	return 0;
}
