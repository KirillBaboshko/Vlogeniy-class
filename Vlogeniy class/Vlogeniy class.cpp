#include <iostream>
using namespace std;

//class A 
//{
//public:
//
//private:
//	class B
//	{
//	public:
//		B(int val = 0);
//	
//	};
//
//};
//A::B::B(int val)
//{
//	//value = val;
//	//next = 0;
//
//}

//class A
//{
//public:
//
//private:
//	//���������� ����������
//	class B;
//B* obj;
//
//};
//class A::B
//{
//public:
//	B(int val = 0);
//	B* next;
//	int value;
//};

	//class A
	//{
	//public:
	//
	//private:
	//	//���������� ����������
	//	class B;
	//	B* obj;
	//	//B x;  ������: �������������� ��������� ����� �
	//};
	//class A::B
	//{
	//public:
	//	B(int val = 0);
	//	B* next;
	//	int value;
	//};

	//class A
	//{
	//public:

	//private:
	//	//���������� �::�
	//	class B;
	//	B* obj;
	//	//B x;  ������: �������������� ��������� ����� �
	//};

//class A
//{
//public:
//
//private:
//	//���������� �::�
//	class B;
//	class Ref
//	{
//		B* pli;
//	};
//	//���������� �::�
//	class B
//	{
//		Ref* pref;
//	};
//};

//class A
//{
//public:
//	int init(int val)
//	{
//		return val;
//	}
//private:
//	class B 
//	{
//	public:
//		B(int val = 0);
//		void mf(const A&);
//		int value;
//	};
//};
//A::B::B(int val)
//{
//	//�::init()-������������� ���� ������ �
//	//������ �������������� ����� ������ ���
//	//��������� �� ��� �
//	value = init(val);
//}
//void A::B::mf(const A& i1)
//{
//	//���������� � init() �� ������
//	memb = i1.init(5);
//}
class Point
{
	int x;
	int y;
public:
	Point() 
	{
		x = y = 0;
	}
	void SetPoint(int ix, int iy)
	{
		x = ix;
		y = iy;
	}
	void Show()
	{
		cout << "--------------------";
		cout << x << "\t" << y << "\n\n";
		cout << "--------------------";
	}
};
class Figura
{
	Point* obj;
	int count;
	int color;
public:
	Figura()
	{
		count = color = 0;
		obj = NULL;
	}
	void CreateFigura(int cr, int ct)
	{
		if (ct < 3) exit(0);
		count = ct;
		color = cr;
		obj = new Point[count];
		if (!obj)exit(0);
		int tempx, tempy;
		for (int i = 0; i < count; i++)
		{
			cout << "Set X\n";
			cin >> tempx;
			cout << "Set Y\n";
			cin >> tempy;
			obj[i].SetPoint(tempx, tempy);
		}
	}
	void ShowFigura()
	{
		cout << "-----------------------------------------------\n\n";
		cout << "Color" << color << "\n\nPoints- " << count << "\n\n";
		for (int i = 0; i < count; i++)
		{
			obj[i].Show();
		}
	}
	~Figura()
	{
		if (obj != NULL)
		{
			delete[]obj;
		}
	}
};
void main()
{
	Figura f;
	f.CreateFigura(255, 3);
	f.ShowFigura();
}
