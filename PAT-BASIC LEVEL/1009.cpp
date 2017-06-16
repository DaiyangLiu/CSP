#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(){
    string word[100];
    int size=0;
	string line;
	while(getline(cin,line)){
        stringstream ss(line);
		while(ss>>word[size]){
            size++;
		}

        for(int i=size-1;i>=0;i--){
            if(i==size-1){
                cout<<word[i];
            } else{
                cout<<" "<<word[i];
            }

        }
        cout<<endl;
	}
	return 0;
}

