#include<iostream>
using namespace std;
class factorial
{
	public:
		int fact(const int &no)
		{
			if(no==1)
			return(1);
			else
			return(no*fact(no-1));
		}
	factorial(int n)
	{	
		cout<<"The factorial of "<< n <<" is ";
	
	}
};
int main()
{
	int no;
	cout<<"\n Enter the number to find its factorial"<<endl;
	cin>>no;
	factorial obj(no);
	int result=obj.fact(no);
	cout<<result<<endl;
	return(0);
}

