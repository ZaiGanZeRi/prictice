#include<iostream>
#include<cstring>
using namespace std;
class S_tring
{
	public:
		S_tring();
		~S_tring(){cout<<"��������ִ��\n";delete []str;len=0;}//���������������ڴ�й¶�� 
		S_tring(const char *const ch); 
//		S_tring(unsigned short int); //����һ���޷��Ŷ����͹��캯��,Ӧ����˽�������С� 
		int getlen() const{return len;}
		friend ostream&operator<<(ostream&out1,const S_tring&str)//������� 
		{
			out1<<str.str;
			return out1;//ʵ�ּ��� 
		}
			friend istream&operator>>(istream&in1,S_tring&str)//�������� 
		{
			in1>>str.str;
			return in1;//ʵ�ּ��� 
		}
	       friend bool operator<(S_tring&str1,const S_tring&str2)//�Ƚϡ�< ���� //����Ϊ���޺��� 
		{
			if (strcmp(str1.str,str2.str)<0)//�ú����������Ƚϵ������ַ�����ַ�� 
		                                    //��ַͨ�����������str��Ա����� 
		    {return 1;}
			return 0;
        }
		    friend bool operator>(S_tring&str1,const S_tring&str2)//�Ƚϡ�> ���� //����Ϊ���޺��� 
		{
			if (strcmp(str1.str,str2.str)>0)//�ú����������Ƚϵ������ַ�����ַ�� 
		                                    //��ַͨ�����������str��Ա����� 
		    {return 1;}
			return 0;
        }	
           friend bool operator==(S_tring&str1,const S_tring&str2)//�Ƚϡ�== ���� //����Ϊ���޺��� 
		{
			if (strcmp(str1.str,str2.str)==0)//�ú����������Ƚϵ������ַ�����ַ�� 
		                                    //��ַͨ�����������str��Ա����� 
		    {return 1;}
			return 0;
        }
//	    char*getstr()const{return str;}//���ض��д������ַ����ĵ�ַ
		//�������ֻ�ܶ�ȡ�ַ��������޸��ַ��� 
		char &operator[](int length);//�����±꺯�� ���������ع��캯��
		char operator[](int length)const;//�ɲ������������operator[]���� 
//		char &operator[](unsinged short int length);
//		char operator[](unsigned short int length)const;//�ɶ������޷��Ŷ����� 
		S_tring(const S_tring&rs);//const����������const�ĺ��� 
        S_tring&operator=(const S_tring &s);//�����������غ��� 
        S_tring operator+(const S_tring&s);
	private:
		S_tring(unsigned short int); //����һ���޷��Ŷ����͹��캯��,Ӧ����˽�������С�
		int len;
	//unsigned short int length; 
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

S_tring::S_tring(unsigned short int length)//length���ַ����ܳ��� 
{
	cout<<"��һ��short int�����Ĺ��캯��\n";
	len=length;//length���ַ����ܳ��� �����½���len��Ա���� 
	str=new char[len+1];
	for (int i=0;i<=len;i++)
	{//for�˳�������i<=len�����ﱣ֤�˽������������Ԫ�ض����Ϊ���ַ��� 
		str[i]='\0';//�������������Ԫ�ض����Ϊ���ַ��� 	 
	}
}

char &S_tring::operator[](int length)//���幹�캯�� ���ã�unsigned short int length)�޷��ų����ͣ�����Ϊ���� 
		{//�����÷��� �ַ�ԭʼֵ 
		cout<<"operator[]ִ��\n";
			if (length>len&&length<0)//�±�ֵ��ʵ�ʳ��ȴ�С�Ƚϲ�����Ϊ����
			{
				return str[len-1];
			 } //���ã��Ա�����ʽ�����ַ��������޸�
			 else
			 return str[length];
		}

char S_tring::operator[](int length)const//���幹�캯�� 
//char &S_tring::operator[](unsigned short ing length)const
		{//�����÷��� �ַ�ԭʼֵ 
		cout<<"operator[]constִ��\n";
			if (length>len)//�±�ֵ��ʵ�ʳ��ȴ�С�Ƚ�
			{
				return str[len-1];
			 } //���ã��Ա�����ʽ�����ַ��������޸�
			 else
			 return str[length];
		}

S_tring::S_tring(const S_tring&rs)//const����������const�ĺ�����13�У� 
		{
		    cout<<"���ƹ��캯��ִ��\n";
			len=rs.getlen();//��һ�����Ȼ�ȡ�ö�����ַ�����Ա�ĳ��ȣ���ֵ���ظ�len 
		    str=new char[len+1];
		    for (int i=0;i<len;i++)//rs.getlen���ص�len��ֵ�������ü��� 
			{//���ɶ���ĳ�Ա���Ƹ��¶��������ǿɼ��ַ����Ƹ� 
			str[i]=rs[i];	//�����±���������� //const����������const�ĺ�����13�У�
			}    
			str[len]='\0';//���һ���ǽ�����־ 
	    }

S_tring&S_tring::operator=(const S_tring &s)//���壽�����غ���//���ⶨ�� 
{ //����ֵS_tring&Ҫ������ǰ�� 
	cout<<"operator=ִ��\n";        
    if (this==&s)//thisָ��ָ��ֵ���������ߵĶ��� 
	{            //s�����Ǹ�ֵ��������ұߵĶ���
	             //s����ĵ�ַ��this����ĵ�ַ�����ǵ�ֵ�ж��Ƿ���һ������ 
		return *this;//ֱ�ӷ��� thisָ����󣬰�����&��ʽ����������� 
	 } //��������ɾ����߶�����ַ�����Ա 
	 delete []str;//ɾ����� �����str ָ������� ����ĩβ�����ַ���������־ ���Կ������� 
     len=s.getlen();//ɾ��Ҫ������һ���µ��ַ������������ұ��ַ���������ȷ�����õ������ٴ������ַ����� 
     str=new char[len+1];//����char�����飬����Ϊ�ұ��ַ������ȼӽ����� ����ַ��str��Ա���棬ͨ��str���ҵ�������� 
     for (int i=0;i<len;i++)//ѭ������Ϊ�ұ��ַ������� 
     {
     	str[i]=s[i];//ÿѭ��һ�ΰ��ұ��ַ����е�һ���ַ���������ַ��� 
	 }//S��һ���������±���������ã�������±������������ÿѭ��һ�ε���һ�Ρ� 
       //ѭ���������ұߵ��ַ������пɼ��ַ�ȫ����������ߵ������С� 
    str[len]='\0';//�������ַ���������־������char�����鷽�ű��һ���ַ����� 
    return *this;//��ɺ��ٽ���ߵ��ַ������ء��ǰ����÷�����߶���ı�������Ϊ��һ�θ�ֵ��׼���� 
}     

S_tring S_tring:: operator+(const S_tring&s)//��ֵ���� 
{
	cout<<"operator+����ִ��\n";
	int total=len+s.getlen();
	S_tring temp(total);//total��ֵ�������ַ������ܳ��ȡ� 
                        //tempӵ��һ�������ɣ����ַ��������� 
    int i,j;
    for (i=0;i<len;i++) 
    {
       temp[i]=str[i];
    } 
    for (j=0;j<s.getlen();j++,i++)  
    {
    	temp[i]=s[j];//��ߵ�ֵ�ǿ����޸ĵ�        
	}
//	temp[total]='\0';//���ַ���������־�������������һ��Ԫ�ء���ʡ�� 
    return temp; 
}                        

int main()
{
    S_tring s1("aaa"),s2("bbb");
	S_tring s3;
    s3=s1+s2;
    cout<<"s1+s2:"<<s3<<endl;
	return 0;
}






















