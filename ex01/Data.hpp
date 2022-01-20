#ifndef DATA_H
# define DATA_H

struct Data
{
	int	value;

	Data();
	Data(const Data& other);
	~Data();

	Data&	operator =(const Data& other);
};

#endif
