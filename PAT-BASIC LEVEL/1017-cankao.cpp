#include <iostream>
using namespace std;

int main()
{
    string input;
    string ans;
    int r;
    cin>>input>>r;
    int tmp=0;
    for(size_t i=0;i<input.length();i++)
    {
        tmp=tmp*10+(int)(input[i]-'0');
        int q=tmp/r;
        tmp=tmp%r;
        char c=char('0'+q);
        ans.append(1,c);
    }
    
    if(ans[0]=='0'&&ans.length()>1)
    {
        ans=ans.erase(0,1);
    }
    
    cout<<ans<<" "<<tmp<<endl;
    return 0;
}
