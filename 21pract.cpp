//we have to finf the peak element 
//which is not smaller than its neighbour elements


#include<iostream>
using namespace std;
 
int findpeakvalue(int arr[], int n)
{
    //yat apn ata side case sathi check krtoy smjl ka jr yekch element asel tr ks krnar
    if(n==1)
    {
        return 0;//0 mnje pahila element return kr bhau 
    
    }

    //check for the first element 

    if(arr[0]>=arr[1]){
        return 0;       //yat pn pahila element return krel
    }
                     
                     
                        //arrayt last elemt n-1 ani second last n-2 asto

    if(arr[n-1]>=arr[n-2]){
        //return arr[n-1];
        return n-1;
    }

    //yat apn ata remianing element ssthi check krto br ka 

   // mg tyraverse tr krav lagte na na 

    for(int i=1;i<n-1;i++)
    {
      if(arr[i]>=arr[i-1] &&  [i] )                         //array madhe last emenet konta rahto i-1 ok
    }

};




int main()
{
  //array ghe agodar
  //code vactana pn int main pasun start krn elike coplier 
  //ok sir
  
    int arr[] ={1,3,20,4,1,0};
   //n chi value kad 
   int n =sizeof(arr)/sizeof(arr[0]);
   
   int peak =  findpeakvalue(arr, n);


   return 0;
}