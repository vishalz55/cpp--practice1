#include<iostream>
using namespace std;

//yat na only array absent asla tri present dakvtay 
//he ks kay brober hech smjt nahi 
// abe function call tr kothepn kru shkto apn smjl ka 

bool find (int arr[],int size,int key){
    for(int i =0 ;i<size;i++)
    {
         arr[i]==key;
    }

}

int main(){
   int arr[6] = {1,5,6,7,8,9};
   int size = 6;

   int key;
   cout<<"Enter the element u want to find"<<endl;
   cin>>key;

   if(find(arr,size,key))
   {
    cout<<"element is present"<<endl;
   }
   else{
    cout<<"elment is absent"<<endl;
   }

   return 0;
}


//imp he bg bhava tu as call kr 
// if(find(arr,size,key))
//    {
//     cout<<"element is present"<<endl;
//    }
//    else{
//     cout<<"elment is absent"<<endl;
//    }


//k as kr 

// int func =find(arr,size,key);
//  if(func)
//    {
//     cout<<"element is present"<<endl;
//    }
//    else{
//     cout<<"elment is absent"<<endl;
//    }
//doni yekch ye 