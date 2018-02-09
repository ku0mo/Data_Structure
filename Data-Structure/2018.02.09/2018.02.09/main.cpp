/*
검색 성능에서 *Hash는 이론적으로  상수시간에 찾을 수 있음

2진 트리는 log 시간에 구할 수 있음

key -> 해쉬 함수(해쉬 연산) -> 실제 데이터가 위치하는 (Address) 주소를 반환  -> 해쉬 테이블 (bucket, 방)

충돌 : 같은 어드레스에 같은 키가 존재할 수 있음

충돌을 회피하는 방식
1. 폐쇠 해싱 (안 쓰임), 주소의 2배를 하거나 나누거나 일정한 정책을 만들어서 만듬

2. 개방 해싱 : 충돌이 발생했을 때, 메모리 외적으로 확장하는 방식

해쉬는 메모리를 버려서, 시간을 버는 자료구조라고 함, 그걸 해쉬는 전제로 함

대부분 프로그램 언어는 객체들이 저 해쉬 코드를 뽑을 수 있는 것을 가지고 있음

결론은 개방형 해싱에 외부에 원소들을 연결한 개방형 해싱의 한 종류인 체이닝 형식을 사용함

해쉬의 가장 기본적인 전략
해쉬를 가장 많이 쓰는 곳 - 해쉬

해쉬 성능이 좋을때는 30%,
70% 넘어가면 엄청 느려짐
*/
#include <iostream>
#include <cstdlib>
#include <list>
using namespace std;
struct Hash
{
	list<int>* table;
	int size;
};
int HashFunction(int size, int  key) // 데이터의 특성은 클라이언트가 알고 있기때문에, 콜백으로 사용자 정책을 반영하도록 하게 되있음
{
	return ((key >> 2) << 2) % size; // 0~9 만들기 위해서
}
void AddHash(Hash& h, int key)
{
	int addr = HashFunction(h.size, key); // hash의 어드레스를 반환함
	h.table[addr].push_back(key);
}
void PrintHash(Hash& h)
{
	int tsize = h.size; // table 사이즈
	for (int i = 0; i < tsize; ++i)
	{
		cout << "[" << i << "]: ";
		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
			cout << *iter << " ";
		cout << endl;
	}
}
void SearchHash(Hash& h, int key)
{
	int addr = HashFunction(h.size, key);
	for (list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
		if (key == *iter)
		{
			cout << key << " : 찾음" << endl;
			return;
		}
	cout << "key 없음!" << endl;
}
void RemoveHash(Hash& h, int key)
{
	int addr = HashFunction(h.size, key);
	list<int>::iterator iter = find(h.table[addr].begin(), h.table[addr].end(), key);
	if (iter != h.table[addr].end())
		h.table[addr].erase(iter);
}
void InitHash(Hash& h, int tsize = 10)
{
	h.size = tsize;
	h.table = new list<int>[h.size];
}
void UninitHash(Hash& h, int tsize = 10)
{
	delete[] h.table;
}
void main()
{
	Hash h;

	InitHash(h);
	AddHash(h, 40);
	AddHash(h, 80);
	AddHash(h, 60);
	AddHash(h, 30);
	AddHash(h, 20);
	AddHash(h, 20);
	AddHash(h, 120);

	SearchHash(h, 80);
	RemoveHash(h, 80);
	PrintHash(h);

	UninitHash(h);

	system("pause");
}




///*
//검색 성능에서 *Hash는 이론적으로  상수시간에 찾을 수 있음
//
//2진 트리는 log 시간에 구할 수 있음
//
//key -> 해쉬 함수(해쉬 연산) -> 실제 데이터가 위치하는 (Address) 주소를 반환  -> 해쉬 테이블 (bucket, 방)
//
//충돌 : 같은 어드레스에 같은 키가 존재할 수 있음
//
//충돌을 회피하는 방식
//1. 폐쇠 해싱 (안 쓰임), 주소의 2배를 하거나 나누거나 일정한 정책을 만들어서 만듬
//
//2. 개방 해싱 : 충돌이 발생했을 때, 메모리 외적으로 확장하는 방식
//
//해쉬는 메모리를 버려서, 시간을 버는 자료구조라고 함, 그걸 해쉬는 전제로 함
//
//대부분 프로그램 언어는 객체들이 저 해쉬 코드를 뽑을 수 있는 것을 가지고 있음
//
//결론은 개방형 해싱에 외부에 원소들을 연결한 개방형 해싱의 한 종류인 체이닝 형식을 사용함
//
//해쉬의 가장 기본적인 전략
//해쉬를 가장 많이 쓰는 곳 - 해쉬
//
//해쉬 성능이 좋을때는 30%,
//70% 넘어가면 엄청 느려짐
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int>* table;
//	int size;
//};
//int HashFunction(int size,  int  key) 
//{
//	return ((key >> 2) << 2) % size; // 0~9 만들기 위해서
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(h.size, key); // hash의 어드레스를 반환함
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = h.size; // table 사이즈
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key)
//{
//	int addr = HashFunction(h.size, key);
//	for (list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
//		if (key == *iter)
//		{
//			cout << key << " : 찾음" << endl;
//			return;
//		}
//	cout << "key 없음!" << endl;
//}
//void RemoveHash(Hash& h, int key)
//{
//	int addr = HashFunction(h.size, key);
//	list<int>::iterator iter = find(h.table[addr].begin(), h.table[addr].end(), key);
//	if (iter != h.table[addr].end())
//		h.table[addr].erase(iter);
//}
//void InitHash(Hash& h, int tsize = 10)
//{
//	h.size = tsize;
//	h.table = new list<int>[h.size];
//}
//void UninitHash(Hash& h, int tsize = 10)
//{
//	delete[] h.table;
//}
//void main()
//{
//	Hash h;
//
//	InitHash(h);
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 68);
//	AddHash(h, 34);
//	AddHash(h, 21);
//	AddHash(h, 26);
//	AddHash(h, 120);
//	SearchHash(h, 89);
//	RemoveHash(h, 89);
//	PrintHash(h);
//
//	UninitHash(h);
//
//	system("pause");
//}




