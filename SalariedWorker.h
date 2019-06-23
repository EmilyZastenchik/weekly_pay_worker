#ifndef SALARIEDWORKER_H
#define SALARIEDWORKER_H

#include<iostream>
using namespace std;

class SalariedWorker: public Worker
{
	public:
	SalariedWorker();	
	SalariedWorker(string, double);
	/**
   calculates the weekly pay = salary_per_yr/52
   */
	virtual double compute_pay() const;
	double get_salary_per_yr() const;
		
		
	protected:
	double salary_per_yr;
		
		
};



#endif
