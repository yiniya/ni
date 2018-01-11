#pragma once
#include<iostream>
class shuachdiandian
{
private:
	int maxVertices;//图中最大顶点数
	int numEdges;//当前边数
	int numVertices;//当前顶点数
	int *VerticesList;//顶点表
	int **Edge;//邻接矩阵
public:
	shuachdiandian();
	~shuachdiandian();
	int getWeight(int v1, int v2)
	{
		return v1 != -1 && v2 != -1 ? Edge[v1][v2] : 0;
	}
	
	bool removeVertex(int v);//删除顶点v和所有与它相关联的边
	bool removeEdge(int v1, int v2);//在图中删除边(v1,v2)
};

