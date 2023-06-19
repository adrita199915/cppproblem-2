#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--){
		string s,x;
		cin>>s>>x;
		
		for(int i=0;i<s.length();i++)
        {
			if(s.substr(i,x.length()) == x)
            {
				s.replace(i,x.length(),"$");
			}
		}
		
		cout<<s<<endl;
	
	}
	
	return 0;
}