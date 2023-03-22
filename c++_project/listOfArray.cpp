#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,n,k,q,x,y;
    cin>>n>>q;
    vector <int> a(n);
    for(i=0;i<n;i++)
        {
        	cin>>k;
        	for(j=0;j<k;j++)
        	{
        		cin>>a[i];
			}
            
        }
        
    for(i=0;i<n;i++)
    {
    	for(j=0;j<k;j++){
    	   cout<<a[i]<<endl;
        }
	}
    for(i=0;i<=n;i++)
    {
    	cin>>x>>y;
    	cout<<a[x]<<" "<<endl;
	}
    /*for(i=1;i<=q;i++)
    {
    	for(j=1;j<q;j++){
    		cin>>x>>y;
            cout<<a[x][y]<<endl;    		
		}
    }*/
    return 0;
}





/*2 2
3 1 5 4
5 1 2 8 9 3
0 1   -> 1
1 3   -> 9*/

