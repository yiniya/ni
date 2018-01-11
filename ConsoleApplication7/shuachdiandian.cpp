#include "stdafx.h"
#include "shuachdiandian.h"


shuachdiandian::shuachdiandian()
{
}


shuachdiandian::~shuachdiandian()
{
}
bool shuachdiandian::removeEdge(int v1, int v2) {
	if (v1 > -1 && v1<numVertices&&v2>-1 && v2 < numVertices&&Edge[v1][v2]>0 && Edge[v1][v2] < maxWeight) {
		Edge[v1][v2] = Edge[v2][v1] = maxWeight;
		numEdges--;
		cout << "ɾ���ɹ���" << endl;
		return true;
	}
	else
		return false;
}
bool shuachdiandian::removeVertex(int v) {
	if (v < 0 || v >= numVertices)
		return false;
	if (numVertices == 1)
		return false;
	int i, j;
	VerticesList[v] = VerticesList[numVertices - 1];
	for (i = 0; i < numVertices; i++)
		if (Edge[i][v] > 0 && Edge[i][v] < maxWeight)
			numEdges--;
	for (i = 0; i < numVertices; i++)
		Edge[i][v] = Edge[i][numVertices - 1];
	numVertices--;
	for (j = 0; j < numVertices; j++)
		Edge[v][j] = Edge[numVertices][j];
	cout << "ɾ���ɹ���" << endl;
	return true;
}