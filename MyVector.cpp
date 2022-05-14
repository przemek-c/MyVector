#include <iostream>
#include <math.h>
#include "MyVector.h"
 
const double PI = 3.14;

//int MyVector::m_numberOfPoints = 0;

MyVector::MyVector() {
    m_name = "bez nazwy";
    m_x = 0;
    m_y = 0;
    //Point::m_numberOfPoints++;
}

MyVector::MyVector(const std::string& name, double x, double y) {
    m_name = name;
    m_x = x;
    m_y = y;
    //Point::m_numberOfPoints++;
}

MyVector::~MyVector() {
}

double MyVector::length(const MyVector& v) const
{
    return sqrt(v.m_x * v.m_x + v.m_y * v.m_y);
}

double MyVector::angle(const MyVector& v) const
{
    return atan(v.m_y / v.m_x) * 180 / PI;
}

void MyVector::show() const {
    std::cout << "MyVector: " << m_name << "[" << m_x << ", " << m_y << "]" << std::endl;
}
/*
void MyVector::setName(const std::string& name) {
    m_name = name;
}

void MyVector::setXY(double x, double y) {
    m_x = x;
    m_y = y;
}

double MyVector::getX() {
    return m_x;
}

double MyVector::getY() {
    return m_y;
}

double Point::distance(const Point& p) const {
    return sqrt((p.m_x - m_x) * (p.m_x - m_x) + (p.m_y - m_y) * (p.m_y - m_y));
}

const MyVector& MyVector::distant(const MyVector& p) const {
    double d = sqrt(m_x * m_x + m_y * m_y);
    double dp = sqrt(p.m_x * p.m_x + p.m_y * p.m_y);

    if (d > dp)
        return *this;

    return p;
}

int Point::numberOfPoints() {
    return Point::m_numberOfPoints;
}
*/