
// Djistikra'S ALGO

#include <bits/stdc++.h>
using namespace std;

int findminVertex(vector<bool> &visited, vector<int> distance, int n)
{
    int minVertex = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && (minVertex == -1 || distance[i] < distance[minVertex]))
            minVertex = i;
    }
    return minVertex;
}

void dijktras(int **edges, int n)
{
    vector<bool> visited(n, false);
    vector<int> distance(n, INT_MAX);
    distance[0] = 0; // source

    for (int i = 0; i < n - 1; i++)
    {
        int minVertex = findminVertex(visited, distance, n);
        visited[minVertex] = true;
        for (int j = 0; j < n;j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                int dist = distance[minVertex] + edges[minVertex][j];
                if(dist<distance[j])
                    distance[j] = dist;
            }
        }
    }

    for (int i = 0; i < n;i++)
        cout << i << " " << distance[i] << endl; 
}

int main()
{
    int n, e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        edges[s][d] = w;
        edges[d][s] = w;
    }

    cout << endl;

    dijktras(edges, n);

    for (int i = 0; i < n; i++)
        delete[] edges[i];
}
