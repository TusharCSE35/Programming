#include<bits/stdc++.h>
using namespace std;

vector <int> Graph[100];

void gp_print(int n)
{
	int i,j;
	cout << "The graph is : " << endl;
	for(i = 0; i < n; i++)
	{
		cout << i << " -> ";
		for(j = 0; j < Graph[i].size(); j++)
		{
			cout << Graph[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int node,edge,i;

	cout << "Plz enter the value of node & edge : ";
	cin >> node >> edge;

    cout << "Enter pair of node : " << endl;
	for(i = 0; i < edge; i++)
	{
		int u,v;
		cin >> u >> v;
        
        Graph[u].push_back(v);
        Graph[v].push_back(u);
	}

	gp_print(node);


	return 0;
}