#pragma once
#include<iostream>
class zuidulujin
{
private:
	int maxVertices;//图中最大顶点数
	int numEdges;//当前边数
	int numVertices;//当前顶点数
	int *VerticesList;//顶点表
	int **Edge;//邻接矩阵
public:
	const int maxWeight = 10000;//表示无穷大
	
	zuidulujin();
	~zuidulujin();
	void ShortestPath(zuidulujin& G, int v, int dist[], int path[]);
};

