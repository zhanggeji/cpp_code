#include <iostream>
using namespace std;
//eg
//int a = 0;
//void test()
//{
//    printf("你好");
//}
//namespace zyz
//{
//    int a = 1;
//    void test()
//    {
//        printf("Hello");
//    }
//}
//
//n
//
//int main()
//{
//    std::cout << "Hello World!\n";
//    std::cout << zyz::a << std::endl;
//}
////eg
//namespace zyz1
//{
//	int a = 1;
//	void test()
//	{
//		printf("1\n");
//	}
//}
//namespace zyz2
//{
//	int a = 2;
//	void test()
//	{
//		printf("2\n");
//	}
//}
//using zyz2::a;//只展开a
//namespace zyz3
//{
//	int b = 3;
//	void test()
//	{
//		printf("3\n");
//	}
//}
//using namespace zyz3;
//int main()
//{
//	//常规方法
//	printf("%d", zyz1::a);
//	zyz1::test();
//	//部分展开
//	printf("%d", a);
//	//全部展开
//	printf("%d", b);
//	test();
//}
// 
//eg
//namespace zyz1
//{
//	int a = 1;
//	namespace zyz2
//	{
//		int a = 2;
//	}
//}
//int main()
//{
//	printf("%d", zyz1::zyz2::a);
//}

////使用方式
////1.常规使用
//#include <iostream>
//int main()
//{
//	std::cout << "hello" << std::endl;//等价于 prinf("hello\n");
//}
////2.部分展开
//#include <iostream>
//using std::cout;
//using std::endl;
//int main()
//{
//	cout << "hello" << endl;
//}
////3.全部展开
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "hello" << endl;
//}
//int a = 0;
//namespace zyz
//{
//	int a = 1;
//}
//int main()
//{
//	int a = 2;
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n", zyz::a);
//}


//全缺省
void func1(int a = 0, int b = 0, int c = 0)
{
	cout << a + b + c << endl;
}
//半缺省
void func2(int a, int b = 0, int c = 0)
{
	cout << a + b + c << endl;
}