#include "../incl/Data.hpp"

Data::Data(int data): _data(data)
{

}

Data::~Data() {}

Data::Data(const Data &obj)
{
	(void)obj;
}

const Data &Data::operator=(const Data &obj)
{
	(void)obj;
	return (*this);
}

int Data::getData() const
{
	return _data;
}
