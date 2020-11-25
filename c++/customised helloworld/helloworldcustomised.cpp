/*
 * helloworldcustomised.cpp
 *
 *  Created on: Nov. 30, 2019
 *      Author: sreejith
 */

#include<iostream>
#include<string>
int main()
{
	std::cout<<"please enter your name:";
	std::string username;
	std::cin>>username;
	std::cout<<std::endl<<"HELLO "<< username <<" nice to meet you "<<std::endl;
	std::string::size_type length_name;
	length_name=username.size();
	std::cout<<"By the way your name is "<< length_name <<" characters long";
	return 0;
}
