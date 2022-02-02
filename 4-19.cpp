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
	cout << "频率：   " << frequence << endl;
	cout << "核心数为：";
	switch ((unsigned)Coretype)
	{
	case single:
		cout << "单核" << endl;
		break;
	case dual:
		cout << "双核" << endl;
		break;
	case quad:
		cout << "四核" << endl;
		break;

	}
	cout << "字节数：";
	switch ((unsigned)Wordlen) {
	case Bit32:
		cout << "32比特字节";
		break;
	case Bit64:
		cout << "64比特字节";
		break;
	}
	cout << endl;
	cout << "是否支持超线程：";
	switch ((unsigned)mode) {
	case Support:
		cout << "支持"<<endl;
		break;
	case Unsupport:
		cout << "不支持" << endl;
		break;
	}
	cout << endl;

}
int main()
{
	CPU c(3.0e9, quad, Bit64, Support);
	cout << "CPU类所占的空间数为：" << sizeof(CPU) << endl;
	c.show();
	return 0;
}