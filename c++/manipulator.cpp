#include <bits/stdc++.h>
using namespace std;

string getDecodedString(string s) {
    int i=0,c=0;
    string tmp="";
    while(s[i]=='#') ++i;
    s.erase(0,i);
   cout << "modfied string: " << s << '\n'; 
    if(s[0]=='#') c=1; 
    else c=s[0]-'A';
    for(i=1;i<s.size();++i) {
        if(s[i]=='#') {
            ++c;
        } else {
            tmp+=(char)('A'+c%26);
            c=s[i]-'A';
        }
    }
    if(s[s.size()-1]!='#') tmp+=s[s.size()-1];
    else tmp+=(char)('A'+c%26);
    return tmp;
}

int main() {
	//code
	//ios_base::sync_with_stdio(0);
	int t;
	string s1, s2;
	cin>>t;
	while(t--) {
	    cin>>s1>>s2;
	    s1 = getDecodedString(s1);
	    s2 = getDecodedString(s2);
	    cout<<s1 << ' ' <<s2 << '\n'; 
	    if(s1.compare(s2)==0) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