///*
//검색 성능에서 *Hash는 이론적으로  상수시간에 찾을 수 있음
//
//2진 트리는 log 시간에 구할 수 있음
//
//key -> 해쉬 함수(해쉬 연산) -> 실제 데이터가 위치하는 (Address) 주소를 반환  -> 해쉬 테이블 (bucket, 방)
//
//충돌 : 같은 어드레스에 같은 키가 존재할 수 있음
//
//충돌을 회피하는 방식
//1. 폐쇠 해싱 (안 쓰임), 주소의 2배를 하거나 나누거나 일정한 정책을 만들어서 만듬
//
//2. 개방 해싱 : 충돌이 발생했을 때, 메모리 외적으로 확장하는 방식
//
//해쉬는 메모리를 버려서, 시간을 버는 자료구조라고 함, 그걸 해쉬는 전제로 함
//
//대부분 프로그램 언어는 객체들이 저 해쉬 코드를 뽑을 수 있는 것을 가지고 있음
//
//결론은 개방형 해싱에 외부에 원소들을 연결한 개방형 해싱의 한 종류인 체이닝 형식을 사용함
//
//해쉬의 가장 기본적인 전략
//해쉬를 가장 많이 쓰는 곳 - 해쉬
//
//해쉬 성능이 좋을때는 30%,
//70% 넘어가면 엄청 느려짐
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int> table[10];
//};
//int HashFunction(int  key)
//{
//	return ((key >> 2) << 2) % 10; // 0~9 만들기 위해서
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key); // hash의 어드레스를 반환함
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10; // table 사이즈
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key)
//{
//	int addr = HashFunction(key);
//	for (list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
//		if (key == *iter)
//		{
//			cout << key << " : 찾음" << endl;
//			return;
//		}
//	cout << "key 없음!" << endl;
//}
//void RemoveHash(Hash& h, int key)
//{
//	int addr = HashFunction(key);
//	list<int>::iterator iter = find(h.table[addr].begin(), h.table[addr].end(), key);
//	if (iter != h.table[addr].end())
//		h.table[addr].erase(iter);
//}
//void main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 68);
//	AddHash(h, 34);
//	AddHash(h, 21);
//	AddHash(h, 26);
//	AddHash(h, 120);
//
//	SearchHash(h, 89);
//	RemoveHash(h, 89);
//	PrintHash(h);
//
//	system("pause");
//}





