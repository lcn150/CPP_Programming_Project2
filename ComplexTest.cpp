#include"Complex.h"
using namespace std;
/*����2_1594029_������ 
--����--
����1���� ������ ���Ҽ�Ŭ������ �����ڵ��� �����ε� �Ѵ�.
main() �Լ����� �׽�Ʈ�ڵ带 �������� �� 
<���â>�� ��õ� ����� ��µž� �Ѵ�.
(����+ ���Ҽ�)�� ���·� ���
*/
//main()��
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