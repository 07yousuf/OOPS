#include<bits/stdc++.h>
using namespace std;
int h,m,s;
class TIME{
      int hours,min,sec;
      public:
      void input(){
            cin>>hours>>min>>sec;
      }

      int subtract(TIME& other){
            
            if((min || other.min > 60) || (sec || other.sec > 60)){
                  cout<<"Take Input Minutes and Seconds under 60!\n";
                  
            }
            if(hours>other.hours){
                  h= hours - other.hours;
            }
            else{
                  h=other.hours - hours;
            }
            if(min>other.min){
                  m= min - other.min;
            }
            else{
                  m= other.min - min;
            }
            if(sec>other.sec){
                  s= sec - other.sec;
            }
            else{
                  s= other.sec - sec;
            }

           
      }
      void show(){
            cout<<h<<"hour "<<m<<"minute "<<s<<"seconds"<<endl;
      }

};
int main(){
      TIME T1,T2;
      T1.input();
      cout<<"take input for second phase";
      T2.input();
      T1.subtract(T2);
      cout<<"So Time Difference is:-";
      T1.show();
      return 0;
}