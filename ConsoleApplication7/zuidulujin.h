#pragma once
#include<iostream>
class zuidulujin
{
private:
	int maxVertices;//ͼ����󶥵���
	int numEdges;//��ǰ����
	int numVertices;//��ǰ������
	int *VerticesList;//�����
	int **Edge;//�ڽӾ���
public:
	const int maxWeight = 10000;//��ʾ�����
	
	zuidulujin();
	~zuidulujin();
	void ShortestPath(zuidulujin& G, int v, int dist[], int path[]);
};

