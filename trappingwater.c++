// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    // Your code here
    int res = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for(int i = 1; i<n; i++)
    {
        lmax[i] = max(arr[i],lmax[i - 1]);
    }
    rmax[n - 1] = arr[n - 1];
    for(int j = n - 2; j>=0; j--)
    {
        rmax[j] = max(arr[j],rmax[j + 1]);
    }
    for(int i = 1; i<n - 1; i++)
    {
        res = res + (min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends