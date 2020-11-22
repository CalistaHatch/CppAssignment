//Q6. 
  
#include <iostream>
using namespace std;
//class 
class Stockprices
{
    public:
    int prices[7];//prices array 
    Stockprices(int arr[])//constructor that accepts a Stockprices array as argument 
    {
        for(int i=0;i<7;++i)
               prices[i] = arr[i];
    }
    //find average 
    int average()
    {
        int sum=0,avg=0;
         for(int i=0;i<7;++i){
             //if prices greater than 5000 and negative throw an exception 
          if(prices[i]>5000 || prices[i]<0)
            throw "stock price is not a valid!";
            
            sum+=prices[i]; 
         }
         avg=sum/7;
         return avg;//return average value 
    }
};
int main()
{ //array containing Stockprices 
    int arr[7]={2000,3100,300,700,4070,3456,867};
    Stockprices obj(arr);//create object and constructor with argument
    
   //exception handling  
    try {
        int ans=obj.average();
    cout<<ans;
      
   } catch (const char* error_msg) {
     cerr << error_msg << endl;
   }
    
   
    return 0;
}
