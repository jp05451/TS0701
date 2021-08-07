#include<string>
#include<vector>
#include<iostream>
#include <algorithm>
#include<fstream>
using namespace std;
class Form
{
private:
				vector<char> words;
				//vector<string> list;
				ifstream file;
public:
	void SetInputWord(string inputWord); // set input
	void ProcessInputWord(); // process input
	void SetFileName(string fileName); // set file name
	void Load_CompareWord(); // read-in data and compare
	void PrintFoundWords(); // print answers
	bool tester(const string& temp);
	//void combination();
};
