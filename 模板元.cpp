#include <iostream>

using namespace std;

int get50(int n)
{
    if(n == 1) return 1;
    if( n == 2) return 2;
    return get50(n - 1) + get50(n - 2);
}
// �������ã������ȴ������أ��˷�ʱ���
// ģ��Ԫʵ�ֵݹ����
// ִ���ٶȿ죬����ʱ����������������
// �����е�ʱ���Լ�ڱ����ʱ��
// �ݹ���٣���Ϸ�Ż��� ����ʹ��C++11

template<int N>
struct data
{
    // �ݹ�
    enum{ res = data<N -1> :: res + data<N - 2> :: res };
};
template<>
struct data<1>
{
    enum {res = 1};
};
template<>
struct data<2>
{
    enum {res = 2};
};
int main()
{
    int num = 40;
    cout << data<40> :: res << endl; // ģ��Ԫ���������
    // cout << data<num> :: res << endl;
    cout << get50(40) << endl;
    return 0;
}
