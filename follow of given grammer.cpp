#include<bits/stdc++.h>
using namespace std;
char* follow(char *c);
void find_follow(vector<string> prod,int n);
int main(){
	cout<<"Enter number of production in your grammer : ";
	int n;
	cin>>n;
	vector<string> prod;
	
	for(int i=0; i<n+1; i++)
	{
		string s;
		getline(cin,s);
		prod.push_back(s);	
	}	
	
	find_follow(prod,n);
	
}
char* follow(char *c,vector<string> prod){
//	if(islower(*c))cout<<"Wrong Grammer\n";
	char ch = *c;
	
	string ptr = find(prod.begin(),prod.end(),ch);
	ptr=ptr+3;
	
	if(isupper(*ptr))follow(*ptr);
	
	else{
		return *ptr;
	}
	return *ptr;
}
void find_follow(vector<string> prod,int n){
	
	char *ptr = follow(&prod[0][0],prod)
	cout<<"Follow of "<<prod[0][0]<<"is { $, "<<*ptr<<" }";
}
