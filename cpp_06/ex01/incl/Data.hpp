#pragma once

class Data
{
	private:
		int _data;
	public:
		Data(int data);
		virtual ~Data();
		Data(const Data &obj);
		const Data &operator=(const Data &obj);

		int getData() const;
};