#pragma once
#include<iostream>
class shuchu
{
private:
	int maxVertices;//ͼ����󶥵���
	int numEdges;//��ǰ����
	int numVertices;//��ǰ������
	int *VerticesList;//�����
	int **Edge;//�ڽӾ���
public:
	
	int getValue(int i)
	{
		return i >= 0 && i <= numVertices ? VerticesList[i] : NULL;
	}
	
	shuchu();
	~shuchu();
	void output();
};

