#include"Form.h"

void Form::SetInputWord(string inputWord) // set input
{
				for (int i = 0; i < inputWord.length(); i++)
				{
								words.push_back(inputWord[i]);
				}
}
void Form::ProcessInputWord() // process input
{
				transform(words.begin(), words.end(),words.begin(), tolower);
				//for (int i = 0; i < words.size(); i++)
				//				cout << words[i] << " ";
				//cout << endl;
}
void Form::SetFileName(string fileName) // set file name
{
				file.open(fileName);
}
void Form::Load_CompareWord() // read-in data and compare
{
				string temp;
				while (file >> temp)
				{
								if (tester(temp))
												cout << temp << endl;
				}
}
void Form::PrintFoundWords() // print answers
{

}
bool Form::tester(const string& temp)
{
				vector<char>::iterator index;
				vector<char> other = words;
				for (int i = 0; i < temp.length(); i++)
				{
								index = find(other.begin(), other.end(), temp[i]);//find temp[i] in other
								if (index != other.end())//temp[i] has been found
								{
												other.erase(index);//erase the words that have been found(each word could be used once)
								}
								else
												return 0;//temp[i] was not in words
				}
				return 1;
}
/*void Form::combination()//list all the the combination
{

}*/