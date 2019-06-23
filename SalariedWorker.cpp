#include "Worker.h"
#include "SalariedWorker.h"

SalariedWorker::SalariedWorker()
{
	name = " ";
	salary_per_yr = 0.0;
}	
SalariedWorker::SalariedWorker(string n, double s)
{
	name = n;
	salary_per_yr = s;
}
double SalariedWorker::compute_pay() const
{
	return salary_per_yr / 52;	
}
double SalariedWorker::get_salary_per_yr() const
{
	return salary_per_yr;
}



