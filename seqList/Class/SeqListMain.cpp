#include <iostream>
using namespace std;
#include "SeqList.h"      
#include "SeqList.cpp"

void main()
{
	int stopit;
	SeqList<int> a;         
	cout << "ִ�в������:" << endl;
	try
	{
		a.Insert(1, 5);
		a.Insert(2, 9);
		a.Insert(3, 3);
	}
	catch (char* wrong)
	{
		cout << wrong;     
	}
	cout << "�Ѿ����롰5��9��3��" << endl;
	cout << endl;
	cout << "˳���a�ĳ���Ϊ:";
	cout << a.Length() << endl;        
	cout << endl;
	cout << "��λ��ѯ�ڶ���Ԫ��:" << endl;
	cout << "�ڶ���Ԫ��Ϊ:";
	cout << a.Get(2) << endl;          
	cout << endl;
	cout << "��ֵ��ѯ3:" << endl;
	cout << "ֵΪ3��Ԫ��λ��Ϊ:";
	cout << a.Locate(3) << endl;       
	cout << endl;
	try
	{
		if (a.Length()){
			cout << "ִ��ɾ����һ��Ԫ�ز���:" << endl;
			cout << endl;
			a.Delete(1);                
			cout << "��ɾ���ɹ���˳���a�ĳ���Ϊ:";
			cout << a.Length() << endl;
		}

		else{
			cout << "˳���a����Ϊ0" << endl;
		}
	}
	catch (char* wrong)
	{
		cout << wrong;     
	}
	cout << endl;
	cout << "˳���a�е�Ԫ����: " << endl;
	a.PrintList();            

	int r[] = {4,7,5,9,1,6};
	SeqList <int> b(r, 6);    
	cout << "ִ�в������ǰ˳���bΪ:" << endl;
	b.PrintList();           
	cout << "����ǰ˳���b�ĳ���Ϊ:";
	cout << b.Length() << endl;
	try
	{
		b.Insert(4, 3);
	}
	catch (char* wrong)
	{
		cout << wrong;     
	}
	cout << "ִ�в��������˳���bΪ:" << endl;
	b.PrintList();            
	cout << "�����˳���b�ĳ���Ϊ:";
	cout << b.Length() << endl;
	cout << endl;
	try
	{
		if (a.Length()){
			cout << "ִ��ɾ����һ��Ԫ�ز���:" << endl;
			cout << endl;
			b.Delete(1);                
			cout << "��ɾ���ɹ���˳���b�ĳ���Ϊ:";
			cout << b.Length() << endl;
		}

		else{
			cout << "˳���b����Ϊ0" << endl;
		}
	}
	catch (char* wrong)
	{
		cout << wrong;     
	}
	cout << "ִ�в��������˳���bΪ:" << endl;
	b.PrintList();           
	cin >> stopit;
}
