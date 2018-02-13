// ���� ���� ����Ʈ�� �ٲٰ� ����
/*
Ž�� ( ��� ���� ����ϵ��� ��� ����, ��� ������ Ž���غ��ڴ� �� )
dfs Ž�� - ���̷� Ž�� (�� �̻� ������ ������ ���� ������, �� �� �ִµ����� ������)

bfs Ž�� - �ʺ� �켱���� Ž�� ( �̿��� �������� 0 ���� �������� �� Ž���ϰ� ������ )

Ʈ���� ���̴� �׷����� ����Ŭ�� �̷�⶧���� �װ� üũ �ؾ� �Ѵ�.
����Ƽ�� ���� ( Ž�� �� ������ Ȯ���ϴ� ��)
*/
#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
	int ver;
	Node* link;
	Node(int v) : ver(v), link(0) { }
};
struct Graph
{
	//Node* v[8];// vertex 8��
	Node** v;
	int vSize;
};
void InitGraph(Graph& g, int vs)
{
	g.vSize = vs;
	g.v = new Node*[g.vSize];
	for (int i = 0; i < g.vSize; ++i)
		g.v[i] = NULL;
}
void UninitGraph(Graph& g)
{
	for (int i = 0; i < g.vSize; ++i)
	{
		for (Node* p = g.v[i]; p;)
		{
			Node* np = p->link;
			delete p;
			p = np;
		}
	}
	delete[] g.v;
}

void AddEdge(Graph& g, int start_v, int end_v)
{
	if (g.v[start_v] == NULL)
	{
		g.v[start_v] = new Node(end_v);
		return;
	}
	Node* p=0;
	for (p = g.v[start_v]; p->link; p = p->link)
		; // empty ..
	p->link = new Node(end_v);
}
void PrintGraph(const Graph& g)
{
	cout << "v : ";
	for (int i = 0; i < g.vSize; ++i)
		cout << i << " ";
	cout << endl;
	cout << "E : ";
	for (int i = 0; i < g.vSize; ++i)
	{
		for (Node* p = g.v[i]; p; p = p->link)
			cout << "(" << i << "," << p->ver << ")";
		cout << endl;
	}
}
void _Dfs(Graph& g, int ver, int visited[])
{
	cout << ver << " ";
	visited[ver] = 1; // �湮 �Ѱ�

	for (Node* p = g.v[ver]; p; p = p->link) 
	{
		if(visited[p->ver] != 1 ) 
			_Dfs(g, p->ver , visited); 
	}
}
void Dfs(Graph& g, int ver)
{
	int* visited = new int[g.vSize];
	for (int i = 0; i < g.vSize; ++i)
		visited[i] = 0;

	_Dfs(g, ver, visited); 
	cout << endl;
	// ���� ���� : ������ ���� �� ���� ��

	delete[] visited;
}
int main()
{
	Graph g;
	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
	AddEdge(g, 0, 2);

	AddEdge(g, 1, 0);
	AddEdge(g, 1, 3);
	AddEdge(g, 1, 4);

	AddEdge(g, 2, 0);
	AddEdge(g, 2, 5);
	AddEdge(g, 2, 6);

	AddEdge(g, 3, 1);
	AddEdge(g, 3, 7);

	AddEdge(g, 4, 1);
	AddEdge(g, 4, 7);

	AddEdge(g, 5, 2);
	AddEdge(g, 5, 7);

	AddEdge(g, 6, 2);
	AddEdge(g, 6, 7);

	AddEdge(g, 7, 3);
	AddEdge(g, 7, 4);
	AddEdge(g, 7, 5);
	AddEdge(g, 7, 6);

	PrintGraph(g);
	Dfs(g, 0); // ����� ������ ��
	Dfs(g, 5); // ����� ������ ��
	Dfs(g, 7); // ����� ������ ��
	UninitGraph(g);
	system("pause");
}

// ����
// ���ͽ�Ʈ�� 
// bfs



