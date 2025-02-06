 #include<iostream>
 using namespace std;
 int main (){
    int arr[10] ={10,20,30,40,50,60,70,87,90,100};
       
 
        int i = 0;
        //yat kay hotay tr loop run hoil pn jevha na odd no yeil tevha skip hoil mhun asy condition 
        //solve onluy by using if else na ki for loop condtion 
        //yat only travsering chi condition takychi aste

        cout<<"the even no is"<<endl;
         for( ;i<10 ||arr[i]%2==0;i++){
             cout<<arr[i]<<endl;
            }
    
        }
        
//         else{
//         cout<<" odd no is    "<<endl;
//         for(i=0;i<10;i++){
//              cout<<arr[i]<<endl;
//         } 
//         }
// }