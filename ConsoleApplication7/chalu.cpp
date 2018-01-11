#include "stdafx.h"
#include "chalu.h"


chalu::chalu()
{
}


chalu::~chalu()
{
}
bool chalu::insertVertex(const int& vertex) {
	if (numVertices == maxVertices)
		return false;
	VerticesList[numVertices++] = vertex;
	return true;
}
bool  chalu::insertEdge(int v1, int v2, int cost) {
	if (v1 > -1 && v1<numVertices&&v2>-1 && v2 < numVertices&&Edge[v1][v2] == maxWeight) {
		Edge[v1][v2] = Edge[v2][v1] = cost;
		numEdges++;
		return true;
	}
	else
		return false;
}