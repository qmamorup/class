#include <windows.h>
#include <iostream>
#include <vector>

using namespace std;

class Genius : public vector <int> 
{
public:
	size_t AreaVector(vector <int> b) 
	{
		return b.size();
	}
};

int main(int argc, char** argv) 
{
	// Russification of messages
	
	system("chcp 1251 > nul");
	
	vector <int> v(5, 8);

	for (int a = 0; a < 5; a++) cout << v[a] << "\t";

	Genius g; cout << endl << "Vector module v=" << g.AreaVector(v);

	cout << endl; system("pause");
	return 0;
}