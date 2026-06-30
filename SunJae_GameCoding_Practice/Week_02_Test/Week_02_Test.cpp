#include <iostream>
using namespace std;


// [타입] [이름];

// [리턴타입] [함수이름]()
int TestFuctionAdd(int a, float b)
{
    cout << "Hello World Test  " << a + b <<  endl;

    int sum = (a + b);

    return sum;
}


int main()
{

    TestFuctionAdd(10, 3.14f);

}