///*
//검색 성능에서 *Hash는 이론적으로  상수시간에 찾을 수 있음
//
//2진 트리는 log 시간에 구할 수 있음
//
//key -> 해쉬 함수(해쉬 연산) -> 실제 데이터가 위치하는 (Address) 주소를 반환  -> 해쉬 테이블 (bucket, 방)
//
//충돌 : 같은 어드레스에 같은 키가 존재할 수 있음
//
//충돌을 회피하는 방식
//1. 폐쇠 해싱 (안 쓰임), 주소의 2배를 하거나 나누거나 일정한 정책을 만들어서 만듬
//
//2. 개방 해싱 : 충돌이 발생했을 때, 메모리 외적으로 확장하는 방식
//
//해쉬는 메모리를 버려서, 시간을 버는 자료구조라고 함, 그걸 해쉬는 전제로 함
//
//대부분 프로그램 언어는 객체들이 저 해쉬 코드를 뽑을 수 있는 것을 가지고 있음
//
//결론은 개방형 해싱에 외부에 원소들을 연결한 개방형 해싱의 한 종류인 체이닝 형식을 사용함
//
//해쉬의 가장 기본적인 전략
//해쉬를 가장 많이 쓰는 곳 - 해쉬
//
//해쉬 성능이 좋을때는 30%,
//70% 넘어가면 엄청 느려짐
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int> table[10];
//};
//int HashFunction(int  key)
//{
//	return ((key >> 2) << 2) % 10; // 0~9 만들기 위해서
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key); // hash의 어드레스를 반환함
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10; // table 사이즈
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key)
//{
//	int addr = HashFunction(key);
//	for (list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
//		if (key == *iter)
//		{
//			cout << key << " : 찾음" << endl;
//			return;
//		}
//	cout << "key 없음!" << endl;
//}
//void main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 68);
//	AddHash(h, 34);
//	AddHash(h, 21);
//	AddHash(h, 26);
//	AddHash(h, 120);
//
//	SearchHash(h, 89);
//	PrintHash(h);
//
//	system("pause");
//}




///*
//검색 성능에서 *Hash는 이론적으로  상수시간에 찾을 수 있음
//
//2진 트리는 log 시간에 구할 수 있음
//
//key -> 해쉬 함수(해쉬 연산) -> 실제 데이터가 위치하는 (Address) 주소를 반환  -> 해쉬 테이블 (bucket, 방)
//
//충돌 : 같은 어드레스에 같은 키가 존재할 수 있음
//
//충돌을 회피하는 방식
//1. 폐쇠 해싱 (안 쓰임), 주소의 2배를 하거나 나누거나 일정한 정책을 만들어서 만듬
//
//2. 개방 해싱 : 충돌이 발생했을 때, 메모리 외적으로 확장하는 방식
//
//해쉬는 메모리를 버려서, 시간을 버는 자료구조라고 함, 그걸 해쉬는 전제로 함
//
//대부분 프로그램 언어는 객체들이 저 해쉬 코드를 뽑을 수 있는 것을 가지고 있음
//
//결론은 개방형 해싱에 외부에 원소들을 연결한 개방형 해싱의 한 종류인 체이닝 형식을 사용함
//
//해쉬의 가장 기본적인 전략
//해쉬를 가장 많이 쓰는 곳 - 해쉬
//
//해쉬 성능이 좋을때는 30%,
//70% 넘어가면 엄청 느려짐
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int> table[10];
//};
//int HashFunction(int  key)
//{
//	return ((key >> 2) << 2) % 10; // 0~9 만들기 위해서
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key); // hash의 어드레스를 반환함
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10; // table 사이즈
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter;
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key) 
//{
//	int addr = HashFunction(key);
//	for(list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
//		if (key == *iter)
//		{
//			cout << key << " : 찾음" << endl;
//			return;
//		}
//	cout << "key 없음!" << endl;
//}
//void main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 120);
//
//	SearchHash(h, 89);
//	PrintHash(h);
//
//	system("pause");
//}




