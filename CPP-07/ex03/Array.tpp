template <typename T> 
Array<T>::Array( void ):length(0), arr(nullptr)
{};

template <typename T> 
Array<T>::Array(unsigned int n): length(n)
{
	this->arr = new T[n]();
};

template <typename T>
Array<T>::Array( const Array & ref_Point):length(ref_Point.length)
{
	this->arr = new T[ref_Point.size()];
	for (int i = 0; i < ref_Point.size(); i++)
		this->arr[i] = ref_Point.arr[i];
}

template <typename T> 
Array<T>::~Array( void )
{
	delete this->arr;
};


template <typename T>
Array<T> &Array<T>::operator=(Array<T> const & ref_Point)
{
	if (this != &ref_Point) {
		delete this->arr;
		this->arr = new T[ref_Point.size()];
		for (int i = 0; i < ref_Point.size(); i++)
			this->arr[i] = ref_Point.arr[i];
		this->length = ref_Point.size();
	}

	return *this;
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "ArrayException: index out of bounds";
}

template<typename T>
T &Array<T>::operator[](size_t index)
{
	if (index > this->length)
		throw Array::OutOfBoundsException();
	return (this->arr[index]);
}

template <typename T> 
int Array<T>::size() const
{
	return this->length;
};
