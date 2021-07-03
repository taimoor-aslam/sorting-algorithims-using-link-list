#ifndef _SORTING_H
#define _SORTING_H
#include<iostream>
using namespace std;

class NODE
{
private:
	int data;
	NODE *next;
public:
	void setdata(int val)
	{
		data=val;
	}
	int getdata()const
	{
		return data;
	}
	void setnext(NODE *ptr)
	{
		next=ptr;
	}
	NODE* getnext()
	{
		return next;
	}
};

class LIST
{
private:
	NODE *headnode;
	NODE *current;
	NODE *previous;
	int size;
public:
	LIST();
	void add(int);
	void Delete();
	void start();
	int getvalue();
	int length();
	int next();
	void BubbleSort();
	void SelectionSort();
	void InsertionSort();
	void reverseList();
};
#endif