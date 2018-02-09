//#include <iostream>
//#include<cstdlib>
//struct Node     //8바이트, 노드의 크기는 8바이트
//{
//   int data;
//   Node* link;   //다음 노드의 주소를 저장하기 떄문에 포인터이며 노드형
//              //노드는 비연속한 메모리 자료구조에 모두 사용이 된다, 
//};
//using namespace std;
//template <typename T>
//void PrintNode(const T head)
//{
//   for (T p = (Node*)head; p; p = p->link)
//      cout << p->data << endl;
//}
//int main()
//{
//   Node* head;   //블럭시작과 만들어졌기 땜누에 스택에 만들어짐
//   Node n1 = { 10,NULL };
//   Node n2 = { 20,NULL };
//   Node n3 = { 30,NULL };
//   Node n4 = { 40,NULL };
//   Node n5 = { 50,NULL };    
//   
//   n1.link = &n2;
//   n2.link = &n3;
//   n3.link = &n4;
//   n4.link = &n5;
//   head = &n1;
//   PrintNode(head);
//
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//struct Node     //8바이트, 노드의 크기는 8바이트
//{
//   int data;
//   Node* link;   //다음 노드의 주소를 저장하기 떄문에 포인터이며 노드형
//              //노드는 비연속한 메모리 자료구조에 모두 사용이 된다, 
//};
//int main()
//{
//   Node* head;   //블럭시작과 만들어졌기 땜누에 스택에 만들어짐
//   Node n1 = { 10,NULL };
//   Node n2 = { 20,NULL };
//   Node n3 = { 30,NULL };
//   Node n4 = { 40,NULL };
//   Node n5 = { 50,NULL };    
//   
//   n1.link = &n2;
//   n2.link = &n3;
//   n3.link = &n4;
//   n4.link = &n5;
//   head = &n1;
//   
//   cout << p->data << endl;
//   p=p->link;
//   cout << p->data << endl;
//   p = p->link;
//   cout << p->data << endl;
//   p = p->link;
//   cout << p->data << endl;
//   p = p->link;
//   cout << p->data << endl;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//struct Node     //8바이트, 노드의 크기는 8바이트
//{
//   int data;
//   Node* link;   //다음 노드의 주소를 저장하기 떄문에 포인터이며 노드형
//              //노드는 비연속한 메모리 자료구조에 모두 사용이 된다, 
//};
//int main()
//{
//   Node* head;   //블럭시작과 만들어졌기 땜누에 스택에 만들어짐
//   Node n1 = { 10,NULL };
//   Node n2 = { 20,NULL };
//   Node n3 = { 30,NULL };
//   Node n4 = { 40,NULL };
//   Node n5 = { 50,NULL };
//
//   n1.link = &n2;
//   n2.link = &n3;
//   n3.link = &n4;
//   n4.link = &n5;
//   head = &n1;
//
//   cout << head->data << endl;
//   cout << head->link->data << endl;
//   cout << head->link->link->data << endl;
//   cout << head->link->link->link->data << endl;
//   cout << head->link->link->link->link->data << endl;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//struct Node     //8바이트, 노드의 크기는 8바이트
//{
//   int data;
//   Node* link;   //다음 노드의 주소를 저장하기 떄문에 포인터이며 노드형
//             //노드는 비연속한 메모리 자료구조에 모두 사용이 된다, 
//};
//int main()
//{
//   Node* head;   //블럭시작과 만들어졌기 땜누에 스택에 만들어짐
//   Node n1 = { 10,NULL };
//   Node n2 = { 20,NULL };
//   Node n3 = { 30,NULL };
//   Node n4 = { 40,NULL };
//   Node n5 = { 50,NULL };
//
//   n1.link = &n2;
//   n2.link = &n3;
//   n3.link = &n4;
//   n4.link = &n5;
//   head = &n1;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//struct Node     //8바이트, 노드의 크기는 8바이트
//{
//   int data;  
//   Node* link;   //다음 노드의 주소를 저장하기 떄문에 포인터이며 노드형
////노드는 비연속한 메모리 자료구조에 모두 사용이 된다, 
//};
//
//int main()
//{
//   cout << sizeof(Node) << endl;
//   system("pause");
//}
//#include <iostream>
//#include <queue>
//#include <deque>
//#include <list>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//template <typename T, typename Cont=deque<T> >
//class Queue
//{
// Cont _cont;
//public:
// void push(const T& data)
// {
//  _cont.push_back(data);
// }
// const T& front()const
// {
//  return _cont.front();
// }
// void pop()
// {
//  _cont.pop_front();
// }
//};
//int main()
//{
// //Queue<int, list<int> > q;
// //Queue<int > q;
// Queue<int,vector<int> > q;
// q.push(10);
// q.push(20);
// q.push(30);
//
// cout << q.front() << endl;
// q.pop();
// cout << q.front() << endl;
// q.pop();
// cout << q.front() << endl;
// q.pop();
//
// system("pause");
//}

