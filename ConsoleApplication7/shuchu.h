#pragma once
#include<iostream>
class shuchu
{
private:
	int maxVertices;//图中最大顶点数
	int numEdges;//当前边数
	int numVertices;//当前顶点数
	int *VerticesList;//顶点表
	int **Edge;//邻接矩阵
public:
	
	int getValue(int i)
	{
		return i >= 0 && i <= numVertices ? VerticesList[i] : NULL;
	}
	
	shuchu();
	~shuchu();
	void output();
};

