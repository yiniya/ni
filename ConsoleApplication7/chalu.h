#pragma once
#include<iostream>
class chalu
{

private:
	int maxVertices;//ͼ����󶥵���
	int numEdges;//��ǰ����
	int numVertices;//��ǰ������
	int *VerticesList;//�����
	int **Edge;//�ڽӾ���
public:

	chalu();
	~chalu();
	const int maxWeight = 10000;//��ʾ�����

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
	bool insertVertex(const int& vertex);//���붥��
	bool insertEdge(int v1, int v2, int cost);//�����(v1,v2),ȨֵΪcost
};

