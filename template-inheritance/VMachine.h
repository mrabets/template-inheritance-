#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class VMachine
{
public:
	VMachine();
	VMachine(string model);
	VMachine(const VMachine& object);
	~VMachine();

	string getModel() const;
	void setModel(string model);

	friend istream& operator >> (istream& in, VMachine& obj);
	friend ostream& operator << (ostream& os, VMachine& obj);

private:
	string model;
};