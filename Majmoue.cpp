#include <iostream.h>
#include <conio.h>
class majmoue
{
  int data[2];
 public:
  majmoue (int, int);
  void set(int,int);
  void print();
  friend majmoue operator+(majmoue,majmoue);
  friend majmoue operator*(majmoue,majmoue);
};

majmoue::majmoue (int a1, int a2)
{
  data[0] = a1;
  data[1] = a2;
}

void majmoue::set (int a1, int a2)
{
  data[0] = a1;
  data[1] = a2;
}

void majmoue::print()
{
  cout << " "<<data[0]<<", "<<data[1]<<"\n\n";
}

majmoue operator+(majmoue m1,majmoue m2)
{
	majmoue m3(0,0);
	m3.set(m1.data[0] + m2.data[0],
		m1.data[1] + m2.data[1]);
	return m3;
}

majmoue operator*(majmoue m1,majmoue m2)
{
  majmoue m3(0,0);
  m3.set(m1.data[0] * m2.data[0],
	 m1.data[0] * m2.data[1]);
  return m3;
}

int main()
{
  majmoue m1(5,2);
  majmoue m2(2,3);
  majmoue m3(0,0);

  cout << "majmoue1:" << endl;
  m1.print();

  cout << "majmoue2:" << endl;
  m2.print();
  	
  m3=m1+m2;
  cout << "\n\nSum(+):" << endl;
  m3.print();

  m3 = m1*m2;
  cout << "Mul(*):" << endl;
  m3.print();

  getch();
  return 0;
}
