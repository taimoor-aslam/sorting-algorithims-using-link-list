#include"sorting.h"


void display(LIST);
int main()
{
	char choice;
	int val;
	LIST l;
	do
	{
		cout<<"\t__________________________"<<endl;
		cout<<"\t|       ***MENUE***       |"<<endl;
		cout<<"\t| I/i :: insert           |"<<endl;
		cout<<"\t| D/d :: delete		  |"<<endl;
		cout<<"\t| B/b :: Bubble sort      |"<<endl;
		cout<<"\t| S/s :: Selection sort   |"<<endl;
		cout<<"\t| T/t :: Insertion sort   |"<<endl;
		cout<<"\t| R/r :: Reverse LIST     |"<<endl;
		cout<<"\t| P/p :: print LIST       |"<<endl;
		cout<<"\t| E/e ::  exit(0)         |"<<endl;
		cout<<"\t -------------------------"<<endl;
		cout<<"choice= ";
		cin>>choice;
		switch(choice)
		{
		case 'I':case 'i':
			cout<<"Enter value which you want to insert: ";
			cin>>val;
			l.add(val);
			break;
		case 'D':case'd':
			l.Delete();
			break;
		case 'S':case 's':
			 l.BubbleSort();
			break;
			case 'T':case 't':
			 l.BubbleSort();
			break;
			case 'B':case 'b':
			 l.BubbleSort();
			break;
			case 'R':case 'r':
			 l.reverseList();
			break;
		case'P':case'p':
		     display(l);
			break;
		case'E':case'e':
			break;
		default:
			cout<<"Sorry! Inavlid choice."<<endl;
			cout<<"Chose the appropriate choice."<<endl;
		}
	}
	while(choice!='E'&&choice!='e');
	system("pause");
	
}

void display(LIST list)
{
	list.start();
	for(int i=0;i<list.length();i++)
	{
		list.next();
		cout<<list.getvalue()<<endl;
	}
}
