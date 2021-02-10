#include "Vec2D.h"


Vec2D::Vec2D() {
	x_ = 0.0;
	y_ = 0.0;
}

Vec2D::Vec2D(double x, double y) {
	x_ = x;
	y_ = y;
}

Vec2D::~Vec2D() {

}

// ������ת��Ϊ�ַ�����ʽ��ʾ
std::string Vec2D::toString()
{
	return std::string("("+std::to_string(x_) + ", "+std::to_string(y_) + ")" );
}

// �����ӷ�
Vec2D Vec2D::add(Vec2D secondVec2D)
{
	return Vec2D(x_ + secondVec2D.x_ , y_ + secondVec2D.y_);
}

Vec2D Vec2D::add(double numeral) {
	return Vec2D(this->x_ + numeral, this->y_ + numeral);
}

// ��������
Vec2D Vec2D::substract(Vec2D secondVec2D)
{
	return Vec2D(x_ - secondVec2D.x_, y_ - secondVec2D.y_);
}

// �Ƚ����������ĳ��ȡ����firstVec2DС��secondVec2D������-1���������򷵻�1��������򷵻�0
int Vec2D::compareTo(Vec2D secondVec2D)
{
	double m1 = this->magnitude();
	double m2 = secondVec2D.magnitude();
	if (abs(m1 - m2) < 1e-10) {
		return 0;
	}
	else {
		return (m1 > m2 ? 1 : -1);
	}
	return 0;
}

// ��ȡ�����޸�����Ԫ��
double& Vec2D::at(const int index)
{
	if (0 == index) {
		return x_;
	}
	else if (1 == index) {
		return y_;
	}
	else {
		throw std::out_of_range("at() only acept 1 or 2 as parameter");
	}
}

// ��������1
Vec2D& Vec2D::increase()
{
	x_++; y_++;
	return *this;
}

// �����Լ�1
Vec2D& Vec2D::decrease()
{
	x_--; y_--;
	return *this;
}


// ��������
double Vec2D::direction()
{
	return 0.0;
}


// �������
int Vec2D::dot(Vec2D secondVec2D)
{
	return (x_ * secondVec2D.x_+y_ * secondVec2D.y_);
}

double Vec2D::magnitude()
{
	return 0.0;
}

// ��������
Vec2D Vec2D::multiply(double multiplier)
{
	return Vec2D(x_ * multiplier , y_ * multiplier);
}

// ������ֵ
Vec2D Vec2D::negative()
{
	return Vec2D(x_ * -1, y_ * -1);
}


