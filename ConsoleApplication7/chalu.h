#pragma once
#include<iostream>
class chalu
{

private:
	int maxVertices;//图中最大顶点数
	int numEdges;//当前边数
	int numVertices;//当前顶点数
	int *VerticesList;//顶点表
	int **Edge;//邻接矩阵
public:

	chalu();
	~chalu();
	const int maxWeight = 10000;//表示无穷大

	int getWeight(int v1, int v2)
	{
		return v1 != -1 && v2 != -1 ? Edge[v1][v2] : 0;
	}
	int getValue(int i)
	{
		return i >= 0 && i <= numVertices ? VerticesList[i] : NULL;
	}
	int NumberOfVertices()
	{
		return numVertices;
	}
	bool insertVertex(const int& vertex);//插入顶点
	bool insertEdge(int v1, int v2, int cost);//插入边(v1,v2),权值为cost
};

