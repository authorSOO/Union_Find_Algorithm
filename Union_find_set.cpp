#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int Find(int x,int* parent){
	if(x=parent[x])return x;
	else return parent[x]=Find(parent[x],parent);
	
}

void Union(int x,int y,int* parent){ 
	x=Find(x,parent);
	y=Find(y,parent);
	if(x!=y)parent[y]=x;
	
}

int main(){
	int n,m;
	cin>>n>>m;
	int	parent[n];
	memset(parent,0,sizeof(parent));
	for(int i=0;i<=n;i++)parent[i]=i;
	while(m--){
		int w,x,y;
		cin>>w>>x>>y;
		if(w==0)Union(x,y,parent);
		else{
			
			x=Find(x,parent);
			y=Find(y,parent);
			if(x==y)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
			
	}		
	return 0;
}
