#include <iostream> 
using namespace std;

int cnt = 0; // �̵� Ƚ���� �̿�.

void Hanoi(int n, char from, char temp, char to)
// n : ���ݰ���, from : ���� ��ġ, temp : �ӽ� ���, to :������
{
	if (n == 1)//������ �ϳ��� ��
		cout << ++cnt << "��°: ��ũ 1���� " << from << " ���� " << to << "�������� �ű��." << endl;
	else {//������ �ϳ� �̻��� ��
		Hanoi(n - 1, from, to, temp);
		cout << ++cnt << "��°: ��ũ 1���� " << from << " ���� " << to << "�������� �ű��." << endl;
		Hanoi(n - 1, temp, from, to);
	}

}


void main()
{
	int n; //������ ��

	cout << "������ ������ �Է��ϼ��� : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n���� ������ 'A'���� 'C'�� �̵�

	cout << "��ü ���� �̵� ��(���ݼ� : " << n << ") = " << cnt << endl;
}