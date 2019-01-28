#include<iostream>
using namespace std;
int main()
{
  float a[1001]={0};  //标记各次方的单项式系数是否为零，以便后面输出单项式个数。并计算各次方单项式之和。
  float num; //系数
  int m;
  int n;
  cin>>m;
  for(int i=0;i<m;i++)
  {
    cin>>n>>num;
    a[n]+=num;
  }
  cin>>m;
  for(int i=0;i<m;i++)
  {
    cin>>n>>num;
    a[n]+=num;
  } 
  int cnt=0; //记录非零项的个数
  for(int i=0;i<1001;i++)
  {
     if(a[i]!=0.0)cnt++;
  }
  printf("%d ",cnt);
  for(int i=1000;i>=0;i--)
  {
    if(a[i]!=0.0)
     printf("%d %.1f ",i,a[i]);
  }
  cout<<endl;
  return 0;
}

