#include <iostream>
using namespace std;
int main()
{
	int i;
	cout << "������һ��������������Ŀ�Ŀո�";
	int sum = 0;
	//һֱ�������ֵ��������ʱ�����whileѭ��,�������ַ�ʱ��scanf����0��ʲô��������Ȼ���ٴε���scanf
	while (cin >> i)
	{
		sum += i;
		while (cin.peek() == ' ')//���οո�,peek()���������������ж�ȡһ���ַ� �����ַ���δ����������ɾ��
		{
			cin.get();//��ָ��������������ȡһ���ַ��������հ��ַ�����
		}
		if (cin.peek() == '\n')
		{
			break;
		}
	}
	cout << "����ǣ�" << sum << endl;
	system("pause");
	return 0;
}

