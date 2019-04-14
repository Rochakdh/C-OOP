#include<iostream>
using namespace std;
class Animal	
	{
		public:
		virtual void dispaly()
		{
			cout<<"Animal Class";
		}
		
	};
class vertebrates:public Animal
	{
		public:
		virtual void dispaly()
		{
			cout<<"veterbre";
		}
		
	};
class invertebrates:public Animal
	{
		public:
		virtual void dispaly()
		{
			cout<<"inveterbre";
		}
		
	};
void check(Animal *a1)
{
	vertebrates *v1;
	invertebrates *i1;
	v1=dynamic_cast <vertebrates*> (a1);
	if(v1)
	{
		cout<<"animal pointing to vertebrates";
		v1->dispaly();
	}
	else if(i1=dynamic_cast <invertebrates*> (a1))
	{
		cout<<"pointg to invertebrates";
		i1->dispaly();
	}
	else{
		cout<<"pointer is in animal class";
	}
}
int main()
{
	check(new invertebrates());
	check(new vertebrates());
	return 0;
}
