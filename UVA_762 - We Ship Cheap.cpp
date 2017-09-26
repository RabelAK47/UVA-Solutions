#include "bits/stdc++.h"
using namespace std;

map <string, int> visited;
map <string, string> Route;

int bfs(string source, string destination, map <string, vector<string> > graph)
{
    queue <string> Q;
    Q.push(source);
    visited[source] = 0;
    while(!Q.empty())
    {
        string top = Q.front(); Q.pop();
        if(top == destination)
            return true;

        int len = graph[top].size();
        for(int i = 0; i < len; i++)
        {
            string temp = graph[top][i];
            if(visited[temp] == 0)
            {
                visited[temp] = visited[top]+1;
                Route[temp] = top;
                Q.push(temp);
            }
        }
    }
    return false;
}

void PathPrint(string destination, string source)
{
    if(destination == source)
        return;
    PathPrint(Route[destination],source);
    cout << Route[destination] << " " << destination << endl;
}
int main()
{
    //freopen("WA.txt", "w", stdout);
    int Node, Case = 0;
    while(scanf("%d", &Node) == 1)
    {
        map <string, vector<string> > graph;
        while(Node-- > 0)
        {
            string A, B;
            cin >> A >> B;
            graph[A].push_back(B);
            graph[B].push_back(A);
            visited[A] = 0;
            visited[B] = 0;
        }
        string source, destination;
        cin >> source >> destination;
        Route.clear();

        if(Case == 1)
            printf("\n");
        Case = 1;
        int rout = bfs(source, destination, graph);
        if(rout == -1)
            printf("No route\n");
        else
            PathPrint(destination, source);
    }
    return 0;
}
