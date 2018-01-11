#include "stdafx.h"
#include "zuidulujin.h"


zuidulujin::zuidulujin()
{
}


zuidulujin::~zuidulujin()
{
}
void zuidulujin::ShortestPath(zuidulujin& G, int v, int dist[], int path[]) {
	int n = G.NumberOfVertices();
	bool *s = new bool[n];
	int i, j, k, w, min;
	for (i = 0; i < n; i++) {
		dist[i] = G.getWeight(v, i);
		s[i] = false;
		if (i != v&&dist[i] < maxWeight) path[i] = v;
		else path[i] = -1;
	}
	s[v] = true; dist[v] = 0;
	for (i = 0; i < n - 1; i++) {
		min = maxWeight; int u = v;
		for (j = 0; j<n; j++)
			if (s[j] == false && dist[j] < min) {
				u = j; min = dist[j];
			}
		s[u] = true;
		for (k = 0; k < n; k++) {
			w = G.getWeight(u, k);
			if (s[k] == false && w < maxWeight&&dist[u] + w < dist[k]) {
				dist[k] = dist[u] + w;
				path[k] = u;
			}
		}
	}
	cout << "从路由器" << G.getValue(v) << "到其它各路由器的最短路径为" << endl;
	cout << "路由器       " << "下一跳路由器     " << "距离" << endl;
	int *d = new int[n];
	for (i = 0; i < n; i++)
		if (i != v) {
			j = i; k = 0;
			while (j != v) {
				d[k++] = j; j = path[j];
			}
			cout << G.getValue(i) << "            " << G.getValue(d[--k]) << "                   " << dist[i] << endl;
		}
	delete[]d;
}