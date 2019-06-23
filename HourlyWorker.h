#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include<iostream>
using namespace std;

class HourlyWorker: public Worker
{
	public:
		HourlyWorker();
		HourlyWorker(string, double, double);
		/**
   		calculates the weekly pay = payRate * hours
   		*/
		virtual double compute_pay() const;
		double get_payRate() const;
	    double get_hours() const;
		
		
	
	private:
	double payRate;
	double hours;
	double salary;




	
};


#endif
