#pragma once
#include <string>
#include <iostream>
#include <cmath>

class Vec2D
{
public:
	Vec2D();
	Vec2D(double x, double y);
	~Vec2D();
private:
	double x_;
	double y_; 
public:
	// ������ת��Ϊ�ַ�����ʽ��ʾ
	std::string toString();
	// �����ӷ�
	Vec2D add(Vec2D secondVec2D);
	Vec2D add(double numeral);
	// �����Ƚ�
	int compareTo(Vec2D secondVec2D);
	// ��ȡ�����޸�����Ԫ��
	double& at(const int index);
	// ��������
	double direction();
	// �������
	int dot(Vec2D secondVec2D);
	// ������ֵ
	Vec2D negative();
	// ��������1
	Vec2D& increase();
	// �����Լ�1
	Vec2D& decrease();
	double magnitude();
	Vec2D multiply(double multiplier);
	Vec2D substract(Vec2D secondVec2D);
};

