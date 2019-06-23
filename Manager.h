#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>
using namespace std;

class Manager: public SalariedWorker	
//since SalariedWorker is a derived class of Worker, Manager is also inherits from Worker
{
	public:
	Manager();
	Manager(string, double, double);
	/**
   calculates the weekly pay = (salary_per_yr + bonus)/52
   */
	virtual double compute_pay() const;
	double get_bonus() const;
		
		
	private:
	 double bonus;
	 	
		
};



#endif
