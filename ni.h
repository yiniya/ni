#pragma once
#include<iostream>
using namespace std;
const int DefaultVertices = 20;
class Graphmtx {
private:
	int maxVertices;//ͼ����󶥵���
	int numEdges;//��ǰ����
	int numVertices;//��ǰ������
	int *VerticesList;//�����
	int **Edge;//�ڽӾ���
public:
	const int maxWeight = 10000;//��ʾ�����
	Graphmtx(int sz = DefaultVertices);
	~Graphmtx() 
	{
		delete[]VerticesList;
		delete[]Edge;
	}
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
	bool removeVertex(int v);//ɾ������v����������������ı�
	bool removeEdge(int v1, int v2);//��ͼ��ɾ����(v1,v2)
	void output();
	void ShortestPath(Graphmtx& G, int v, int dist[], int path[]);
};