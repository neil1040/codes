#include<iostream>
using namespace std;
void output(int start)
{
	if(start==0)
	return;
	output(start-1);
		cout<<start<<endl;
}
int main()
{
int val=0;
cin>>val;
output(val);
}
