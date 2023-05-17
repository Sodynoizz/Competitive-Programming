#include <bits/stdc++.h>
using namespace std;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x:v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename ... Tail> void dbg_out(Head H, Tail ... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define long long ll
#define pii pair<int, int>
#define mii map<int, int>
#define vii vector<int, int>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

vector<int> v;

void createList(int n) {
    int x;
    for (int i=1; i<=n; i++) {
        printf("Input data for node %d : ", i);
        scanf("%d", &x);
        v.emplace_back(x);
    }
}

void displayList(int m) { for (int i=0; i<m; i++) printf("\nData = %d", v[i]); }

void insertFront(int n, int cur) { for (int i = cur - 1; i >= 0; i--) v[i+1] = v[i]; v[0] = n; }
void insertLast(int n, int cur) { v[cur - 1] = n; }
void insertMiddle(int n, int cur, int pos) { for (int i = cur; i >= pos - 1; i--) v[i+1] = v[i]; v[pos - 1] = n; }

void deleteFront(int cur) { for (int i=0; i<cur; i++) v[i] = v[i+1]; }
void deleteLast(int cur) { for (int i=cur; i>=cur; i--) v[i] = v[i+1]; }
void deleteMiddle(int cur, int pos) { for (int i=pos; i<cur; i++) v[i] = v[i+1]; }

void searchList(int n) {
    for (int i=0; i<v.size(); i++) {
        if (v[i] == n) return void(printf("Data found at node %d", i + 1));
    }
    return void(printf("Not found"));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, o, p, q, r, s, pos;

    printf("Input the number of nodes : "); scanf("%d", &n);
    createList(n);
    printf("\nData entered in the list :\n"); 
    displayList(n);

    printf("\n\nInput data to insert at the begining of the list : "); n++;
    scanf("%d", &m);
    insertFront(m, n);
    printf("\nData after inserted in the list are : ");
    displayList(n);
    
    printf("\n\nInput data to insert at the end of the list : "); n++;
    scanf("%d", &o);
    insertLast(o, n);
    printf("\nData after inserted in the list are : ");
    displayList(n);

    printf("\n\nInput data to insert at the middle of the list : "); n++;
    scanf("%d", &p);
    printf("Input the position to insert new node : "); scanf("%d", &pos);
    insertMiddle(p, n, pos);
    printf("\nInsertion completed successfully.");
    printf("\n\nThe list are : ");
    displayList(n);

    printf("\n\nData of node 1 which is begin deleted is : %d", v[0]); n--;
    printf("\nData, after deletion of first node : ");
    deleteFront(n);
    displayList(n);

    printf("\nThe new list after deletion of the last node are : "); n--;
    deleteLast(n);
    displayList(n);
    
    printf("\nInput the position of node to delete : "); n--;
    scanf("%d", &q);
    deleteMiddle(n, q-1);
    printf("\nDeletion completed successfully.");
    printf("\n\nThe new list are : ");
    displayList(n);

    printf("\nInput the element to be searched : ");
    scanf("%d", &r);
    searchList(r);
    
    return 0;
}