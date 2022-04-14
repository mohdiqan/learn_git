#include<iostream>
#include<stdlib.h>
const int multiple=3;
//#include<bits/stdc++.h>
using namespace std;

int main()
{
 
int a[]={0,0,1,0,0,1,1,0};
int count0=0,count1=0;
for(int i=0;i<a.length;i++)
{
	if(a[i]==0)
	 count0++;
	else
	 count1++;
}

for(int i=0;i<count0;i++)
 a[i]=0;
for(int i=count0;i<a.length;i++)
 a[i]=1;



	return 0;
}
