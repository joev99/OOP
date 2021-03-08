#include <iostream>

using namespace std;
int key;
  int cars;
  int adds;
  int totalcars;
  int totaladds;

class tollbooth {
  private:
    int adds;
  
  public:
    tollbooth();
    void Payingcar();
    void Nopayingcar();
    void display();
};


tollbooth::tollbooth() {
  adds = adds;
}

void tollbooth::Nopayingcar() {
  adds = adds;
  totalcars=cars+1;
}

void tollbooth::Payingcar() {
  totalcars=cars+1;
  totaladds=adds+0.50;
}

void tollbooth::display(){
	cout << "Total cars =" << totalcars;
	cout << "Total Adds =" << totaladds;
}


int main()
{
    tollbooth test;
  
  	cout << "1. Paying Car" << endl;
    cout << "2. No paying car" << endl;
    cout << "3. Count" << endl;
    cout << "Enter your choice: "; cin >> key;
  switch(key)
  {
  	case 1: 
	  test.Payingcar();
	case 2:
	  test.Nopayingcar();
	case 3:
	  test.display();
	    
  }
  return 0;
}
