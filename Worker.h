#ifndef WORKER_H
#define WORKER_H

#include<string>
#include<cstdio>
#include<iostream>
using namespace std;

class Worker
{
 public:
 	/**
 	default constructor
 	*/
   Worker();
   Worker(string, int, string, int);
   /**
   calculates the weekly pay 
   */
   virtual double compute_pay() const;
   string getName() const;
   int getCompID() const;
   string getDepartment() const;
   int getSocialSecurityNumber() const;
   //void print() const;
 protected:		//derived class memeber functions can access these datat types
   string name;
   int compid;
   string dept;
   int ssnum;
 
  
};
ostream& operator<< (ostream& out,const Worker&);
       
#endif
