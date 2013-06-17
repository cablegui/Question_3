
#include <iostream>
#include <memory>

using namespace std;

int main()
{

	shared_ptr<int> int_memory_manager(new int);

	shared_ptr<int> int_memory_manager2;

	cout<<"Contents of first is "<<int_memory_manager.get()<<endl;

	int_memory_manager2 = int_memory_manager;

	cout<<"Contents of first is "<<int_memory_manager.get()<<endl;

	cout<<"Contents of second is "<<int_memory_manager2.get()<<endl;

	return 0;
}
