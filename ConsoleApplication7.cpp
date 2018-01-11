// ConsoleApplication7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

int main() {
	Graphmtx L(9);
	int a[20], b[20];
	int i = 0, j = 0, v = 0, m;
	while (i < 9) {
		L.insertVertex(i + 1);
		i++;
	}
	L.insertEdge(0, 1, 2);
	L.insertEdge(0, 5, 1);
	L.insertEdge(0, 6, 1);
	L.insertEdge(1, 2, 2);
	L.insertEdge(1, 3, 4);
	L.insertEdge(2, 3, 1);
	L.insertEdge(2, 5, 3);
	L.insertEdge(2, 6, 2);
	L.insertEdge(3, 4, 1);
	L.insertEdge(3, 6, 6);
	L.insertEdge(3, 7, 5);
	L.insertEdge(3, 8, 2);
	L.insertEdge(4, 5, 5);
	L.insertEdge(5, 6, 1);
	L.insertEdge(6, 7, 3);
	L.insertEdge(7, 8, 2);
	cout << "��ǰ·��������Ϊ:" << L.NumberOfVertices() << endl;
	while (1) {
		cout << "1:����ĳ��·������·�ɱ�" << endl;
		cout << "2:ɾ��ԭ�����е�һ��·����,��������·�ɱ�" << endl;
		cout << "3:ɾ��ԭ�����е�һ���ߣ���������·�ɱ�" << endl;
		cout << "4:�˳�ϵͳ" << endl;
		cout << "���������ѡ��:";
		cin >> m;
		if (m == 1) {
			cout << "��������������·�ɱ��·������:";
			cin >> v;
			L.ShortestPath(L, v - 1, a, b);
		}
		if (m == 2) {
			cout << "����������ɾ����·������:";
			cin >> v;
			L.removeVertex(v - 1);
			cout << "��ǰ·��������Ϊ:" << L.NumberOfVertices() << endl;
			cout << "��������������·�ɱ��·������:";
			cin >> v;
			L.ShortestPath(L, v - 1, a, b);
		}
		if (m == 3) {
			cout << "��������Ҫɾ���ı�����·������:";
			cin >> v >> m;
			L.removeEdge(v, m);
			cout << "��������������·�ɱ��·������:";
			cin >> v;
			L.ShortestPath(L, v - 1, a, b);
		}
		if (m == 4) {
			exit(1);
		}
	}
	system("pause");
	return 0;
}