//// ���� ���� ����Ʈ�� �ٲٰ� ����
///*
//���� ����Ʈ�� ����� 2����
//1.
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Node
//{
//	int ver;
//	Node* link;
//	Node(int v) : ver(v), link(0) { }
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int start_v, int end_v)
//{
//	if (g.v[start_v] == NULL)
//		g.v[start_v] = new Node(end_v);
//
//	Node* p;
//	for (p = g.v[start_v]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(end_v);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << i << "," << p->ver << ")";
//		cout << endl;
//	}
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2);
//
//	AddEdge(g, 1, 0);
//	AddEdge(g, 1, 3);
//	AddEdge(g, 1, 4);
//
//	AddEdge(g, 2, 0);
//	AddEdge(g, 2, 5);
//	AddEdge(g, 2, 6);
//
//	AddEdge(g, 3, 1);
//	AddEdge(g, 3, 7);
//
//	AddEdge(g, 4, 1);
//	AddEdge(g, 4, 7);
//
//	AddEdge(g, 5, 2);
//	AddEdge(g, 5, 7);
//
//	AddEdge(g, 6, 2);
//	AddEdge(g, 6, 7);
//
//	AddEdge(g, 7, 3);
//	AddEdge(g, 7, 4);
//	AddEdge(g, 7, 5);
//	AddEdge(g, 7, 6);
//
//	PrintGraph(g);
//	UninitGraph(g);
//	system("pause");
//}
//



//// ���� ���� ����Ʈ�� �ٲٰ� ����
///*
//���� ����Ʈ�� ����� 2����
//1. 
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Node
//{
//	int ver;
//	Node* link;
//	Node(int v) : ver(v), link(0) { }
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int start_v, int end_v)
//{
//}
//void PrintGraph(const Graph& g)
//{
//
//}
//void main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2);
//
//	AddEdge(g, 1, 0);
//	AddEdge(g, 1, 3);
//	AddEdge(g, 1, 4);
//
//	AddEdge(g, 2, 0);
//	AddEdge(g, 2, 5);
//	AddEdge(g, 2, 6);
//
//	AddEdge(g, 3, 1);
//	AddEdge(g, 3, 7);
//
//	AddEdge(g, 4, 1);
//	AddEdge(g, 4, 7);
//
//	AddEdge(g, 5, 2);
//	AddEdge(g, 5, 7);
//
//	AddEdge(g, 6, 2);
//	AddEdge(g, 6, 7);
//
//	AddEdge(g, 7, 3);
//	AddEdge(g, 7, 4);
//	AddEdge(g, 7, 5);
//	AddEdge(g, 7, 6);
//
//	PrintGraph(g);
//	UninitGraph(g);
//	system("pause");
//}
//



//// ���� ��� ǥ�� ��
///*
//��� Ʈ���� �ϳ��� �׷�����
//0 1 2 3 4 5 6 7 8
//0
//1
//2
//3
//4
//5
//6
//7
//
//*/
///*
//���� ������ �迭
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Graph
//{
//	int** pa;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.pa = new int*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		g.pa[i] = new int[g.vSize];
//	}
//	for (int i = 0; i < g.vSize; ++i)
//		for (int j = 0; j < g.vSize; ++j)
//			g.pa[i][j] = 0;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//		delete[] g.pa[i];
//	delete[] g.pa;
//}
//void PrintMatrix(const Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (int j = 0; j < g.vSize; ++j)
//		{
//			cout << g.pa[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void AddEdge(Graph& g, int start_v, int end_v)
//{
//	g.pa[start_v][end_v] = 1;
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "V :";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//
//	cout << "E :";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (int j = 0; j < g.vSize; ++j)
//		{
//			if (g.pa[i][j] == 1)
//			{
//				cout << "(" << i << "," << j << ")";
//			}
//		}
//		cout << endl;
//	}
//}
//void main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2);
//
//	AddEdge(g, 1, 0);
//	AddEdge(g, 1, 3);
//	AddEdge(g, 1, 4);
//
//	AddEdge(g, 2, 0);
//	AddEdge(g, 2, 5);
//	AddEdge(g, 2, 6);
//
//	AddEdge(g, 3, 1);
//	AddEdge(g, 3, 7);
//
//	AddEdge(g, 4, 1);
//	AddEdge(g, 4, 7);
//
//	AddEdge(g, 5, 2);
//	AddEdge(g, 5, 7);
//
//	AddEdge(g, 6, 2);
//	AddEdge(g, 6, 7);
//
//	AddEdge(g, 7, 3);
//	AddEdge(g, 7, 4);
//	AddEdge(g, 7, 5);
//	AddEdge(g, 7, 6);
//
//	PrintGraph(g);
//	PrintMatrix(g);
//	UninitGraph(g);
//	system("pause");
//}


