#pragma once
#ifndef _CashFlow_H_
#define _CashFlow_H_

#include <memory>

class CashFlow {
private:
	// Forward declaration of incomplete type (Implementation).
	struct Impl;
	// This opaque type encapsulate the outer class' private member 
	// Pointer to implementation (PIMPL)
	std::unique_ptr<Impl> m_pimpl;
	~CashFlow() = default;
public: 
	CashFlow();
	void show();
	void add(double x);
	int  size();
	double npv(double rate);
	double irr();
	double get(int i);
};

#endif // --- EOF ---- // 