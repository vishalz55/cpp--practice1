//serv values la change krun 1 kr
 #include<iostream>
using namespace std;
int main()

{   int n;
   
    cout<<"how many element take into the arry ";
    cin>>n;
    int arr[n];
    
    //take the input from user 
    
    cout<<"Enter the values enter to array "<<endl;
    
    for(int i = 0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"THe values of the arrays are "<<endl;
    
    for(int i = 0;i<n;i++)
    {
        cout<<1<<endl;
    }

    //tual vatta asel array madhe store zala pn he krun pha bhava 
   // cout<<"array "<<arr[4]; yat na no dete te pn garbage mla vatte store zala nahi
    return 0;

 }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5];
//     int n = 5;
//     cout<<"Enter the values un the array";
//     for(int i =0;i<n;i++)
//     {
//     cin>>arr[i];
//     }
    
//     cout <<"The double array is "<<endl;
    
//     for(int i =0;i<n;i++)
//     {
//         cout<<2*arr[i]<<endl;  //yala double half serv kru shkto mi 
//     }
//     cout<<"Lets check"<<endl;
//      for(int i =0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;  //yala double half serv kru shkto mi 
//     }
    
//     return 0;
// }
// /tmp/TRhTRekume.o
// Enter the values un the array10
// 20
// 30
// 40
// 50
// The double array is 
// 20
// 40
// 60
// 80
// 100
// Lets check  //  mla yethe na pahije double value update as 
// 10
// 20
// 30
// 40
// 50


// === Code Execution Successful ===