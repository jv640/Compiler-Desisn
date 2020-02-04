#include<bits/stdc++.h>
using namespace std;
static int i=0;

void E(string word);
void T(string word);
void E1(string word);
void F(string word);
void T1(string word);
void check(string word);
bool isNumber(string s);
vector <string> words;
int main()
{
	string input;
	cout<<"Enter input string : ";
	getline(cin,input);
	stringstream s(input);
	string word;
	
	while(s>>word){
		words.push_back(word);
	}
	
	check(words[i]);
	
	
	
}
void check(string word){
	cout<<"here check\n";
	E(words[i]);
	
	}

void E(string word){
	cout<<"here E\n";
	if(words[i] =="$"){
		cout<<"\nString accpeted";
		return;
	}
	T(words[i]);
	E1(words[i]);
	if(words[i] =="$"){
	cout<<"\nString accpeted";
	return;
	}
}

void T(string word)
{
	cout<<"here T\n";
	F(words[i]);
	T1(words[i]);
}
void E1(string word){
cout<<"here E1\n";
	if(words[i]=="+")
	{	i++;
		T(words[i]);
		E1(words[i]);
	}
	else
	return;
	
}
void F(string word){
	cout<<"here F\n";
	if(isNumber(words[i]))
	{
		i++;
		return;
	}
	else if(words[i] == "(")
	{
		i++;
		E(words[i]);
		if(words[i] == ")")i++;
		else cout<<"Unbalanced braces";
	}
		cout<<"Error";
}

void T1(string word)
{
	cout<<"here T1\n";
	if(words[i] == "*")
	{
		i++;
		F(words[i]);
		T1(words[i]);
	}
	else
	return;
}
bool isNumber(string s) 
{ 
    for (int i = 0; i < s.length(); i++) 
        if (isdigit(s[i]) == false) 
            return false; 
  
    return true; 
} 
  
