#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    string str="abcdefghijklmn";
    char ch2[]="123456789";//ֻ��9��λ�� 
    cout<<"Դ�ַ���:"<<ch2<<endl; 
//   memmove(ch1,ch2,10);
   int n=str.copy(ch2,10,0);
//������������������Ե��øú����Ķ���str��
//��˸ú������Ǵ�str��1���ַ���ʼ��������10���ַ���ch2�С�   
    cout<<"�����ˣ�"<<n<<endl;
    cout<<"��������ַ�����"<<ch2<<endl; 
	return 0;
 } 
