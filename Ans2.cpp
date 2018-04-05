#include<bits/stdc++.h>
using namespace std;
int n;
 vector < string > vec;
void per(string s  , int i )
  {
     
       
      if(i==s.length() || i>s.length())
     { 
         
         vec.push_back(s);
      return ;
         
     }
        
        for(int j=i; j < s.length(); j++)
        {
            swap( s[i] , s[j]);
            i = i+1;
            per(s,i );
            i = i-1;
            swap( s[i] , s[j]);
            
        }
      
  }
 
 
int main()
 {
     int n;
     cin>>n;
     char a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     
     string s1;
     cin>>s1;
     
      string s;
       
        for(int i=0;i<n;i++)
     s.push_back(a[i]);
     
     
      
     
      per(s,0);
      sort(vec.begin(),vec.end());
       
     for(int z=0;z<vec.size();z++)
      {
        if(s1==vec[z])
       {
          cout<<z+1;
          return 0;
       }        
      }
     
 }