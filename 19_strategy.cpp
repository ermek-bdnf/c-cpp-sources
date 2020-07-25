//19. Strategy
#include<iostream>
#include<string>
using namespace std;

class Compression
{
	public:
		virtual ~Compression()
		{
			
		}
		virtual void compress(string &file) = 0;
};

class Compressor
{
	private:
		Compression* compression;
	public:
		Compressor(Compression* c) : compression(c) 
		{
			
		}
		~Compressor()
		{
			delete compression;
		}
		void setStrategy(Compression* c)
		{
			if(compression != nullptr)
			delete compression;
			compression = c;
		}
		void compress(string &file)
		{
			compression->compress(file);
		}
};

class ZIP_Compression : public Compression
{
	public:
		void compress(string &file) override
		{
			cout << "ZIP compression for " << file << endl;
		}
};

class ARJ_Compression : public Compression
{
	public:
		void compress(string &file) override
		{
			cout << "ARJ compression for " << file << endl;
		}
};

class RAR_Compression : public Compression
{
	public:
		void compress(string &file) override
		{
			cout << "RAR compression for " << file << endl;
		}
};

int main()
{
	Compressor* compressor = new Compressor(new ZIP_Compression());
	string file1 = "Text.txt";
	string file2 = "Source.cpp";
	compressor->compress(file1);
	compressor->setStrategy(new ARJ_Compression());
	compressor->compress(file2);
	delete compressor;
	
	return 0;
}
