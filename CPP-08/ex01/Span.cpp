#include "Span.hpp"

Span::Span(void):N(0){}

Span::Span(int N):N(N){}

Span::Span(const Span &Ref_point) {
	*this = Ref_point;
}

Span &Span::operator=(const Span &Ref_point) {
	this->N = Ref_point.N;
	this->iter = Ref_point.iter;
	return (*this);
}

Span::~Span(){}

void Span::addNumber(int X) 
{
	if (iter.size() < N)
		iter.push_back(X);
	else throw Span::Error();
}


int Span::shortestSpan()
{
	if (iter.size() < 2)
		throw Span::Error();
	int res = N;
	std::sort(iter.begin(), iter.end());
	for (int i = 0; i < iter.size() - 1; ++i) {
		int dis = std::abs(iter[i] - iter[i + 1]);
		if (dis < res)
			res = dis;
	}
	return res;
}

int Span::longestSpan()
{
	if (iter.size() < 2)
		throw Span::Error();
	int min = *std::min_element(iter.begin(), iter.end());
    int max = *std::max_element(iter.begin(), iter.end());

    return max - min;
}

void Span::fillIterator()
{
	srand(time(NULL));
	for(int i = 0; i < N; i++)
	{
		iter.push_back(rand());
	}
}

const char * Span::Full::what () const throw () {
	return "Swap Full\n";
}

const char * Span::Error::what () const throw () {
	return "Min Span length 2\n";
}