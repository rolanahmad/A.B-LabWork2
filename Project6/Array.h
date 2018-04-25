#pragma once

class Array {
private:
	int cur_size;
	int buf_size;
	double *els;
public:
	
	//construct
	Array();
	Array(int size);
	Array(const Array&obj);

	
	
	//methods
	int size() const { return cur_size; }
	double & push_back(double e); 
	double & at(int index);

	//operators
	Array operator=(const Array& obj);
	double& operator[](int index);

	bool operator==(const Array& obj);
	//destruct

	~Array() { delete[] els; }
};