/*
 * sort.cpp
 *
 *  Created on: Dec. 3, 2019
 *      Author: sreejith
 */

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using std::cout; using std::cin; using std::endl;using std::string;
using std::vector; using std::sort;
int main()
{
	vector<string> words;
	string one_word;
	while(cin>>one_word)
	{
		words.push_back(one_word);
	}
	vector<string>::size_type num_words=words.size();

	sort(words.begin(),words.end());
	for(vector<string>::size_type i=0;i!=num_words;++i)
	{
		cout<<words[i]<<endl;
	}
	cout<<"for a count of "<<num_words<<" words"<<endl;
	return 0;


}
