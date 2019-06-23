# weely_pay_worker
Assignment 2 Intro programming 2

Assignment 3
Emily Zastenchik

SDM:

Problem - 

Create derived classes that inherit from the Worker class 
that calcultes the weekly pay using polymorphism


Analysis 

    FUNCTIONS :

    virtual double compute_pay() const 
      calculates the weekly pay of each worker type using polymorphism
      
    ostream& operator<< (ostream& out,const Worker&) - overloads the 
       extraction operator to display the worker name and the salary values

Design -

    Create a worker for the base class Worker and each dervied class
    (HourlyWorker, SalariedWorker, and Manager)
    Create a vector of pointers to the different types of workers
    Assign the address of each worker to each element of the vector
    Display worker name and weekly pay using the overloaded extraction operator (<<)
