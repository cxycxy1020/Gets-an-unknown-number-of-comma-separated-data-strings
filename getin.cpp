#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
//����������Ҫ��main������������ʱʹ��
//argc��һ���βΣ���ʾ�������ַ���������
//argv��һ�����飬��Ԫ����ָ��c�����ַ�����ָ��
//Ҳ����д�ɣ�int main(int argc, char** argv){}
{
	int temp;
	string strTemp;
	vector <int>array;
	int i = 0;
	stringstream sStream;
    //�������л�ȡ���룬ȫ�������ַ���strTemp
	cin >> strTemp;
	
	//��strTemp�еĶ���ȫ���ÿո����
	int pos = strTemp.find(','); //������ڣ�find������ĸ����λ�õ��±꣬�������ڣ�����npos
	while (pos != strTemp.npos)
	{
		strTemp = strTemp.replace(pos, 1, 1, ' ');  //���ַ����е�','�ÿո����
		pos = strTemp.find(',');
	}

    //���滻����ַ�������stringstream����,stringstream�����ڷָ�ո��Ʊ���ȷ��ŷָ���ַ���
	sStream << strTemp;  
	
	//ʹ��>>���ζ�ȡ�Կո�ָ���Ԫ��
	while (sStream >> temp)
	{
		array.push_back(temp);
	}
	
	for(int i=0;i<array.size();i++)
	  cout<<array[i]<<" ";
	cout<<endl;
	return 0;
}

