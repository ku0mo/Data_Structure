// 이제 인접 리스트로 바꾸고 싶음
/*
탐색 ( 어디서 부터 출발하든지 상관 없고, 모든 정점을 탐색해보자는 것 )
dfs 탐색 - 깊이로 탐색 (더 이상 인접한 접점이 없을 때까지, 갈 수 있는데까지 끝까지)

bfs 탐색 - 너비를 우선으로 탐색 ( 이웃한 정점으로 0 정점 기준으로 다 탐색하고 내려감 )

트리와 차이는 그래프는 사이클을 이루기때문에 그걸 체크 해야 한다.
비지티는 변수 ( 탐색 한 놈인지 확인하는 놈)
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
	//Node* v[8];// vertex 8개
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
	visited[ver] = 1; // 방문 한거

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
	// 종료 조건 : 끝까지 갔을 때 널일 때

	delete[] visited;
}
int main()
{
	Graph g;
	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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
	Dfs(g, 0); // 출발할 정점을 줌
	Dfs(g, 5); // 출발할 정점을 줌
	Dfs(g, 7); // 출발할 정점을 줌
	UninitGraph(g);
	system("pause");
}

// 내일
// 다익스트라 
// bfs



//// 이제 인접 리스트로 바꾸고 싶음
///*
//인전 리스트도 방법이 2가지
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
//	//Node* v[8];// vertex 8개
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
//	{
//		g.v[start_v] = new Node(end_v);
//		retrun;
//	}
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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



//// 이제 인접 리스트로 바꾸고 싶음
///*
//인전 리스트도 방법이 2가지
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
//	//Node* v[8];// vertex 8개
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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



//// 인정 행렬 표기 법
///*
//사실 트리도 하나의 그래프다
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
//동적 다차원 배열
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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


//// 인정 행렬 표기 법
///*
//사실 트리도 하나의 그래프다
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
//동적 다차원 배열
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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




//// 인정 행렬 표기 법
///*
//사실 트리도 하나의 그래프다
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
//동적 다차원 배열
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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





//// 인정 행렬 표기 법
///*
//사실 트리도 하나의 그래프다
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
//동적 다차원 배열
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 
//	PrintMatrix(g);
//	UninitGraph(g);
//	system("pause");
//}





///*
//자료구조 - 그래프(Graph)
//
//특수한 자료구조!
//2가지 요소들의 집합 G = (V, E) 그래프는 버텍스와 엣지들의 집합이다.
//1. 정점(들) = 버텍스
//2. 간선(들) = 엑지
//
//지금까지는 성능을 위해서건, 입출력 규칙을 만들기 위해서건, 기타 등등으로 사용하였는데, 그래프는 조금 다름
//ex)
//정점은 (위치, 역, 지역 등등이 될 수 있음)
//엣지는 (경로, 연결점, 다리 등등이 될 수 있음)
//
//그래프는 크게 2종류
//1. 방향성 그래프 ( 버텍스와 버텍스 사이에 방향성이 O )
//방향성을 가질 때 간선의 개수는 N(N-1)
//
//2. 무방향 그래프 ( 버텍스와 버텍스 사이에 방향성이 X )
//N(N-1) / 2
//
//문제는 컴퓨터에 어떻게 표현하는지?
//크게 2가지 방법
//1. 인접 행렬 표기 방법 : 말그대로 행과 열로 표현
//- 행렬 표를 메모리 상에 보관하면-> 그림으로 표현한 그래프랑 똑같은 것이 될 수 있음
//
//2. 인접 리스트 표기 방법
//- 정점의 개수를 해드로 먼저 나열하고, 헤드와 연결되어 있는 정점을 연결 함
//나머지는 이 2가지로 응용되는 것.
//*핵심은 인접 : 버텍스와 버텍스가 단 하나의 간선으로 직접 연결 되어 있느냐?
//
//C++은 그래프  라이브러리가 없는데, 다른 언어들은 있음.
//먼저 버택스를 ADD해서 구성 시킴
//
//출력할 때는 
//V: 0, 1, 2, 3 // 버택스를 출력할 수 있어야 하고
//E: (0, 1), (0, 3), (1, 0), (1, 2) (2, 1), (2, 3), (3, 0)항상 2가지 버택스가 있어야 함 ( 관계니까 )
//   (START, TARGET) 버텍스라고 함
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
//자료구조 - 그래프
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
//자료구조 - 그래프
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
