#include <bits/stdc++.h>
using namespace  std;

class Graph{
	int V;
	list <int> *adj;
	void DFSUtil(int v, bool visited[]);
	public:
		Graph(int V); // ������ 
		void addEdge(int v, int w);
		void DFS(int v);
};

Graph::Graph(int v){
	this->V=v;
	adj=new list<int>[V];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[]){
	visited[V]=true;
	cout<<V<<" ";
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++){
		if(!visited[*i]){
			DFSUtil(*i,visited);
		}
	}
}

void Graph::DFS(int V){
}
	bool *visited =new bool[V];
	for (int i=0;i<V;i++){
		visited[i]=false;
	}
	DFSUtil(V,visited);
}

int main(){
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	
	g.DFS(2);
}
