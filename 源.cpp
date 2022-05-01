/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;//创建一个vector容器v
	for (int i = 0; i < 16; i++)//容器大小为16
	{
		v.push_back(i *i);//从尾部添加数i*i
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
/*iterator：正向遍历容器元素。
                   *reverse_iterator：反向遍历容器元素。
                    *const_iterator：正向遍历容器元素，但通过const_iterator只能访问容器元素，不能修改元素的值
                   *const_reverse_iterator：反向遍历容器元素，但通过const_reverse_iterator只能访问容器元素，不能修改元素的值。*/
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
	cout << "正向遍历:" << endl;
	for (pos = v.begin(); pos != v.end(); ++pos)
	{
		cout << *pos << " "<<endl;
	}
	cout << "反向遍历：" << endl;
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
	v.insert(v.begin(), 'a');//插入a
	v.insert(v.begin(), 'b');//插入b变为ba
	v.insert(v.begin(), 'c');//插入c变为cba
	v.insert(v.begin() + 1, 10, '@');//插入位置在c后面
	cout<<v.front()<<endl;//显示第一个
	//cout << v.at(char, 'a') << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << v[i] << endl;
	}
	cout << "erase删除：" << endl;
	v.erase(v.begin(),v.begin()+3);
	v.pop_back();//从尾部删除元素a
	v.push_back('t');//从尾部插入元素t
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
template<typename T>//定义函数模板输出list容器元素
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
	cout << "list中元素：" << endl;
	print(lt);
	lt.pop_back();
	lt.push_front(5);//list容器大小不能变，所以要删除一个才能插入一个
	cout << "再次输出list中元素:" << endl;
	print(lt);
	lt.remove(5);
	cout << "输出list的值:" << endl;
	print(lt);
	return 0;
}

