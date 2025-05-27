


#include <bits/stdc++.h>
using namespace std;

//return 1, if == m:
//return 0, if < m:
//return 2, if > m:
int func(int mid, int n, int m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}


// UPAR KA fun edge case handle kr lega

int NthRoot(int n, int m) {
    //Use Binary search on the answer space:
    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if (midN == 1) {
            return mid;
        }
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}




//WITHOUT EDGE CASE  ye likhwaya tha phle------------------


int func(int mid,int n){
    long long ans =1;
    while (n>0){
        if (n % 2 == 1) {
            ans = ans * mid;
            n = n - 1;
        }
    
    else {
        mid = mid * mid;
        n = n / 2;
    }

    
    }

    return ans;
}

int NTHroor(int n,int m ){
    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midN = func(mid, n);
        if (midN == m) {
            return mid;
        }
        else if (midN < m) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        return -1;
        
    }
}