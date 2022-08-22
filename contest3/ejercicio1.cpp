#include <iostream>
#include <vector>

using namespace std;

vector<int>list;
vector<bool> visited;

void dfs(int nodo){
	if (visited[nodo]){
		
		cout<<nodo+1<<" ";
	}
	visited[nodo]=true;
	for (auto vert =list [nodo]){
		dfs[vert];
	}
}


int main (){
	int n=0;
	cin>>n;
	list.resize(n);
	visited.resize(false,n);
	int aux=0;
	for (int i=0;i<n;i++){
		
		cin>>aux;
		list[i].push_back(aux-1);
	}
	
	for (int i=0;i<n;i++){
		dfs(i);
		visited.assign(n,false)
	}
	
	return 0;
}
