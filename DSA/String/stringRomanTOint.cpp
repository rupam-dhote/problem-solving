#include<iostream>
#include<string>
using namespace std;

int main(){
      string s="MCMXCIV";
      int ans=0;
      int size=s.size();
      int arr[size];
      for(int i=0;i<size;i++){
            switch (s[i])
            {
            case 'I':arr[i]=1;break;
            case 'V':arr[i]=5;break;
            case 'X':arr[i]=10;break;
            case 'L':arr[i]=50;break;
            case 'M':arr[i]=1000;break;
            case 'C':arr[i]=100;break;
            case 'D':arr[i]=500;break;
      }
}
      for(int i=0;i<size;i++){
            if(arr[i+1]){
                  int num1=arr[i],num2=arr[i+1];
                  
                  if(num1<num2){
                        ans+=(num2-num1);
                        i++;
                  }
                  else{
                        ans+=num1;
                  }
                 
            }
            else{
                  ans+=arr[i];
            }
      
      }
     
      return 0;
}
