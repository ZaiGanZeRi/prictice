#include<iostream>
#include<cstring>
using namespace std;
class S_tring
{
	public:
		S_tring();
		S_tring(const char *const ch); 
		int getlen() const{return len;}
		const char*getstr()const{return str;}//���ض��д������ַ����ĵ�ַ
		//�������ֻ�ܶ�ȡ�ַ��������޸��ַ��� 
		char &operator[](int length);//�����±꺯�� ���������ع��캯�� 
	private:
		int len;
		char *str;
};//ָ��strָ���ڶ��д���char������,�ͱ����һ���ַ����� 

S_tring::S_tring()
{
	cout<<"���������Ĺ��캯��\n";
	len=0;
	str=new char[1];//�ڶ��п���һ��ռ䣬
	//ֻ����һ���ַ�����strָ����ָ���� 
	str[0]='\0';//��һ���ַ����������ַ���������־ ���ǿ��ַ����� 
}

S_tring::S_tring(const char*const ch)//chָ��ָ��δ�������� ,ָ��ص�һ���ַ�����ַ�� 
{//��char���ַ������й���һ��S_tring���ַ�����Ŀ�� 
	cout<<"��һ�������Ĺ��캯��\n";
	len=strlen(ch);
	str=new char[len+1];
	for (int i=0;i<len;i++)
	{
		str[i]=ch[i];//�����пɼ��ַ�����str�ַ��� 	 
	}
	str[len]='\0';//����strָ����ַ�����ͱ�����ַ���
}

char &S_tring::operator[](int length)//���幹�캯�� 
		{//�����÷��� �ַ�ԭʼֵ 
			if (length>len)//�±�ֵ��ʵ�ʳ��ȴ�С�Ƚ�
			{
				return str[len-1];
			 } //���ã��Ա�����ʽ�����ַ��������޸�
			 else
			 return str[length];
		}

int main()
{
    S_tring s;//���������Ķ��� s
    cout<<"s1:"<<s.getstr()<<"\t��"<<s.getlen()<<"�ַ�"<<endl;//ʵ��������һ�����ܼ����ַ����ĳ��� 
    S_tring s1("study");//δ�����ַ��������� ���������� ��һ���ַ� s�����ڵ�ַ 
    cout<<"s1:"<<s1.getstr()<<"\t��"<<s1.getlen()<<"�ַ�"<<endl;
    char *temp="help me";//δ�����ַ����ǳ������޷��޸ĳ���ֵ ��һ���ַ� h�����ڵ�ַ����ָ�� 
    S_tring s3(temp);
    cout<<"s3:"<<s3.getstr()<<"\t��"<<s3.getlen()<<"�ַ�"<<endl; 
    cin>>s3[999];//��֤s3�����Ƿ�䳤 �޸����һ���ַ�
    cout<<"s3:"<<s3.getstr()<<"\t��"<<s3.getlen()<<"�ַ�"<<endl; 
    cout<<"s3[999]:"<<s3[999]<<endl;//�������һ���ַ�
	return 0;
}
