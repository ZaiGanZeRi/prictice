#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    string s("give me");//����string���ַ���s,�����ڹ��캯��ʱ��ʼ��ֵΪgive me
    cout<<"ԭʼ�ַ���Ϊ��"<<s<<endl;
	s.erase(2,2);//��1�������Ǵ��ĸ�λ�ÿ�ʼɾ������2��������ɾ������Ԫ�ء� 
	cout<<"�����ַ���Ϊ��"<<s<<endl; 
	s.erase(2);//�ӵ�2��λ�ÿ�ʼɾ����������Ԫ�ء� 
	cout<<"���±�Ϊ2��Ԫ�ؿ�ʼɾ���������к�s��"<<s<<endl;
	s.erase();//���һ������ û�мӲ�����Ĭ��ֵΪ0����0������ַ�ȫɾ���ˣ�����ַ��� 
	cout<<"���s��"<<s<<endl;	
	return 0;
 } 
