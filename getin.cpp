#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
//当命令行需要向main函数传递数组时使用
//argc是一个形参，表示数组中字符串的数量
//argv是一个数组，其元素是指向c风格的字符串的指针
//也可以写成：int main(int argc, char** argv){}
{
	int temp;
	string strTemp;
	vector <int>array;
	int i = 0;
	stringstream sStream;
    //从命令行获取输入，全部存入字符串strTemp
	cin >> strTemp;
	
	//将strTemp中的逗号全部用空格代替
	int pos = strTemp.find(','); //如果存在，find返回字母所在位置的下标，若不存在，返回npos
	while (pos != strTemp.npos)
	{
		strTemp = strTemp.replace(pos, 1, 1, ' ');  //将字符串中的','用空格代替
		pos = strTemp.find(',');
	}

    //将替换后的字符串导入stringstream流中,stringstream可用于分割被空格、制表符等符号分割的字符串
	sStream << strTemp;  
	
	//使用>>依次读取以空格分隔的元素
	while (sStream >> temp)
	{
		array.push_back(temp);
	}
	
	for(int i=0;i<array.size();i++)
	  cout<<array[i]<<" ";
	cout<<endl;
	return 0;
}

