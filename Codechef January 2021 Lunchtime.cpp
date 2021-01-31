#include<bits/stdc++.h>
using namespace std;
 
#define lli            long long int  
#define ll             long long 
#define vi             vector<int>
#define mod            1000000007
#define MAX            INT_MIN
#define MIN            INT_MAX
#define ff             first
#define ss             second
#define pb             push_back
#define bs             binary_search    // binary_search(a,a+n,x);
#define mp             make_pair
#define pii            pair<int,int>
#define pqb            priority_queue<int>
#define lower(x)       transform(x.begin(), x.end(), x.begin(), ::tolower);           
#define upper(x)       transform(x.begin(), x.end(), x.begin(), ::toupper);
#define lb             lower_bound      // lower_bound(a,a+n,x) - a; => For Index
#define up             upper_bound      // upper_bound(a,a+n,x) - a; => For Index       
#define floop(x,n)     for(int i=x;i<n;i++)
#define REP(i,n)       for(int i = 1; i <= n; i++)
#define setbits(x)     __builtin_popcountll(x)
#define zrobits(x)     __builtin_ctzll(x)
#define ps(x,y)        fixed<<setprecision(y)<<x         
#define FIO            ios_base::sync_with_stdio(false); cin.tie(NULL);
                  
void c_p_c()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif   
}

//              CODECHEF JANUARY 2021 LUNCHTIME : DIV 3 SOLUTIONS
//          IN THIS CONTEST I WAS ABLE TO SOLVE 4 QUESTIONS BY MYSELF

//*********************************************************************************//
                        // PROBLEM A //

void problem_A()
{
    int t;
    cin>>t;

   for(int i=0;i<t;i++){

    int a,b,c;
    cin>>a>>b>>c;

    if((a+b == c) or (b+c == a) or (a+c == b)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
}
    
//*********************************************************************************//
                        // PROBLEM B //

void problem_B()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans = 0;
        int odd = 0;
        int even = 0;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin>>x;
        
            if(x%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        cout<<min(even,odd)<<endl;
    }
}

//********************************************************************************//
                        // PROBLEM C //

void problem_C()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];

        floop(0,n){
            cin>>arr[i];
        }

        int not_solved=0,max_time=INT_MIN;

        max_time = *max_element(arr,arr+n);

        floop(0,n){
            if(arr[i]==-1){
                not_solved++;
            }
        }

        int solved = n-not_solved;

        float x = ceil(n/2.0);

        if(solved < x){
            cout<<"Rejected"<<endl;
            continue;
        }

        if(max_time > k){
            cout<<"Too Slow"<<endl;
            continue;
        }

        if(not_solved==0 and max_time<=1){
            cout<<"Bot"<<endl;
            continue;
        }

        cout<<"Accepted"<<endl;
    }
}
//*********************************************************************************//
                        // PROBLEM D //

void problem_D()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        int odd = 0;
        int even = 0;

        floop(0,n){
            cin>>arr[i];

            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(odd%2==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
}
//*********************************************************************************//
                        // PROBLEM E //

void problem_E()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt0=0,cnt1=0;

        for(auto x:s){
            if(x=='0'){
                cnt0++;
            }
            else{
                cnt1++;
            }
        }

        int ans = min(cnt0,cnt1);

        int a=0,b=0;

        for(auto x:s){
            if(x=='0'){
                a++;
            }
            else{
                b++;
            }

            ans = min(ans,b+(cnt0-a));
        }

        cout<<ans<<endl;
    }
}

void problem_F()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        while(k%2==0){
            k=k/2;
        }

        vi arr(n);

        bool ans = true;

        floop(0,n){
            cin>>arr[i];

            if(arr[i]%k!=0){
                ans = false;
            }
        }

        if(ans==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

//*********************************************************************************//

void solution()
{
//     int t;
//     cin>>t;

//    while(t--){
        //problem_A();
        //problem_B();
        //problem_C();
        //problem_D();
        //problem_E();
        problem_F();
  //  }
}

    
int32_t main()
{
    c_p_c();
    FIO;
    
    solution();
 
    return 0;
}