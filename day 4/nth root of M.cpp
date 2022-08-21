https://www.codingninjas.com/codestudio/problems/1062679?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

int findroot(int m){
     int s=1;
    int e=m;
    long long res=1;
    int mid= s+(e-s)/2;
    while(s<e){
       
        if((mid*mid)>m){
            e=mid-1;
        }
        else{res=s;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return res+1;
}
double findNthRootOfM(int n, int m) {
    // Write your code here.
   int x=n;
    double y=m;
    while(x){x=x/2;
        int possible=findroot(y);
        
        y=possible;
    }
    double res=1;
    while(true){
    for(int i=1;i<=n ;i++){
       res= res*y;
    }if(res>m)break;
     y=y+1;
     res=1;
        }
    y=y-1;
    res=1;  
    double d=0.1;
    int dec=9;
    while(dec--){  
    res=1;
    while(true)
    {
    for(int j=1;j<=n ;j++){
       res= res*y;
    }
    if(res>m)break;
     res=1;
     y=y+d;
    }
    y=y-d;
    d=d/10;
    }
   
   
    
    return y; 
   
}