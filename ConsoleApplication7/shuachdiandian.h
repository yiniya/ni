#pragma once
#include<iostream>
class shuachdiandian
{
private:
	int maxVertices;//ͼ����󶥵���
	int numEdges;//��ǰ����
	int numVertices;//��ǰ������
	int *VerticesList;//�����
	int **Edge;//�ڽӾ���
public:
	shuachdiandian();
	~shuachdiandian();
	int getWeight(int v1, int v2)
	{
		return v1 != -1 && v2 != -1 ? Edge[v1][v2] : 0;
	}
	
	bool removeVertex(int v);//ɾ������v����������������ı�
	bool removeEdge(int v1, int v2);//��ͼ��ɾ����(v1,v2)
};

