#include<iostream>
using namespace std;
// function madhe return krtatna na index retrun krto ha function  
// kadhi arr intialize kelyvrti lihychi aste 
int highest(int arr[],int size){
    
     //neghiour peksha mnl na mahun apn first sathi ani last sathi seperate gheto // kran tyaa sejari nstatat 
     
      //if array has only one elemnt 
      if(size==1)  
      {
          return 0;// index la return 
      }
      if (arr[0]>=arr[1])
      {
          return 0;  // last eleemnt array madhe n-1 asto 
      }
      if (arr[size-1]>=arr[size-2])
      {
          return size-1;
      }
      
      for(int i =1;i<size-1;i++)
      {
         if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
         {
             return i;
         }
      }
      
        return -1; // no peak elemnt found 
        
     
}

int main(){
    int arr[] = {10,20,52,98,30}; // array tyar kela 

    int size = sizeof(arr)/sizeof(arr[0]);
    int peak = highest(arr,size);   // function madhe array la pass kel 
    
    cout<<"THe element at index peak "<<peak<<"THe value"<<arr[peak];
    
   return 0; 
}


//find the peak element which is greather than its neighbours

#include<iostream>
using namespace std;
int peakelement(int arr[],int size)
{
    //arrays madhe jr yekch element asel tr
    if(size == 1)
    {
        return  0;
    }
    //hi condition zali nahi tr dusryat ja 
    else if  (arr[0]>=arr[1])
    {
        return 0;
    }
    else if (arr[size -2]<arr[size-1])
    {
        return size-1;
    }
    else
    {
        //travels kon i kru ka 
       for(int i =1;i<size-1;i++)
       {   
           //as chalt nahi nana 
          // if (arr[i-1]<arr[i]>arr[i+1])
           
         //  as chalte 
           if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
           {
               return i;
           }
       }
        
    }
    
    return -1 ;
}

int main()
{
    int arr[] = {10,30,40,50,60,70,45,33,12,10};
    int size =10;
    int target = peakelement(arr,size);//ithe arr[] as nahi liyach
    
    cout<<"THe peak element is "<<target;
    return 0;
}


//find the peak element which is greather than its neighbours

#include<iostream>
using namespace std;
int peakelement(int arr[],int size)
{
    //arrays madhe jr yekch element asel tr
    if(size == 1)
    {
        return  0;
    }
    //hi condition zali nahi tr dusryat ja 
    else if  (arr[0]>=arr[1])
    {
        return 0;
    }
    else if (arr[size -2]<arr[size-1])
    {
        return size-1;
    }
    else
    {
        //travels kon i kru ka 
       for(int i =1;i<size-1;i++)
       {   
           //as chalt nahi nana 
          // if (arr[i-1]<arr[i]>arr[i+1]) // don condtion ks detoy be 
           
         //  as chalte 
           if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
           {
               return i;
           }
       }
        
    }
    
    return -1 ;
}

int main()
{
    int arr[] = {10,30,40,50,60,70,45,33,12,10};
    int size =10;
    int target = peakelement(arr,size);//ithe arr[] as nahi liyach
    
    cout<<"THe peak element is "<<target;
    return 0;
}