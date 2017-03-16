#include <iostream>
using namespace std;
class Buffer
{
	double *Array;
	unsigned int Length;
public:
	Buffer(double *p, unsigned int n)
	{
		Length = n;
		Array = new double[n];
		for (int i = 0; i<n; i++) Array[i] = p[i];
	}
	Buffer()
	{
		Array = 0;
		Length = 0;
	}
	~Buffer()
	{
		if (Length>0) delete[] Array;
	}
	int Get_Length()
	{
		return Length;
	}
	void Print()
	{
		cout << "\n";
		for (int i = 0; i<Length; i++) cout << Array[i] << " ";
	}
	double& operator[](unsigned int i)
	{
		return Array[i];
	}
	Buffer & operator =(Buffer& v2)
	{
		Length = v2.Length;
		Array = new double[Length];
		for (unsigned int i = 0; i < Length; ++i) Array[i] = v2.Array[i];
		return *this;
	}
	friend double* & operator+(double *x, Buffer& v2);
};
double* & operator+(double *x, Buffer& v2)
{
	for (unsigned int i = 0; i < v2.Get_Length(); ++i) x[i] += v2[i];
	return x;
}
int main()
{
	double *m1 = new double[5];
	for (unsigned int i = 0; i < 5; ++i) m1[i] = i + 1;
	Buffer V1(m1, 5);
	V1.Print();
	cout << "\n";
	for (int i = 0; i<5; i++)
		cout << V1[i] << " ";
	Buffer V3(m1+V1,5);
	Buffer V2 = V3;
	V2.Print();
	system("pause");
	return 0;
}
