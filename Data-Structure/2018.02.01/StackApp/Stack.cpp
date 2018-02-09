#include "Stack.h"
void Push(Stack& st, int data) 
{
	st.stack[st.top++] = data; 
}
int Pop(Stack& st) 
{
	return st.stack[--st.top];
}
void InitStack(Stack& st)
{
	st.top = 0;
}
void UninitStack(Stack& st)
{
	st.top = 0;
}