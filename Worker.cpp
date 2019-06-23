#include "Worker.h"
#include<iomanip>

Worker::Worker()
{
	name = " ";
	compid = 0;
	dept = " ";
	ssnum = 0;
}


Worker::Worker(string name, int compid, string dept, int ssnum)
{
  this->name = name;
  this->compid = compid;
  this->dept = dept;
  this->ssnum =ssnum;
}

double Worker::compute_pay() const
{
  return 0.0;
}

string Worker::getName() const
{
  return name;
}

int Worker::getCompID() const
{
  return compid;    
}    

string Worker::getDepartment() const
{
  return dept;
}       

int Worker::getSocialSecurityNumber() const
{
  return ssnum;
} 
 
/*void Worker::print() const
{
	cout << "Name:	" << name << '\t' << "Weekly Pay: $	" 
	<< compute_pay() << endl << endl;
}
*/
ostream& operator<< (ostream& out,const Worker& w)
{
	out << "Name: " << w.getName() << '\t' << "Weekly Pay: $ "
	<< w.compute_pay() << endl << endl; 	
}


