// counnt 0 and 1 in array 

#include<iostream>
using namespace std;

int main()
{
int arr[15] = {10,20,30,40,50,60,0,0,0,0,1,0,1,1,1}  ;
int onecount =0;
int zerocount =0;
int keycount =0;
int key;
bool flag =0;

cout<<"Enter the key u want to find out"<<endl;
cin>>key;

for(int i =0;i<15;i++)
{
    if(arr[i]==1)
    {
        onecount++;
    }
    else if(arr[i]==0)
    {
        zerocount++;
    }
    else if(arr[i]==key)
    {
        keycount++;
    }
    else if (!arr[i]==key)
    {
        flag =1;
    }
}


cout<<"oneccount is"<<onecount<<endl;
cout<<"zeroccount is"<<zerocount<<endl;
cout<<"keycount is"<<keycount<<endl;


if (flag==1)
{
    cout<<"absent"<<endl;
}

return 0;
}