#include "stdafx.h"
#include "shuchu.h"


shuchu::shuchu()
{
}


shuchu::~shuchu()
{
}
void shuchu::output() {
	for (int i = 0; i <numVertices; i++) {
		for (int j = 0; j < numVertices; j++)
			cout << Edge[i][j] << "    ";
		cout << endl;
	}
}