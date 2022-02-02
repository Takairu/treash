#include<iostream>
using namespace std;
enum Core{single,dual,quad};
enum words{Bit32,Bit64};
enum HyperThread{Support,Unsupport};
class CPU {
	unsigned frequence : 32;
	Core Coretype : 4;
	words Wordlen : 2;
	HyperThread mode: 2;
public:
	CPU(unsigned frequence, Core type, words length, HyperThread mode) :frequence(frequence), Coretype(type), Wordlen(length), mode(mode) {};
	void show();
};
void CPU::show() {
	cout << "Ƶ�ʣ�   " << frequence << endl;
	cout << "������Ϊ��";
	switch ((unsigned)Coretype)
	{
	case single:
		cout << "����" << endl;
		break;
	case dual:
		cout << "˫��" << endl;
		break;
	case quad:
		cout << "�ĺ�" << endl;
		break;

	}
	cout << "�ֽ�����";
	switch ((unsigned)Wordlen) {
	case Bit32:
		cout << "32�����ֽ�";
		break;
	case Bit64:
		cout << "64�����ֽ�";
		break;
	}
	cout << endl;
	cout << "�Ƿ�֧�ֳ��̣߳�";
	switch ((unsigned)mode) {
	case Support:
		cout << "֧��"<<endl;
		break;
	case Unsupport:
		cout << "��֧��" << endl;
		break;
	}
	cout << endl;

}
int main()
{
	CPU c(3.0e9, quad, Bit64, Support);
	cout << "CPU����ռ�Ŀռ���Ϊ��" << sizeof(CPU) << endl;
	c.show();
	return 0;
}