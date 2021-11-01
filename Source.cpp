#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ofstream myfile("example.txt");
	if (myfile.is_open())
	{
		myfile << "this is aline. \n";
		myfile << "this is another";
		myfile.close();
	}
	else
		cout<< "unable to open myfile";
}