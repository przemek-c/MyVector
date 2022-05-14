#pragma once
#include <string>

class MyVector
{
private:
	std::string m_name;
	double m_x;
	double m_y;
public:
	MyVector();
	MyVector(const std::string& name, double x = 0, double y = 0);
	double length(const MyVector& v) const;
	double angle(const MyVector& v) const;
	~MyVector();
	//void setName(const std::string& name);
	//void setXY(double x, double y);
	//double getX();
	//double getY();
	void show() const;
	//double distance(const MyVector& p) const;
	//const MyVector& distant(const MyVector& p) const;
};