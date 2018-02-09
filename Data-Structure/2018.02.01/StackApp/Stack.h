#pragma once 
struct Stack
{
	int stack[10];
	int top; 
};
void Push(Stack& st, int data);
int Pop(Stack& st);
void InitStack(Stack& st);
void UninitStack(Stack& st);