#include<iostream>

using namespace std;

class Grading{
	public:
		int assignment[100];
		int quiz[100];
		int attendance[100];
		int midexam[100];
		int finalexam[100];
		int total[100]; //total nilai grade mahasiswa
		int student;



void input(){
	cout << "Enter Number of Student:";
	cin >> student;
	for (int i=1; i<=student; i++)
	{
	cout << "Enter Grade For Student " << i<<"\n";	
	cout << "Assignment :"; cin >> assignment[i];
	cout << "Quiz :"; cin >> quiz[i];
	cout << "Attendance :"; cin >> attendance[i];
	cout << "Mid Exam :"; cin >> midexam[i];
	cout << "Final Exam :"; cin >> finalexam[i];
	}
}

void display(){
	
	cout <<"-----------------\n";
	cout <<"STUDENT GRADE\n";
	cout <<"-----------------\n";
	cout <<"Student\t\t Grade\n";
	cout <<"-----------------\n";
	
	for(int i=1; i<=student; i++){
		int total=(attendance[i]*10/100)+(quiz[i]*10/100)+(assignment[i]*20/100)+(midexam[i]*30/100)+(finalexam[i]*30/100);
	
	if (total <=100 && total >=91){
		cout << i <<"\t"<<total << "\t(A)\n";
	}
	else if (total <=90 && total >=85){
		cout << i <<"\t"<<total << "\t(A-)\n";
	}
	else if (total <=84 && total >=82){
		cout << i <<"\t"<<total << "\t(B+)\n";
	}
	else if (total <=81 && total >=78){
		cout << i <<"\t"<<total << "\t(B)\n";
	}
	else if (total <=77 && total>=75){
		cout << i <<"\t"<<total << "\t(B-)\n";
	}
	else if (total <=74 && total >=70){
		cout << i <<"\t"<<total << "\t(C+)\n";
	}
	else if (total <=69 && total >=67){
		cout << i <<"\t"<<total << "\t(C)\n";
	}
	else if (total <=66 && total >=60){
		cout << i <<"\t"<<total << "\t(C-)\n";
	}
	else if (total <=59 && total >=40){
		cout << i <<"\t"<<total << "\t(D)\n";
	}
	else if (total <=39 && total >=0){
		cout << i <<"\t"<<total << "\t(F)\n";
	}
}
	cout <<"--------------------\n";
	cout <<"THANK YOU!";
}
};
int main(){
	
	
	Grading a;
	a.input();
	a.display();
	
}
