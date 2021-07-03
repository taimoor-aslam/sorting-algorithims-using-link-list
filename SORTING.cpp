#include"sorting.h"

LIST::LIST()
	{
		headnode=new NODE();
		headnode->setnext(NULL);
		current=previous=NULL;
		size=0;
	}
	void LIST::add(int val)
	{
		NODE *newnode=new NODE();
		newnode->setdata(val);
		if(current!=NULL)
		{
			newnode->setnext(current->getnext());
			current->setnext(newnode);
			previous=current;
			current=newnode;
		}
		else
		{
			newnode->setnext(NULL);
			headnode->setnext(newnode);
			previous=headnode;
			current=newnode;
		}
			size++;
	}
	void LIST::Delete()
	{
		if(current!=NULL||size!=0)
		{
			previous->setnext(current->getnext());
			delete current;
			current=previous->getnext();
			size--;
		}
	}
	void LIST::start()
	{
		previous=current=headnode;
	}
	int LIST::getvalue()
	{
		return current->getdata();
	}
	int LIST::length()
	{
		return size;
	}
	int LIST::next()
	{
		if(size!=0||current!=NULL)
		{
			previous=current;
			current=current->getnext();
			return 1;
		}
		return 0;
	}
	void LIST::BubbleSort() 
	{
	int val;
	NODE* temp=headnode;
	for(int i=0;i<=this->length()-1;i++)
	{
		for(int j=0;j<=this->length()-i-1;j++)
		{
			if(temp->getdata()>temp->getnext()->getdata())
			{
				val=temp->getdata();
				temp->setdata(temp->getnext()->getdata());
				temp->getnext()->setdata(val);
			}
			temp=temp->getnext();
		}
		temp=headnode;
	}
}
	void LIST::SelectionSort()
	{
		NODE* temp=headnode;
		NODE* temp1;
		int minimum;
		bool flag;
		for(int i=0;i<size-1;i++)
		{
			for(int k=0;k<=i;k++)
			{
			minimum=temp->getdata();
			temp1=temp;
			flag=false;
			temp=temp->getnext();
			}
			for(int j=i+1;j<size;j++)
			{
				
				if(temp->getdata()<minimum)
				{
					minimum=temp->getdata();
					flag=true;
				}
				if(j<size-1)
					temp=temp->getnext();
			}
			if(flag==true){
			temp->setdata(temp1->getdata());
			temp1->setdata(minimum);
			}
			temp=temp1->getnext();
			
		}

	}
	void LIST::InsertionSort()
	{
		NODE* temp=headnode;
		NODE* temp1;
		int minimum;
		bool flag;
		for(int i=0;i<size-1;i++)
		{
			for(int k=0;k<=i;k++)
			{
			minimum=temp->getdata();
			temp1=temp;
			flag=false;
			temp=temp->getnext();
			}
			for(int j=i+1;j<size;j++)
			{
				
				if(temp->getdata()<minimum)
				{
					minimum=temp->getdata();
					flag=true;
				}
				if(j<size-1)
					temp=temp->getnext();
			}
			if(flag==true){
			temp->setdata(temp1->getdata());
			temp1->setdata(minimum);
			}
			temp=temp1->getnext();
			
		}

	}
void LIST::reverseList()
{
	NODE* temp=headnode;
	start();
	current=current->getnext();
	for(int i=0;i<size-1;i++)
	{
		if(current==headnode->getnext())
		{
			previous=headnode->getnext();
			current=current->getnext();
			temp=current;
			previous->setnext(NULL);
		}
		else
		{
			temp=current->getnext();
			current->setnext(previous);
			previous=current;
			current=temp;
		}

}
	current->setnext(previous);
	current=headnode->getnext();
	headnode->setnext(temp);
}