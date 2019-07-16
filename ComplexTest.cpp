#include"Complex.h"
using namespace std;
/*과제2_1594029_이충헌 
--개요--
과제1에서 설계한 복소수클래스에 연산자들을 오버로딩 한다.
main() 함수에서 테스트코드를 실행했을 때 
<결과창>에 명시된 결과가 출력돼야 한다.
(정수+ 복소수)의 형태로 출력
*/
//main()부
void main()
{
	//test code
	Complex x(10, 20), y(-20, 40), z;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "x + y = " << x + y << endl;
	cout << "x - y = " << x - y << endl;
	cout << "-x = " << - x << endl << endl;

	cout << "x = " << x << endl;
	cout << "x[0] = " << x[0] << endl;
	cout << "x[1] = " << x[1] << endl;
	y[0] = -5;
	y[1] = 12;
	cout << "y = " << y << endl << endl;

	cout << "x == y is " << ((x == y) ? "true" : "false") << endl;
	cout << "x != y is " << ((x != y) ? "true" : "false") << endl << endl;
	system("pause");
	return;
}