///*
//검색 성능에서 *Hash는 이론적으로  상수시간에 찾을 수 있음
//
//2진 트리는 log 시간에 구할 수 있음
//
//key -> 해쉬 함수(해쉬 연산) -> 실제 데이터가 위치하는 (Address) 주소를 반환  -> 해쉬 테이블 (bucket, 방)
//
//충돌 : 같은 어드레스에 같은 키가 존재할 수 있음
//
//충돌을 회피하는 방식
//1. 폐쇠 해싱 (안 쓰임), 주소의 2배를 하거나 나누거나 일정한 정책을 만들어서 만듬
//
//2. 개방 해싱 : 충돌이 발생했을 때, 메모리 외적으로 확장하는 방식
//
//해쉬는 메모리를 버려서, 시간을 버는 자료구조라고 함, 그걸 해쉬는 전제로 함
//
//대부분 프로그램 언어는 객체들이 저 해쉬 코드를 뽑을 수 있는 것을 가지고 있음
//
//결론은 개방형 해싱에 외부에 원소들을 연결한 개방형 해싱의 한 종류인 체이닝 형식을 사용함
//
//해쉬의 가장 기본적인 전략
//해쉬를 가장 많이 쓰는 곳 - 해쉬
//
//해쉬 성능이 좋을때는 30%,
//70% 넘어가면 엄청 느려짐
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int> table[10];
//};
//int HashFunction(int  key)
//{
//	return ((key >> 2) << 2) % 10; // 0~9 만들기 위해서
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key); // hash의 어드레스를 반환함
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10; // table 사이즈
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter;
//		cout << endl;
//	}
//}
//void main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 120);
//
//	PrintHash(h);
//
//	system("pause");
//}






///*
//검색 성능에서 *Hash는 이론적으로  상수시간에 찾을 수 있음
//
//2진 트리는 log 시간에 구할 수 있음
//
//key -> 해쉬 함수(해쉬 연산) -> 실제 데이터가 위치하는 (Address) 주소를 반환  -> 해쉬 테이블 (bucket, 방)
//
//충돌 : 같은 어드레스에 같은 키가 존재할 수 있음
//
//충돌을 회피하는 방식
//1. 폐쇠 해싱 (안 쓰임), 주소의 2배를 하거나 나누거나 일정한 정책을 만들어서 만듬
//
//2. 개방 해싱 : 충돌이 발생했을 때, 메모리 외적으로 확장하는 방식
//
//해쉬는 메모리를 버려서, 시간을 버는 자료구조라고 함, 그걸 해쉬는 전제로 함
//
//대부분 프로그램 언어는 객체들이 저 해쉬 코드를 뽑을 수 있는 것을 가지고 있음
//
//결론은 개방형 해싱에 외부에 원소들을 연결한 개방형 해싱의 한 종류인 체이닝 형식을 사용함
//
//해쉬의 가장 기본적인 전략
//해쉬를 가장 많이 쓰는 곳 - 해쉬
//
//해쉬 성능이 좋을때는 30%, 
//70% 넘어가면 엄청 느려짐
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//
//
//	system("pause");
//}
//





