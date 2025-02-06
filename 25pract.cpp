#include<iostream>
using namespace std;
// correct code read it 






//                                              cd "c:\Users\DELL\Desktop\array practice jan\" ; if ($?) { g++ 25pract.cpp -o 25pract } ; if ($?) { .\25pract }
// eveen array
// 2
// 4
// 6
// 8
// 10
// 0
// 0
// odd array
// 3
// 5
// 9
// PS C:\Users\DELL\Desktop\array practice jan>

 // as ka br yete kay ,ahit output 

int main()
{
    //aplyala kay kraych ye bhava enen and odd no array madle seperate krayche yet

    int arr[10] = {2,3,5,4,6,8,9,10}; // yancha yek seperate array krach ye dpn enen and odd sathi 

    //create two arrays 
    int evenarr[10];
    int oddarr[10];
    int oddCount=0;                                                               //mojyach kam krte 
    int evenCount=0; // ji pn ghost mojnar ahe code madhe tila na intilaze kravch lagt smj ka 

    for(int i = 0;i<10;i++)
    {
        if(arr[i] % 2 ==0)
        {
            evenarr[evenCount] = arr[i];               // = simple meaning kay ye tyachi value tr tak array madhe na 
                evenCount++;
        }
        else
        {
            oddarr[oddCount] = arr[i];               // tyachi value tr tak array madhe na 
                oddCount++;
        }
    }

    // now print an array 
        cout<<"eveen array"<<endl;
        for(int i =0;i<evenCount;i++)
        {
            cout<<evenarr[i]<<endl;
        }
        cout<<"odd array"<<endl;

        for(int i =0;i<oddCount;i++)
        {
            cout<<oddarr[i]<<endl;
        }




    return 0;
}