//// ���� ��� ǥ�� ��
///*
//��� Ʈ���� �ϳ��� �׷�����
//0 1 2 3 4 5 6 7 8
//0
//1
//2
//3
//4
//5
//6
//7
//
//*/
///*
//���� ������ �迭
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Graph
//{
//	int** pa;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.pa = new int*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		g.pa[i] = new int[g.vSize];
//	}
//	for (int i = 0; i < g.vSize; ++i)
//		for (int j = 0; j < g.vSize; ++j)
//			g.pa[i][j] = 0;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//		delete[] g.pa[i];
//	delete[] g.pa;
//}
//void PrintMatrix(const Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (int j = 0; j < g.vSize; ++j)
//		{
//			cout << g.pa[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void AddEdge(Graph& g, int start_v, int end_v)
//{
//	g.pa[start_v][end_v] = 1;
//}
//void main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2);
//
//	AddEdge(g, 1, 0);
//	AddEdge(g, 1, 3);
//	AddEdge(g, 1, 4);
//
//	AddEdge(g, 2, 0);
//	AddEdge(g, 2, 5);
//	AddEdge(g, 2, 6);
//
//	AddEdge(g, 3, 1);
//	AddEdge(g, 3, 7);
//
//	AddEdge(g, 4, 1);
//	AddEdge(g, 4, 7);
//
//	AddEdge(g, 5, 2);
//	AddEdge(g, 5, 7);
//
//	AddEdge(g, 6, 2);
//	AddEdge(g, 6, 7);
//
//	AddEdge(g, 7, 3);
//	AddEdge(g, 7, 4);
//	AddEdge(g, 7, 5);
//	AddEdge(g, 7, 6);
//
//	PrintMatrix(g);
//	UninitGraph(g);
//	system("pause");
//}




//// ���� ��� ǥ�� ��
///*
//��� Ʈ���� �ϳ��� �׷�����
//0 1 2 3 4 5 6 7 8
//0
//1
//2
//3
//4
//5
//6
//7
//
//*/
///*
//���� ������ �迭
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Graph
//{
//	int** pa;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.pa = new int*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		g.pa[i] = new int[g.vSize];
//	}
//	for (int i = 0; i < g.vSize; ++i)
//		for (int j = 0; j < g.vSize; ++j)
//			g.pa[i][j] = 0;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//		delete[] g.pa[i];
//	delete[] g.pa;
//}
//void PrintMatrix(const Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (int j = 0; j < g.vSize; ++j)
//		{
//			cout << g.pa[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2);
//
//	AddEdge(g, 1, 0);
//	AddEdge(g, 1, 3);
//	AddEdge(g, 1, 4);
//
//	AddEdge(g, 2, 0);
//	AddEdge(g, 2, 5);
//	AddEdge(g, 2, 6);
//
//	AddEdge(g, 3, 1);
//	AddEdge(g, 3, 7);
//
//	AddEdge(g, 4, 1);
//	AddEdge(g, 4, 7);
//
//	AddEdge(g, 5, 2);
//	AddEdge(g, 5, 7);
//
//	AddEdge(g, 6, 2);
//	AddEdge(g, 6, 7);
//
//	AddEdge(g, 7, 3);
//	AddEdge(g, 7, 4);
//	AddEdge(g, 7, 5);
//	AddEdge(g, 7, 6);
//
//	PrintMatrix(g);
//	UninitGraph(g);
//	system("pause");
//}