///*
//검색 성능에서 *Hash는 이론적으로  상수시간에 찾을 수 있음
//
//2진 트리는 log 시간에 구할 수 있음
//
//	key -> 해쉬 함수(해쉬 연산) -> 실제 데이터가 위치하는 (Address) 주소를 반환  -> 해쉬 테이블 (bucket, 방) 
//
//	충돌 : 같은 어드레스에 같은 키가 존재할 수 있음 
//
//	충돌을 회피하는 방식 
//	1. 폐쇠 해싱 (안 쓰임), 주소의 2배를 하거나 나누거나 일정한 정책을 만들어서 만듬
//
//	2. 개방 해싱 : 충돌이 발생했을 때, 메모리 외적으로 확장하는 방식
//	
//	해쉬는 메모리를 버려서, 시간을 버는 자료구조라고 함, 그걸 해쉬는 전제로 함
//
//	대부분 프로그램 언어는 객체들이 저 해쉬 코드를 뽑을 수 있는 것을 가지고 있음
//	
//	결론은 개방형 해싱에 외부에 원소들을 연결한 개방형 해싱의 한 종류인 체이닝 형식을 사용함
//
//	해쉬의 가장 기본적인 전략
//	해쉬를 가장 많이 쓰는 곳 - 해쉬
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; 
//
//
//	system("pause");
//}
//




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//사용하는 이유 : heap 안에 넣기만 하면, 일 바로 잘하는 사람, 성적 좋은 사람 바로 꺼낼 수 있음
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) // heap과 관계없음 확인을 위해서 만듬
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//template <typename func>
//void Pop_Heap(int list[], func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && f(list[child], list[child + 1])) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (f(list[parent], list[child])) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // 이항 predicate => 다른 언어에선 보통 ramda로 표현함
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // 약속 // 왼쪽 객체가 작은 놈은 less, 오른쪽이 크면 greater
//	}
//};
//template <typename Func>
//void Sort_Heap(int list[], Func f) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//		Pop_Heap(list, f);
//}
//template <typename Func>
//void Make_Heap(int list[], Func f)
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 0; i < size; ++i)
//		Push_Heap(list, f);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Make_Heap(list, less<int>()); // 아무것도 안주면 less로 동작
//	PrintList(list, 11);
//
//	Sort_Heap(list, less<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//사용하는 이유 : heap 안에 넣기만 하면, 일 바로 잘하는 사람, 성적 좋은 사람 바로 꺼낼 수 있음
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) // heap과 관계없음 확인을 위해서 만듬
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//template <typename func>
//void Pop_Heap(int list[], func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && f(list[child], list[child + 1])) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (f(list[parent], list[child])) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // 이항 predicate => 다른 언어에선 보통 ramda로 표현함
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // 약속 // 왼쪽 객체가 작은 놈은 less, 오른쪽이 크면 greater
//	}
//};
//template <typename Func>
//void Sort_Heap(int list[], Func f) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//		Pop_Heap(list, f);
//}
//template <typename Func>
//void Make_Heap(int list[], Func f)
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 0; i < size; ++i)
//		Push_Heap(list, f);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Make_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	Sort_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}





///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//사용하는 이유 : heap 안에 넣기만 하면, 일 바로 잘하는 사람, 성적 좋은 사람 바로 꺼낼 수 있음
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//template <typename func>
//void Pop_Heap(int list[], func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && f(list[child], list[child + 1])) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (f(list[parent], list[child])) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // 이항 predicate => 다른 언어에선 보통 ramda로 표현함
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // 약속 // 왼쪽 객체가 작은 놈은 less, 오른쪽이 크면 greater
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}
//




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//사용하는 이유 : heap 안에 넣기만 하면, 일 바로 잘하는 사람, 성적 좋은 사람 바로 꺼낼 수 있음
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//template <typename func>
//void Pop_Heap(int list[], func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && f(list[child] , list[child + 1])) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (f(list[parent] , list[child])) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // 이항 predicate => 다른 언어에선 보통 ramda로 표현함
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // 약속 // 왼쪽 객체가 작은 놈은 less, 오른쪽이 크면 greater
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//
//	Pop_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//사용하는 이유 : heap 안에 넣기만 하면, 일 바로 잘하는 사람, 성적 좋은 사람 바로 꺼낼 수 있음
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // 이항 predicate => 다른 언어에선 보통 ramda로 표현함
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // 약속 // 왼쪽 객체가 작은 놈은 less, 오른쪽이 크면 greater
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	cout << Greater<int>()(40, 50);
//	//cout << Greater<int>().operator(40, 50); 
//	Greater<int> g;
//	cout << g(40, 50) << endl;
//	cout << g.operator()(40, 50) << endl;
//	Push_Heap(list, g);
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}



