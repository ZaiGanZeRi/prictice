#include<iostream>
using namespace std;
class S_tring
{
	public:
		S_tring();
		int getlen()const{return len;}
	private:
		int len;
		char *str;
};//ָ��strָ���ڶ��д���char������,�ͱ����һ���ַ����� 
S_tring::S_tring()
{
	len=0;
	str=new char[1];//�ڶ��п���һ��ռ䣬
	//ֻ����һ���ַ�����strָ����ָ���� 
	str[0]='\0';//��һ���ַ����������ַ���������־ ���ǿ��ַ����� 
}
int main()
{
    S_tring s;//���������Ķ��� s
    cout<<s.getlen()<<endl;//ʵ��������һ�����ܼ����ַ����ĳ��� 
	return 0;
}
