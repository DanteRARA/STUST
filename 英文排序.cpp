#include<iostream>
using namespace std;
int main(){
	char s[10];
	int a,b,c,tmp;
	cin>>s;
	for(a=0;s[a];a++){
		c=a;
		for(b=a+1;s[b];b++){
			if(s[b]<s[c])c=b;
		}
		tmp=s[a];
		s[a]=s[c];
		s[c]=tmp;
	}
	cout<<s;
	return 0;
}

