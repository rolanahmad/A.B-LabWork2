#include "Array.h"

Array :: Array() {
	cur_size = 0;
	buf_size = 0;
	els = nullptr;
}

Array :: Array(int size) {
	cur_size = size;
	buf_size = size;
	els = new double[size];
	for (int i = 0; i < size; i++)
	{
		els[i] = 0.0;
	}
}

Array :: Array(const Array & obj) {
	this->cur_size = obj.size();
	this->buf_size = obj.size();
	this->els = new double[this->size()];

	for (int i = 0; i < this->size(); i++)
	{
		this->els[i] = obj.els[i];
	}
}

Array Array :: operator=(const Array& obj) {
	this->cur_size = obj.size();
	this->buf_size = obj.size();

	this->els = new double[this->size()];

	for (int i = 0; i < this->size(); i++)
	{
		this->els[i] = obj.els[i];
	}

	return *this;
}

double& Array :: operator[](int index) {
	if (index > cur_size || index < 0) {
		return els[0];
	}
	else
		return els[index];
}

double & Array :: push_back(double e) {
	if (buf_size <= 0) {
		buf_size = 2;
		els = new double[buf_size];
	}
	else {
		if (cur_size >= buf_size) {
			buf_size += 10;
			double *tmp = new double[buf_size];
			for (int i = 0; i < size(); i++) {
				tmp[i] = els[i];
			}
			delete[] els;
			els = tmp;
		}
	}

	els[cur_size++] = e;
	return els[cur_size - 1];
}

double & Array :: at(int index) {
	if (index > cur_size || index < 0) {
		return els[0];
	}
	else
		return els[index];

}

bool Array::operator==(const Array& obj) {
	if (this->size() == obj.size()) {
		for (int i = 0; i < size(); i++) {
			if (this->els[i] != obj.els[i]) {
				return false;
			}
		}
		return true;
	}
	else {
		return false;
	}
}