///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//사용하는 이유 : heap 안에 넣기만 하면, 일 바로 잘하는 사람, 성적 좋은 사람 바로 꺼낼 수 있음
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[]) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		Pop_Heap(list);
//}
////void Make_Heap(int list[])
////{
////	int size = list[0];
////	list[0] = 0;
////	for (int i = 1; i <= size; ++i)
////		Push_Heap(list);
////}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}







///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//사용하는 이유 : heap 안에 넣기만 하면, 일 바로 잘하는 사람, 성적 좋은 사람 바로 꺼낼 수 있음
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[]) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		Pop_Heap(list);
//}
////void Make_Heap(int list[])
////{
////	int size = list[0];
////	list[0] = 0;
////	for (int i = 1; i <= size; ++i)
////		Push_Heap(list);
////}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}
//
//


///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[]) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[]) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		Pop_Heap(list);
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Make_Heap(list); // 10개를 heap으로 보관해줘
//
//	PrintList(list, 11);
//
//	Sort_Heap(list);
//	PrintList(list, 11);
//
//	system("pause");
//}






///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[]) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
////void Sort_Heap(int list[]) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
////{
////	int temp[11];
////	int size = list[0];
////	for (int i = 1; i <= size; ++i)
////		temp[i] = Pop_Heap(list);
////	for (int i = 1; i <= size; ++i)
////		list[size - i + 1] = temp[i];
////	list[0] = size;
////}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Make_Heap(list); // 10개를 heap으로 보관해줘
//
//	PrintList(list, 11);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	PrintList(list, 11);
//
//	system("pause");
//}
//




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[]) // heap 유지 연산
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//}
////void Sort_Heap(int list[]) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
////{
////	int temp[11];
////	int size = list[0];
////	for (int i = 1; i <= size; ++i)
////		temp[i] = Pop_Heap(list);
////	for (int i = 1; i <= size; ++i)
////		list[size - i + 1] = temp[i];
////	list[0] = size;
////}
////void Make_Heap(int list[])
////{
////	int size = list[0];
////	list[0] = 0;
////	for (int i = 1; i <= size; ++i)
////		Push_Heap(list, list[i]);
////}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	PrintList(list, 11);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	PrintList(list, 11);
//
//	system("pause");
//}
//


///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // 맨 밑에 있는 놈을 일단 루트로 올림
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//	return data;
//}
//void Sort_Heap(int list[]) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		temp[i] = Pop_Heap(list);
//	for (int i = 1; i <= size; ++i)
//		list[size - i + 1] = temp[i];
//	list[0] = size;
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list, list[i]);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10, 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Make_Heap(list);
//	PrintList(list, 11);
//
//	Sort_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // 맨 밑에 있는 놈을 일단 루트로 올림
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//	return data;
//}
//void Sort_Heap(int list[]) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		temp[i] = Pop_Heap(list);
//	for (int i = 1; i <= size; ++i)
//		list[size - i + 1] = temp[i];
//	list[0] = size;
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list, list[i]);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10, 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Make_Heap(list);
//	Sort_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // 맨 밑에 있는 놈을 일단 루트로 올림
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//	return data;
//}
//void Sort_Heap(int list[]) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		temp[i] = Pop_Heap(list);
//	for (int i = 1; i <= size; ++i)
//		list[size-i+1]= temp[i];
//	list[0] = size;
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list, list[i]);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10, 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Make_Heap(list);
//	Sort_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}



