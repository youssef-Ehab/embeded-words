#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string x;
	cin>>x;
	for(int i=0;i<x.size();i++){
		for(int j=0;j<x.size();j++){
			if(j<i){

			}
			else if(j==i){
                    cout<<x[i]<<endl;

			}
			else{
				cout<<x.substr(i,j+1)<<endl;
			}
				 }

			}
}
