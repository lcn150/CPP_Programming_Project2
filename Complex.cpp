#include "Complex.h"
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
/*과제2_1594029_이충헌
--함수정의부--
기존의 Complex에 연산자 오버로딩을 합침
+연산자, -연산자,[]연산자는 멤버함수
==연산자, !=연산자, 단항연산자,<<연산자는 일반함수
각각 멤버,일반함수에 알맞게 매개변수 지정해서 정의
*/
Complex::Complex() {
    real = 0;
	image = 0;
}
Complex::Complex(int real, int image) {
	this->real = real;
	this->image = image;   
}
int Complex::getImage() const {
		return image;
}
int Complex::getReal() const {
		return real;
}
Complex Complex::operator+(const Complex& r2) const
{//매개변수를 1개만 선언하는 이유는 1개는 자기 자신이라서 선언할 필요없이 사용하면 된다.
	int n = real + r2.getReal();  //실수부는 실수부끼리 계산
	int d = image + r2.getImage();  //허수부는 허수부끼리 계산
	return Complex(n, d); //생성자에서 처리하도록 반환
}
Complex Complex::operator-(const Complex& r2) const
{//위와 같음
	int n = real - r2.getReal();
	int d = image - r2.getImage();
	return Complex(n, d);
}
bool operator==(const Complex& r1, const Complex& r2) {
	Complex temp = r1-r2;  //operator-정의 했으므로 객체에 –연산자 사용가능
	if (temp.getImage() == 0 && temp.getReal()==0)  //실수부와 허수부값이 0이라면 두 객체는 같은 객체로 간주
		return true;
	else return false;
}
bool operator!=(const Complex& r1, const Complex& r2) {
	Complex temp = r1 - r2;  //operator-정의 했으므로 객체에 –연산자 사용가능
	if (temp.getImage() != 0 ||temp.getReal() != 0)  //위와 같은 방법으로 temp이용해서 두객체 비교
		return true;
	else return false;
}
Complex operator-(const Complex& r)
{//일반함수로 선언하였기 때문에 함수에 사용할 매개변수가 있어야 한다.
	return Complex(-r.getReal(), -r.getImage()); //getReal()과 getImage()사용해야한다. friend사용하였다면 image와 real사용가능
}
ostream& operator<<(ostream& out, const Complex& r) // << 연산자 오버로딩 
{
	if (r.getImage() > 0) //허수부가 0보다 크다면 중간에 +연산자 사용
		out << "( "<< r.getReal()<<" + "<<r.getImage()<<"i )";
	else //허수부가 0보다 작다면 중간에 아무것도 넣지 않음
		out << "( " << r.getReal() <<" "<< r.getImage() << "i )";
	return out;
}

int& Complex::operator[](int index) {  //원본을 넘겨주기 위해&사용 변경자로도 사용할 수 있다.
	if (index == 0)
		return real;
	else
		return image;
}