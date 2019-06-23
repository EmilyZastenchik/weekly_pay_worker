#include "Worker.h"
#include "HourlyWorker.h"
#include "SalariedWorker.h"
#include "Manager.h"
#include <iostream>
#include <vector>

using namespace std;

/*
Assignment 3
Emily Zastenchik

SDM:
Problem - Create derived classes that inherit from the Worker class 
that calcultes the weekly pay using polymorphism


Analysis -

FUNCTIONS :
virtual double compute_pay() const - calculates the weekly pay of each worker type using polymorphism
ostream& operator<< (ostream& out,const Worker&) - overloads the 
extraction operator to display the worker name and the salary values

Design -
Create a worker for the base class Worker and each dervied class(HourlyWorker, SalariedWorker, and Manager)
Create a vector of pointers to the different types of workers
Assign the address of each worker to each element of the vector
Display worker name and weekly pay using the overloaded extraction operator (<<)


*/
int main()
{
  Worker         w("Walter", 70113, "sales", 123456789);
  HourlyWorker	 h("Helen", 11.50, 10);
  SalariedWorker s("Sam", 100000);
  Manager	     m("Michelle", 500000, 200);
 cout << w.getName() << " made " << w.compute_pay() << endl;
  cout << endl;
	
vector<Worker*>	team(4);
team[0] = &w;
team[1] = &h;
team[2] = &s;
team[3] = &m;	
	
for(int i = 0; i < team.size(); ++i)
//team[i]->print();
cout << *team[i];
	
	
  system("pause");
  return 0;    
    
    
}    
