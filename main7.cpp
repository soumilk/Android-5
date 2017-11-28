/*this is the concept of the inheritance and in this concept , this is to remember that 
the constructors and destructors ,static members and friend functions are never inherited in the 
derived class 
 there are different types of inheritance , like  public, private and protected 
 the syntax of inheritance is 
 class base 
 {
 
};
class derived : public/private / protected base 
{
	};
	int main()
	{
	}*/
	
	#include <iostream>
	using namespace std;
	// public inheritance 
	class base 
	{
		int a ;
		public :
			base ()
			{
				cout <<" aur bhailog kese ho " <<endl;
			}
			void input ();
			void display()
			{
				cout <<" value of a is = "<<a <<endl;
			}
	};
			void base :: input()
			{
				cout <<" enter the value of a "<<endl;
				cin>>a;
			}
	class derived : private base  // when the access specifier in the derived class is changed to the 
  	{							/* private , then we can only access the functions of the base class through 
  								the member functions of the drerived class only */
		int b ;
		public:
			void getdata();
			{
				cout <<" enter the value of a & b"<<endl;
				input ();
				cout <<" enter the value of b"<<endl;
				cin>>b ;
			}
			void print ()
			{	display();
				cout <<"  value of b is = "<< b;
			}
	};
	void derived :: getdata()
			{
				cout <<" enter the value of a & b"<<endl;
				input ();
				cout <<" enter the value of b"<<endl;
				cin>>b ;
			}
	int main()
	{
		derived obj1;
		obj1.getdata();
		obj1.print();
		return 0;
	}
	

