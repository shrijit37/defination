#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int v,vector<int> adj[])
{

	vector<int> bfs;
	vector<int> vis (v+1,0);

	for(int i=1;i<=vis.size();i++)
	{
		if(!vis[i])
		{
			queue<int> q;							
			q.push(i);						//i is pushed into queue
			vis[i]=1;							//i is marked visited

			//traversing the queue
			while(!q.empty())
			{
				int node = q.front();

				q.pop();							//dequeing the element from node

				bfs.push_back(node);				//pushing the node into bfs(to return for printing)

				for(auto it : adj[node])				//traversing the adjacency list of node
				{
					if(!vis[it])
					{
						q.push(it);					//pushing the adjacent node into queue
						vis[it]=1;					//marking the adjacent node visited
					}
				}

			}
		}


	}

	return bfs;
}

// Driver program to test above functions
int main()
{
	int v = 5;
	vector<int> adj[v+1];

	adj[1].push_back(2);
	adj[1].push_back(3);
	adj[1].push_back(4);

	adj[2].push_back(5);

	adj[3].push_back(5);

	adj[4].push_back(5);

	adj[5].push_back(1);
	adj[5].push_back(2);
	adj[5].push_back(3);
	adj[5].push_back(4);

	vector<int> some = bfs(v,adj);

	for(auto it : some)
		cout<<it<<" ";

	return 0;
}

//error noted 
// 6 is printed even though it not in the bfs