///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // 맨 밑에 있는 놈을 일단 루트로 올림
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int temp[20] = { 0 };
//	for (int i = 0; i < size; ++i)
//		Push_Heap(temp, list[i]);
//	for (int i = 0; i < size; ++i)
//		list[i] = Pop_Heap(temp);
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i < size; ++i)
//		Push_Heap(list, list[i]);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10, 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10개의 원소가 있다는 것을 0 index에 저장
//
//	Make_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // 비교를 여기서 함
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // 맨 밑에 있는 놈을 일단 루트로 올림
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1]) // 비교 여기서 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int temp[20] = { 0 };
//	for (int i = 0; i < size; ++i)
//		Push_Heap(temp, list[i]);
//	for (int i = 0; i < size; ++i)
//		list[i] = Pop_Heap(temp);
//}
//void main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//
//	//make_heap(list, list + 10);
//	//make_heap(list, list + 10, less<int>());
//	//sort_heap(list, list + 10); // 디폴트는 (less)오른차순 정렬 함
//	//sort_heap(list, list + 10, less<int>()); // 디폴트는 (less)오른차순 정렬 함
//
//	make_heap(list, list + 10, greater<int>());
//	sort_heap(list, list + 10, greater<int>()); // 디폴트는 (less)오른차순 정렬 함
//	PrintList(list, 10);
//	system("pause");
//}





///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) 들어 있음
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // 맨 밑에 있는 놈을 일단 루트로 올림
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1])
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int temp[20] = { 0 };
//	for (int i = 0; i < size; ++i)
//		Push_Heap(temp, list[i]);
//	for (int i = 0; i < size; ++i)
//		list[i] = Pop_Heap(temp);
//}
//void main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//
//	//make_heap(list, list + 10);
//	//make_heap(list, list + 10, less<int>());
//	//sort_heap(list, list + 10); // 디폴트는 (less)오른차순 정렬 함
//	//sort_heap(list, list + 10, less<int>()); // 디폴트는 (less)오른차순 정렬 함
//
//	make_heap(list, list + 10, greater<int>()); 
//	sort_heap(list, list + 10, greater<int>()); // 디폴트는 (less)오른차순 정렬 함
//	PrintList(list, 10);
//	system("pause");
//}





///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // 맨 밑에 있는 놈을 일단 루트로 올림
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if (child < size  && list[child] < list[child + 1])
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size) // 힙 소트를 하기 위해서는 heap 자료에 넣었다가 빼면 됨
//{
//	int temp[20] = { 0 };
//	for (int i = 0; i < size; ++i)
//		Push_Heap(temp, list[i]);
//	for (int i = 0; i < size; ++i)
//		list[i] = Pop_Heap(temp);
//}
//void main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	
//	Heap_Sort(list, 10);// list 줄테니까 원소의 개수 10개를 힙 소팅(정렬)해라
//	PrintList(list, 10);
//	system("pause");
//}



///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size : " << size << ", ";
//	for (int i = 1; i < size + 1; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // 맨 밑에 있는 놈을 일단 루트로 올림
//	int size = --list[0]; // 어차피 감소 시켜야 하니까 하나 줄여서 사이즈를 넣음
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child가 자식보다 작을 경우 자식이 없기 때문에  
//	{
//		//if (list[child] < list[child + 1]) // 자식끼리 비교해서 // * 이건 오류가 있음 자식이 하나 없는 경우가 있기 때문에 자식이 혼자 있는지 검사해야함
//		if ( child < size  && list[child] < list[child + 1]) 
//			child = child + 1; // 큰놈을 child로 만듬
//		if (list[parent] < list[child]) // child가 더 크면
//			Swap(list[parent], list[child]); // 바꿈
//		else
//			break;// 
//
//		parent = child; // 밑에 자식들과도 계속 비교해나가야 함으로
//		child = parent * 2;
//	}
//	return data;
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[20] = {0};
//
//	Push_Heap(list, 40);
//	Push_Heap(list, 50);
//	Push_Heap(list, 20);
//	Push_Heap(list, 90);
//	Push_Heap(list, 10);
//	Push_Heap(list, 70);
//	Push_Heap(list, 60);
//	Push_Heap(list, 30);
//	Push_Heap(list, 80);
//	Push_Heap(list, 100);
//
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//	cout << Pop_Heap(list) << endl;//root에 있는 가장 큰 원소를 반환하게 해야 함
//
//
//	PrintList(list);
//
//	system("pause");
//}




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size : " << size << ", ";
//	for (int i = 1; i < size + 1; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[10] = { 6, 90, 50, 80, 40, 10, 20 }; // 0번째 인덱스는 자료의 개수로 나타냄 (어차피 안쓰니까) 
//												  // 여기까지는 heap구조가 만들어졌다고 가정
//
//	Push_Heap(list, 60); // list에 60을 넣어달라
//	Push_Heap(list, 30); 
//	Push_Heap(list, 100);  // root 보다 클 경우
//
//	PrintList(list);
//
//	system("pause");
//}



