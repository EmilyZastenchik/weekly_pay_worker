#include "Worker.h"
#include "SalariedWorker.h"
#include "Manager.h"


Manager::Manager()
{
	bonus = 0.0;
}
Manager::Manager(string n, double s, double b)
{
	name = n;
	salary_per_yr = s;
	bonus = b;
}

double Manager::compute_pay() const
{
	return (salary_per_yr + bonus) / 52;
}
double Manager::get_bonus() const
{
	return bonus;
}



