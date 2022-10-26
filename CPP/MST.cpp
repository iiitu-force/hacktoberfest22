
// KRUSKAL'S ALGO
// UNION FINDING ALGO
#include <bits/stdc++.h>
using namespace std;

class Edges
{
public:
    int source;
    int dest;
    int weight;
};

bool compare(Edges e1, Edges e2)
{
    return e1.weight < e2.weight;
}
int findparent(int v, vector<int> &parent)
{
    if (parent[v] == v)
        return v;
    return findparent(parent[v], parent);
}
void kruskals(vector<Edges> &input, int e, int n)
{

    sort(input.begin(), input.end(), compare);
    vector<Edges> output(n - 1);

    vector<int> parent(n);
    for (int i = 0; i < n; i++)
        parent[i] = i;

    int i = 0, count = 0;
    while (count != n - 1)
    {
        Edges curr = input[i];

        int sourceParent = findparent(curr.source, parent);
        int destParent = findparent(curr.dest, parent);

        if (sourceParent != destParent)
        {
            output[count] = curr;
            count++;
            parent[sourceParent] = destParent;
        }
        i++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (output[i].source < output[i].dest)
            cout << output[i].source << " " << output[i].dest << " " << output[i].weight << endl;
        else
            cout << output[i].dest << " " << output[i].source << " " << output[i].weight << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edges> input(e);
    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
    }

    kruskals(input, e, n);
}