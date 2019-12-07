//857423

#include <cstring>
#include<iostream>

using namespace std;

int main(int argc, char* argv) {
	
	int a,b,c;
	char str[100];
	
	cout<<"Input:";
	cin>>str;
	a=0;
	b=0;
	c=0;
	
	cout<<"Output:";
	
		while(str[a]!='\0'){
		if (str[a]=='a'&&str[a+1]=='b'&&str[a+2]=='b'&&str[a+3]=='b')
	{
	c++;	
	}
	
		if(str[a]=='a')
	{
		b++;
	}
	a++;
}
	if(c==b)
	{
		cout<<"Accepted";
	}
	else
	{
		cout<<"Not Accepted";
	}
	cout<<endl;
	
	system ("PAUSE");
	return 0;
}
