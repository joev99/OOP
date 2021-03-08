#include<iostream>

using namespace std;

class employee{
	public:
		int employeeNumber;
		float employeeCompensation;
};

employee emp[3];

void enterdata(int i)
{
	cout << "Input Employee Number :";cin >> emp[i].employeeNumber;
	cout << "Input Employee Compensation:";cin >> emp[i].employeeCompensation; 
}

void displaydata(int j)
{
	cout << "\n\nEmployee Number:" << emp[j].employeeNumber;
	cout << "\nEmployee Compensation :" << emp[j].employeeCompensation; 
}

int main()
{
	for(int i=1; i<=3; i++){
			enterdata(i);
		}
		for(int j=1; j<=3; j++){
			displaydata(j);
		}
}

