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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(x) (x).begin() , (x).end()

int arr[31], index = 0;
vector<int> v;

struct node {
    int info;   
    struct node *left;
    struct node *right;
};


typedef struct node *NODEPTR;

NODEPTR root = NULL;

NODEPTR makeTree(int x) {
    NODEPTR p;
    p = new node();
    p->info = x;
    p->left = NULL;
    p->right = NULL;
    return (p);
}

void setLeft(NODEPTR p, int x) {
    if (p == NULL) return;
    else if (p->left != NULL) return;
    else p->left = makeTree(x);
}

void setRight(NODEPTR p, int x) {
    if (p == NULL) return;
    else if (p->right != NULL) return;
    else p->right = makeTree(x);
}

void preOrder(NODEPTR tree) {
    if (tree != NULL) {
        cout << tree->info << " ";
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

void inOrder(NODEPTR tree) {
        if (tree != NULL) {
        inOrder(tree->left);
        v.emplace_back(tree->info); 
        inOrder(tree->right);
    }
}
void postOrder(NODEPTR tree) {
    if (tree != NULL) {
        postOrder(tree->left);
        postOrder(tree->right);
        cout << tree->info << " ";
    }
}

int tree_height(NODEPTR root) {
   if (root == NULL) return 0;
   int leftHeight = tree_height(root->left);
   int rightHeight = tree_height(root->right);
   return (leftHeight > rightHeight) ? leftHeight : rightHeight + 1;
}

void createTree(int n) {
    if (root == NULL) root = makeTree(n);
    else {
        NODEPTR t, parent = NULL;
        t = root;
        while (t != NULL) {
            parent = t;
            if (n < t->info) t = t->left;
            else t = t->right;
        }
        if (n < parent->info) setLeft(parent, n);
        else setRight(parent, n);
    }
}

int tree_max() { return v[v.size() - 1]; }
int tree_min() { return v[0]; }
int leaves_node(NODEPTR root) {
   if (root == NULL) return 0;
   else if (root->left == NULL && root->right == NULL) return 1;
   else return leaves_node(root->left) + leaves_node(root->right);
}

int main() {
   cin.tie(0)->ios_base::sync_with_stdio(false);
   vector<int> a(15);

   for (int i=0; i<15; i++) {
      cin >> a[i];
      createTree(a[i]);
   }
    
   cout << "Duplicate numbers are : \n";
   vector<bool> is_visited(a.size(), false);
   for (int i=0; i<a.size(); i++) {
      if (is_visited[i]) continue;
      int cnt = 1;
      for (int j=i+1; j<a.size(); j++) {
         if (a[i] == a[j]) cnt++, is_visited[j] = true;
      }
      if (cnt > 1) cout << a[i] << "\t" << cnt << "\ttimes" << endl;
   }
   
   int res1 = leaves_node(root);
   int res2 = tree_height(root);
   
   inOrder(root);
   cout << tree_max() << endl;
   cout << tree_min() << endl;
   cout << res1 << endl;
   cout << res2;
   
   return 0;
}