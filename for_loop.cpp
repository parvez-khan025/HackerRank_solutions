#include <bits/stdc++.h>
using namespace std;
int main()
{

int n,m;
cin >> n >> m;
string num[9] = {"one","two","three","four","five","six","seven","eight","nine"};
for(int i =n; i <= m;i++)
{
if(i <= 9)
{
cout << num[i-1] << endl;
}
else
{
if(i%2 ==0)
{
cout << "even" << endl;
}
else
{
cout << "odd" << endl;
}
}
}
return 0;
}
