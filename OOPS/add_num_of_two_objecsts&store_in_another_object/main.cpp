/*
Add numbers of two different objects and store result into another object.

Class test, Object t1,t2,t3
data members -> a,b

t3.a = t1.a + t2.a
t3.b = t1.b + t2.b
*/

#include "iostream"

using namespace std;

class test
{
    int a, b;
    public:
    void getdata();
    void putdata();
    test sum(test);
};

void test::getdata()
{
    cout << "Enter a and b values";
    cin >> a >> b ;
}

void test::putdata()
{
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

test test::sum(test t)
{
    test tTemp;
    tTemp.a = t.a + a;
    tTemp.b = t.b + b;
    return tTemp;
}

int main(int argc, char *argv[])
{
	test t1, t2, t3;
	t1.getdata();
	t2.getdata();
	t3 = t1.sum(t2);
	t3.putdata();
}
