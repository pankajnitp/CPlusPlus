#include <memory>
#include "CashFlow.h"
#include <vector> 

struct CashFlow::Impl { 
	std::vector<double> m_clf;
	Impl() = default;
	~Impl() = default;
};

CashFlow::CashFlow() : m_pimpl(new Impl()) {}

void CashFlow::add(double x) {
	m_pimpl->m_clf.push_back(x);
}

double CashFlow::get(int i) {
	return m_pimpl->m_clf[i];
}

