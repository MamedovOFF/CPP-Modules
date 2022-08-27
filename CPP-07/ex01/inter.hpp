#ifndef INTER_HPP
#define INTER_HPP

template <typename T1, typename T2, typename T3>
void inter(T1 *arr, T2 len, T3 f)
{
	int i = 0;

	while(i < len) 
	{
		f(arr[i]);
		i++;
	}	
}

#endif 