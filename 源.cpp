/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;//����һ��vector����v
	for (int i = 0; i < 16; i++)//������СΪ16
	{
		v.push_back(i *i);//��β�������i*i
	}
	for (int i = 0; i < 16; i++)
	{
		cout << v[i] << "";//
		cout << endl;
	}
	v.pop_back();
	for (int i = 0; i < 9; i++)
	{
		cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}*/
/*iterator�������������Ԫ�ء�
                   *reverse_iterator�������������Ԫ�ء�
                    *const_iterator�������������Ԫ�أ���ͨ��const_iteratorֻ�ܷ�������Ԫ�أ������޸�Ԫ�ص�ֵ
                   *const_reverse_iterator�������������Ԫ�أ���ͨ��const_reverse_iteratorֻ�ܷ�������Ԫ�أ������޸�Ԫ�ص�ֵ��*/
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	for (int i = 0; i<10; i++)
	{
		v.push_back(i + 1);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << " ";
		cout << endl;
	}
	vector<int>::iterator pos;
	vector<int>::reverse_iterator pos_r;
	cout << "�������:" << endl;
	for (pos = v.begin(); pos != v.end(); ++pos)
	{
		cout << *pos << " "<<endl;
	}
	cout << "���������" << endl;
	for (pos_r = v.rbegin(); pos_r != v.rend(); ++pos_r)
	{
		cout << *pos_r << endl;
	}
	return 0;
}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char>v;
	//v.assign(50, 1);
	v.insert(v.begin(), 'a');//����a
	v.insert(v.begin(), 'b');//����b��Ϊba
	v.insert(v.begin(), 'c');//����c��Ϊcba
	v.insert(v.begin() + 1, 10, '@');//����λ����c����
	cout<<v.front()<<endl;//��ʾ��һ��
	//cout << v.at(char, 'a') << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << v[i] << endl;
	}
	cout << "eraseɾ����" << endl;
	v.erase(v.begin(),v.begin()+3);
	v.pop_back();//��β��ɾ��Ԫ��a
	v.push_back('t');//��β������Ԫ��t
	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}*/
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int, 3 >c= {1, 2, 3};
	array<int, 3>c1 = { 9,8,7 };
	array<int, 3>::iterator pos;
	c.swap(c1);
	for (pos = c.begin(); pos != c.end(); ++pos)
	{
		cout << *pos << endl;
	}
	return 0;
}*/
#include<iostream>
#include<list>
using namespace std;
template<typename T>//���庯��ģ�����list����Ԫ��
void print(list<T>mylist)
{
	typename list<T>::iterator it;
	for (it = mylist.begin(); it != mylist.end(); it++)
	{
		cout << *it << endl;
	}
}
int main()
{
	list<int>lt;
	for (int i = 0; i < 10; i++)
	{
		lt.push_back(i + 1);
	}
	cout << "list��Ԫ�أ�" << endl;
	print(lt);
	lt.pop_back();
	lt.push_front(5);//list������С���ܱ䣬����Ҫɾ��һ�����ܲ���һ��
	cout << "�ٴ����list��Ԫ��:" << endl;
	print(lt);
	lt.remove(5);
	cout << "���list��ֵ:" << endl;
	print(lt);
	return 0;
}

