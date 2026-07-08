#include <iostream>
using namespace std;


// [타입] [이름];

// [리턴타입] [함수이름]()
//int TestFuctionAdd(int a, float b)
//{
//    cout << "Hello World Test  " << a + b <<  endl;
//
//    int sum = (a + b);
//
//    return sum;
//}
//
//
//int main()
//{
//
//    TestFuctionAdd(10, 3.14f);
//
//}

//void Test1();
//int Test2(int a, int b);
//
//void Test1()
//{
//	int a = 100;
//	int b = 20;
//
//	int res = Test2(a, b);
//
//	cout << "결과값 : " << res << endl;
//}
//
//
//int Test2(int a, int b)
//{
//	int sum = a + b;
//	return sum;
//}
//
//
//int main()
//{
//	Test1();
//	return 0;
//}



int Test(int a)
{
	int c = a + 5;

	return c;
}

int main()
{
	int res = Test(10);
	
	cout << res;

	return 0;
}