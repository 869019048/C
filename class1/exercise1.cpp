#include <iostream>
using namespace std;
int main()
{
	int i;
	cout << "请输入一串整数和任意数目的空格：";
	int sum = 0;
	//一直到输入的值是整数的时候进入while循环,当输入字符时，scanf返回0，什么都不读，然后再次调用scanf
	while (cin >> i)
	{
		sum += i;
		while (cin.peek() == ' ')//屏蔽空格,peek()函数：从输入流中读取一个字符 但该字符并未从输入流中删除
		{
			cin.get();//从指定的输入流中提取一个字符（包括空白字符），
		}
		if (cin.peek() == '\n')
		{
			break;
		}
	}
	cout << "结果是：" << sum << endl;
	system("pause");
	return 0;
}

