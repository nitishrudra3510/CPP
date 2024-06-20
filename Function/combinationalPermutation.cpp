// for loop iteration

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;

//     int r;
//     cout<<"Enter the r: ";
//     cin>>r;

//     //nfact
//     int nfact = 1;
//     for(int i=2; i<=n; i++){
//         nfact = nfact *i;
//     }

//     //rfact
//     int rfact = 1;
//     for(int i=2; i<=r; i++){
//         rfact = rfact *i;
//     }

//     //nrfact;
//     int nrfact = 1; // (n-r)!
//     for(int i=2; i<=n-r; i++){
//         nrfact = nrfact *i;
//     }

//     int ncr = nfact/(rfact*nrfact);
//     cout<<"nrfact: "<<nrfact;

// }


// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f = 1;
//     for(int i=2; i<=x; i++){
//         f = f*i;
//     }
//     return f;
// }
// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;

//     int r;
//     cout<<"Enter the r: ";
//     cin>>r;

//     //nfact
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     int ncr = nfact/(rfact*nrfact);
//     cout<<"nrfact: "<<ncr;

// }



// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f = 1;
//     for(int i=2; i<=x; i++){
//         f = f*i;
//     }
//     return f;
// }

// int combination(int n, int r){
//     int ncr = fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }
// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;

//     int r;
//     cout<<"Enter the r: ";
//     cin>>r;

//     int ncr = combination(n,r);
//     cout<<"nrfact: "<<ncr;

// }


// purmutation and combination;

#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f = f*i;
    }
    return f;
}

int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int permuation(int n, int r){
    int npr = fact(n)/(fact(n-r));
    return npr;
}
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;

    int r;
    cout<<"Enter the r: ";
    cin>>r;

    int ncr = combination(n,r);
    int npr = permuation(n,r);
    cout<<"ncr: "<<ncr<<endl;
    cout<<"npr: "<<npr;

}


