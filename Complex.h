#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
/*과제2_1594029_이충헌 
--선언부--
기존의 Complex()에 +연산자, -연산자를 멤버함수로 선언하고
==연산자, !=연산자,<<연산자, 단항연산자를 일반 함수로 선언하였습니다.
*/
class Complex { //Complex클래스
public:
	Complex();  //생성자
	Complex(int, int);   //생성자
	int getImage() const;  //image를 반환하는 함수
	int getReal() const;   //real을 반환하는 함수
	Complex operator+(const Complex& r2) const;  //+연산자 오버로딩
	Complex operator-(const Complex& r2) const;  //-연산자 오버로딩
	int& operator[](int index);  //[]연산자 값을 가져와서 변경할 수 있도록 &사용
private:
	int real;    //실수 private선언
	int image;  //허수 private 선언
};
bool operator==(const Complex& r1, const Complex& r2);
//==연산자 오버로딩, 매개변수의 값이 변경되지 않게 const사용
//반환값이 true/false기 때문에 bool로 선언
bool operator!=(const Complex& r1, const Complex& r2);
//=!연산자 오버로딩, 매개변수의 값이 변경되지 않게 const사용
ostream& operator<<(ostream& out, const Complex& r);
//일반함수로만 만들수 있고 ostream은 c++에서 제공하는 클래스
Complex operator-(const Complex& r);  
//단항연산자–를 일반함수로 구현, 매개변수는 변경되지 않게 const로 선언
#endif