//// ���� ��� ǥ�� ��
///*
//��� Ʈ���� �ϳ��� �׷�����
//	0 1 2 3 4 5 6 7 8
//0
//1
//2
//3
//4
//5
//6
//7
//
//*/
///*
//���� ������ �迭
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Graph
//{
//	int** pa;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.pa = new int*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		g.pa[i] = new int[g.vSize];
//	}
//	for (int i = 0; i < g.vSize; ++i)
//		for (int j = 0; j < g.vSize; ++j)
//			g.pa[i][j] = 0;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//		delete[] g.pa[i];
//	delete[] g.pa;
//}
//void PrintMatrix(const Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (int j = 0; j < g.vSize; ++j)
//		{
//			cout << g.pa[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ 
//	PrintMatrix(g);
//	UninitGraph(g);
//	system("pause");
//}





///*
//�ڷᱸ�� - �׷���(Graph)
//
//Ư���� �ڷᱸ��!
//2���� ��ҵ��� ���� G = (V, E) �׷����� ���ؽ��� �������� �����̴�.
//1. ����(��) = ���ؽ�
//2. ����(��) = ����
//
//���ݱ����� ������ ���ؼ���, ����� ��Ģ�� ����� ���ؼ���, ��Ÿ ������� ����Ͽ��µ�, �׷����� ���� �ٸ�
//ex)
//������ (��ġ, ��, ���� ����� �� �� ����)
//������ (���, ������, �ٸ� ����� �� �� ����)
//
//�׷����� ũ�� 2����
//1. ���⼺ �׷��� ( ���ؽ��� ���ؽ� ���̿� ���⼺�� O )
//���⼺�� ���� �� ������ ������ N(N-1)
//
//2. ������ �׷��� ( ���ؽ��� ���ؽ� ���̿� ���⼺�� X )
//N(N-1) / 2
//
//������ ��ǻ�Ϳ� ��� ǥ���ϴ���?
//ũ�� 2���� ���
//1. ���� ��� ǥ�� ��� : ���״�� ��� ���� ǥ��
//- ��� ǥ�� �޸� �� �����ϸ�-> �׸����� ǥ���� �׷����� �Ȱ��� ���� �� �� ����
//
//2. ���� ����Ʈ ǥ�� ���
//- ������ ������ �ص�� ���� �����ϰ�, ���� ����Ǿ� �ִ� ������ ���� ��
//�������� �� 2������ ����Ǵ� ��.
//*�ٽ��� ���� : ���ؽ��� ���ؽ��� �� �ϳ��� �������� ���� ���� �Ǿ� �ִ���?
//
//C++�� �׷���  ���̺귯���� ���µ�, �ٸ� ������ ����.
//���� ���ý��� ADD�ؼ� ���� ��Ŵ
//
//����� ���� 
//V: 0, 1, 2, 3 // ���ý��� ����� �� �־�� �ϰ�
//E: (0, 1), (0, 3), (1, 0), (1, 2) (2, 1), (2, 3), (3, 0)�׻� 2���� ���ý��� �־�� �� ( ����ϱ� )
//   (START, TARGET) ���ؽ���� ��
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void main()
//{
//	Node n1 = { 10 };
//	Node n2 = { 20 };
//	Node n3 = { 30 };
//	Node* head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	for (Node* p = head; p; p = p->link)
//		cout << p->data << endl;
//
//	system("pause");
//}



///*
//�ڷᱸ�� - �׷���
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void main()
//{
//	Node n1 = { 10 };
//	Node n2 = { 20 };
//	Node n3 = { 30 };
//	Node* head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	/*cout << head->data << endl;
//	cout << head->link->data << endl;
//	cout << head->link->link->data << endl;*/
//
//	for (Node* p = head; p != NULL; p = p->link)
//		cout << p->data << endl;
//
//	system("pause");
//}



///*
//�ڷᱸ�� - �׷���
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void main()
//{
//	Node n1 = { 10 };
//	Node n2 = { 20 };
//	Node n3 = { 30 };
//	Node* head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	/*cout << head->data << endl;
//	cout << head->link->data << endl;
//	cout << head->link->link->data << endl;*/
//
//	for (Node* p = head; p != NULL; p = p->link)
//		cout << p->data << endl;
//
//	system("pause");
//}