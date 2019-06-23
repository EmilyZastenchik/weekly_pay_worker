#include "Worker.h"
#include "HourlyWorker.h"

HourlyWorker::HourlyWorker()
{
	name = " ";
	payRate = 0.0;
	hours = 0.0;
		
}
HourlyWorker::HourlyWorker(string n, double pr, double h)
{
	name = n;
	payRate = pr;
	hours = h;	
}
double HourlyWorker::compute_pay() const
{
	return payRate * hours;	
}		
double HourlyWorker::get_payRate() const
{
	return payRate;
}
double HourlyWorker::get_hours() const
{
	return hours;
}

