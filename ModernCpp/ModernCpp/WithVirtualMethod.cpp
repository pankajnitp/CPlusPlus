#include <iostream>

class IntervalSummation {
public:
	// Algorithm or entry point which calls the derived class method.
	// This is the template method 
	double summation(int lower, int upper) const {
		double sum = 0;
		for (int i = lower; i <= upper; i++)
			sum += this->stepFn(i);
		return sum;
	}
protected:
	// Hook method or to be defined by the derived class
	virtual double stepFn(double x) const = 0;
};

class SumOfSquares : public IntervalSummation {
private:
	double stepFn(double x) const { return x * x; }
};

class SumOfCubes : public IntervalSummation {
private:
	double stepFn(double x) const { return x * x * x; }
};

void clientCode(const IntervalSummation& obj) {
	std::cout << "Summation at [0, 15] = " << obj.summation(0, 15) << std::endl;
}
