#include<iostream>
#include<cstring>
#include<string.h>
using  namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  string c=to_string(a+b);  //把a+b的数值变成字符串，包括负号在内。
  int len=c.length();   //!
  for(int i=0;i<len;i++)
  {
    cout<<c[i];
    if(c[i]=='-')continue;
    if((i+1)%3==len%3&&(i+1)!=len) //题目的意思是三三一组输出，但是len有可能不能被3整除。所以要加一个条件:(i+1)%3==len%3。若len=7，则1 3 3输出。
      cout<<',';
  }
  cout<<endl;
  return 0;
}