//#include <iostream>
//#include <queue>
//#include <deque>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Queue
//{ 
// deque<T> _cont;
//public:
// void push(const T& data)
// {
//  _cont.push_back(data);
// }
// const T& front()const
// {
//  return _cont.front();
// }
// void pop()
// {
//  _cont.pop_front();
// }
//};
//int main()
//{
// Queue<int> q;
// q.push(10);
// q.push(20);
// q.push(30);
//
// cout << q.front() << endl;
// q.pop();
// cout << q.front() << endl;
// q.pop();
// cout << q.front() << endl;
// q.pop();
//
// system("pause");
//}

//#include <iostream>
//#include <queue>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Queue
//{
// T* que;
// int capacity;
// int front, rear;
// Queue(const Queue&);
// const Queue& operator=(const Queue&);
//public:
// Queue(int cap = 1000) :front(0), rear(0)
// {
//  que = new T[capacity = cap];
// }
// ~Queue() { delete[] que; }
// void push(const T& data)
// {
//  if ((rear + 1) % capacity == front)
//   return;
//  que[rear = (rear + 1) % capacity] = data;
// }
// const T& pop()
// {
//  if (rear != front)
//   return que[front = (front + 1) % capacity];
//  throw "empty queue!";
// }
//};
//int main()
//{
// Queue<int> q;
// q.push(10);
// q.push(20);
// q.push(30);
// cout << q.pop() << endl;
// cout << q.pop() << endl;
// cout << q.pop() << endl;
// q.push(10);
// q.push(20);
// q.push(30);
// cout << q.pop() << endl;
// cout << q.pop() << endl;
// cout << q.pop() << endl;
//
// system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//#include<queue>////fifo 구조
//using namespace std;
//class Queue
//{
//   int que[5];
//   int rear, front;
//public:
//   Queue() :front(0), rear(0) {}
//   //~Queue() { delete[] que; }
//   void push(int data)
//   {
//      if ((rear + 1) % 5 == front)
//      return;      
//      que[rear=(rear+1)%5] = data;   //메모리 최대개수가 5개이니까 5로 나눔
//   }
//   int pop()
//   {
//      if(rear != front)
//         return que[front=(front+1)%5]; //메모리 최대개수가 5개이니까 5로 나눔
//      throw "empty queue!";
//   }
//};
//int main()
//{
//   Queue q;
//   q.push(10);
//   q.push(20);
//   q.push(30);
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   q.push(10);
//   q.push(20);
//   q.push(30);
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//#include<queue>////fifo 구조
//using namespace std;
//class Queue
//{
//   int que[10];
//   int rear,front;
//public:
//   Queue() :front(0),rear(0){}
//   ~Queue() { delete[] que; }
//   void push(int data)
//   {
//      que[rear++] = data;
//   }
//   int pop()
//   {
//      return que[front++];
//   }
//};
//int main()
//{
//   Queue q;
//   q.push(10);
//   q.push(20);
//   q.push(30);
//
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   q.pop();
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//template<typename T>
//class Vector
//{
//   T* _arr;
//   int _size;
//   int _capacity;
//   Vector(const Vector&);//복사함수는 선언만.
//   const Vector& operator=(const Vector& arg);
//public:
//   class Iterator     
//   {
//      T* ptr;   
//   public:
//      Iterator(T* p):ptr(p){}
//      bool operator!= (Iterator arg)const
//      {
//         return ptr!= arg.ptr;  
//      }
//      Iterator operator++()
//      {
//         ++ptr;
//         return *this;
//      }
//      T& operator*()
//      {
//         return *ptr;
//      }
//   };
//public:
//   Vector() :_arr(0), _size(0), _capacity(0) //vector는 처음에 생성하면 모두다 0.buf는 NULL대신에 0이라고써준거야.
//   {
//   }
//   ~Vector()
//   {
//      if (_arr)
//         delete[] _arr;
//   }
//   int size()const { return _size; }
//   void push_back(const T& data)//////////////////////////간단하게 만들어준거.
//   {
//      if (_size == _capacity)
//      {
//         if (_capacity == 0)
//            _arr = new T[_capacity = 1];//size랑 cap이 영일때 메모리 하나만들어 //1값은 cap
//         else//기존꺼에 2배해서 새로운메모리를 만든다.
//         {//임시메모리를 만들어야함. newint하면 기존꺼가 날라가서.
//            T* _tarr = new T[_capacity *= 2];
//            for (int i = 0; i < _size; ++i)
//               _tarr[i] = _arr[i];
//            delete[] _arr; //기존꺼 지워주고
//            _arr = _tarr;
//         }
//      }
//      _arr[_size++] = data;
//   }
//   const T& operator[](int idx)const //변경불가. 읽기용함수.
//   {
//      return _arr[idx];
//   }
//   T& operator[](int idx)//함수중복.읽고쓰는게 가능한 함수.
//   {
//      return _arr[idx];
//   }
//   Iterator begin()
//   {
//      return Iterator(_arr);
//   }
//   Iterator end()
//   {
//      return Iterator(_arr+_size);
//   }
//};
//int main()
//{
//   Vector<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (Vector<int>::Iterator iter= arr.begin(); iter !=arr.end(); ++iter)
//      cout << *iter << endl;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//template<typename T>
//class Vector
//{
//   T* _arr;
//   int _size;
//   int _capacity;
//   Vector(const Vector&);//복사함수는 선언만.
//   const Vector& operator=(const Vector& arg);
//public:
//   Vector() :_arr(0), _size(0), _capacity(0) //vector는 처음에 생성하면 모두다 0.buf는 NULL대신에 0이라고써준거야.
//   {
//   }
//   ~Vector()
//   {
//      if (_arr)
//         delete[] _arr;
//   }
//   int size()const { return _size; }
//   void push_back(const T& data)//////////////////////////간단하게 만들어준거.
//   {
//      if (_size == _capacity)
//      {
//         if (_capacity == 0)
//            _arr = new T[_capacity = 1];//size랑 cap이 영일때 메모리 하나만들어 //1값은 cap
//         else//기존꺼에 2배해서 새로운메모리를 만든다.
//         {//임시메모리를 만들어야함. newint하면 기존꺼가 날라가서.
//            T* _tarr = new T[_capacity *= 2];
//            for (int i = 0; i < _size; ++i)
//               _tarr[i] = _arr[i];
//            delete[] _arr; //기존꺼 지워주고
//            _arr = _tarr;
//         }
//      }
//      _arr[_size++] = data;
//   }
//   const T& operator[](int idx)const //변경불가. 읽기용함수.
//   {
//      return _arr[idx];
//   }
//   T& operator[](int idx)//함수중복.읽고쓰는게 가능한 함수.
//   {
//      return _arr[idx];
//   }
//};
//int main()
//{
//   Vector<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Vector
//{
//   T* _arr;
//   int _size;
//   int _capacity;
//   Vector(const Vector&);
//   const Vector& operator=(const Vector& arg);
//public:
//   Vector() :_arr(0),_size(0), _capacity(0)
//   {
//      //벡터는 메모리 설정안함, 0을 담게 만든다
//   }
//   ~Vector()
//   {
//      if (_arr)    //buf가 NULL이 아니면~
//      delete[] _arr; 
//   }
//   void push_back(T data)
//   {
//      if(_size<_capacity)
//         _arr[_size++] = data;
//      else     //메모리가 부족할시엔
//      {
//         if (_capacity == 0)
//         {
//            _arr = new T[_capacity=1];
//            _arr[_size++] = data;
//         }
//         else    //기존 메모리를 늘릴 수 없다, 그래서 새로운 메모리를 만들자
//            //하지만 새로운 메모리를 만들면 기존것이 삭제되므로 임시메모리를 만들자
//         {
//            T* _tarr = new T[_capacity *= 2]; //두배 더 만들어서 메모리 생성 
//            for (int i = 0; i < _size; ++i)
//               _tarr[i] = _arr[i];   //기존것을 복사시킨다.
//            delete[] _arr;
//            _arr = _tarr;
//            _arr[_size++] = data;
//         }
//      }
//   }
//   int size()const { return _size; }
//   const T& operator[](int idx) const  //const 객체 출력위해 두개만든다
//   {
//      return _arr[idx];
//   }
//   T& operator[](int idx)  //두개만들기. 밑처럼 원소의 내용을 바꾸려면 const를 제거
//   {
//      return _arr[idx];
//   }
//};
//int main()
//{
//   Vector<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Array
//{
//   T* _buf;
//   int _size;
//   Array(const Array&);
//   const Array& operator=(const Array& arg);
//public:
//   Array(int cap = 100) :_size(0)
//   {
//      _buf = new int[cap];
//   }
//   ~Array() { delete[] _buf; }
//   void push_back(T data)
//   {
//      _buf[_size++] = data;
//   }
//   int size()const { return _size; }
//   const T& operator[](int idx) const  //const 객체 출력위해 두개만든다
//   {
//      return _buf[idx];
//   }
//   T& operator[](int idx)  //두개만들기. 밑처럼 원소의 내용을 바꾸려면 const를 제거
//   {
//      return _buf[idx];
//   }
//};
//int main()
//{
//   Array<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Array
//{
//   T* _buf;
//   int _size;
//   Array(const Array& arg);
//public:
//   Array(int cap = 100) :_size(0)
//   {
//      _buf = new int[cap];
//   }
//   ~Array() { delete[] _buf; }
//   void push_back(T data)
//   {
//      _buf[_size++] = data;
//   }
//   int size()const { return _size; }
//   const T& operator[](int idx) const  //const 객체 출력위해 두개만든다
//   {
//      return _buf[idx];
//   }
//    T& operator[](int idx)  //두개만들기. 밑처럼 원소의 내용을 바꾸려면 const를 제거
//   {
//      return _buf[idx];
//   }
//};
//void PrintArray(const Array<int>& arr)   //배열이니까 복사 안되도록 참조
//{
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//}
//int main()
//{
//   Array<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   arr[1] = 200;    //값 변경, 위 코드에서 const 생략한다
//   PrintArray(arr);
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Array
//{
//   T* _buf;
//   int _size;
//   Array(const Array& arg);
//public:
//   Array(int cap = 100) :_size(0)
//   {
//      _buf = new int[cap];
//   }
//   ~Array() { delete[] _buf; }
//   void push_back(T data)
//   {
//      _buf[_size++] = data;
//   }
//   int size()const { return _size; }
//   const T& operator[](int idx) const
//   {
//      return _buf[idx];
//   }
//};
//int main()
//{
//   Array<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Array
//{
//   int* _buf;
//   int _size;
//   Array(const Array& arg);
//public:
//   Array(int cap = 100) :_size(0)
//   {
//      _buf = new int[cap];
//   }
//   ~Array() { delete[] _buf; }
//   void push_back(int data)
//   {
//      _buf[_size++] = data;
//   }
//   int size()const { return _size; }
//   int operator[](int idx) const
//   {
//      return _buf[idx];
//   }
//};
//int main()
//{
//   Array arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//   
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}