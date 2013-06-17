#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
	A();
	~A();
	int *i;

	void setValue(int i);

};

A::A()
{
	i = new int(0);
}

A::~A()
{
}

void A::setValue(int v)
{
	*i = v;
}

class B: public A{};

	void setValue(shared_ptr<B> b, int v)
	{
		b->setValue(v);
		cout << *(b->i) << endl;
	}

	void print(shared_ptr<B> b)
	{
		cout << *(b.get()->i) << endl;
	}


int main()
{
	A a;
	a.setValue(10);
	cout << a.i << endl;

	A* a2 = new A();

	a2->setValue(20);

	cout << *(a2->i) << endl;

	shared_ptr<A> a3(new A);

	a3->setValue(35);

	cout << *(a3->i) << endl;
	
	shared_ptr<B> b(new B);

	cout << *(b->i) << endl;

	b->setValue(30);
	
	cout << *(b->i) << endl;
		
	setValue(b,40);

	print(b);

	
	delete a2;
	
	return 0;
}