///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index 연산으로 부모와 자식의 자리를 알 수 있음
//부모 = 자식 / 2;
//자식 = 부모 * 2 or 부모 * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap 유지 연산
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (true)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size : " << size << ", ";
//	for (int i = 1; i < size+1; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[10] = { 6, 90, 50, 80, 40, 10, 20 }; // 0번째 인덱스는 자료의 개수로 나타냄 (어차피 안쓰니까) 
//												  // 여기까지는 heap구조가 만들어졌다고 가정
//
//	Push_Heap(list, 60); // list에 60을 넣어달라
//	Push_Heap(list, 30); // list에 60을 넣어달라
//	Push_Heap(list, 70); // list에 60을 넣어달라
//
//	PrintList(list);
//
//	system("pause");
//}




///*
//Heap 자료구조 : 부모노드가 자식노드보다 항상 커야 함
//
//노드 넣을 때마다 노드가 자식보다 큰지 검사 한다.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Push_Heap(int list[], int data)
//{
//	list[list[0]+1] = data;
//	int size = ++list[0];
//	cout << size << endl;
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[10] = { 6, 90, 50, 80, 40, 10, 20 }; // 0번째 인덱스는 자료의 개수로 나타냄 (어차피 안쓰니까) 
//												  // 여기까지는 heap구조가 만들어졌다고 가정
//
//	Push_Heap(list, 60); // list에 60을 넣어달라
//
//	system("pause");
//}





//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Heap
//{
//	vector<int> list;
//public:
//	void Push(int data)
//	{
//		list.push_back(data);
//		push_heap(list.begin(), list.end());
//	}
//	void Print()
//	{
//		for (unsigned i = 0; i < list.size(); ++i)
//			cout << list[i] << " ";
//		cout << endl;
//	}
//	int Pop()
//	{
//		pop_heap(list.begin(), list.end());// 이렇게 빼는 순간 루트를 가장 끝으로 옮김
//		int data = list.back(); // 뒤에 원소 꺼내서 저장
//		list.pop_back(); // 제거
//		return data;
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	Heap h;
//
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Push(80);
//	h.Push(60);
//	h.Push(30);
//	h.Push(70);
//	h.Push(100);
//	h.Print();
//
//	cout << h.Pop() << endl; //root를 반환해야 함
//	h.Print();
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//class Heap
//{
//	int list[10];
//	int size;
//public:
//	Heap() : size(0)
//	{
//	}
//	void Push(int data)
//	{
//		list[size++] = data;
//		push_heap(list, list + size);
//	}
//	void Print()
//	{
//		for (int i = 0; i < size; ++i)
//			cout << list[i] << " ";
//		cout << endl;
//	}
//	int Pop()
//	{
//		pop_heap(list, list + size);// 이렇게 빼는 순간 루트를 가장 끝으로 옮김
//		--size;
//		return list[size];
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	Heap h;
//
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Print();
//
//	cout << h.Pop() << endl; //root를 반환해야 함
//	h.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//class Heap
//{
//	int list[10];
//	int size;
//public:
//	Heap() : size(0) 
//	{
//	}
//	void Push(int data)
//	{
//		list[size++] = data;
//		push_heap(list, list + size);
//	}
//	void Print()
//	{
//		for (int i = 0; i < size; ++i)
//			cout << list[i] << " ";
//		cout << endl;
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	Heap h;		
//
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//void main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	PrintList(list, 10);
//	push_heap(list, list + 1);
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//
//	//make_heap(list, list + 5);
//	PrintList(list, 10);
//	system("pause");
//}