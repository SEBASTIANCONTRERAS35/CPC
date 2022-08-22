#include <iostream>
using namespace std;
#include <vector>
int main (){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	
const  int N=26;
	vector <bool> aphabeth(N,0);
	
	
	for (int p=0;p<s.size();p++){
		
		int index=s[p]-'a';
		aphabeth[index]=1;
		
	}
	int w=0;
	vector<bool> b(N,0);
	
	for (int i=0;i<N;i++){
		if (!aphabeth[i]){
			continue;
		}
		

	if((i>0)&&(b[i-1])){
	
		continue;
	}

	b[i]=1;
	w+=i+1;
	--k;
	if(k<=0){
		break;
	}
		}
		if (k==0){
			printf("%d",w);
			
		}
		else {
			printf("-1");
		}
	return 0;
}
