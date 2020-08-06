#include <cstdio>
#include <cstdlib>
using namespace std;

const int Inf = 1000000000;
const int threshold = 50000;
const int maxn = 1000;

int n, a[maxn], b[maxn];
bool put_a[maxn];
int total_a, total_b;

double ans;
int f[threshold];
int min(int a,int b)
{
  return a>b?b:a;
}
int main() {
    scanf("%d", &n);
    total_a = total_b = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", a + i, b + i);
        if (a[i] <= b[i]) total_a += a[i];
        else total_b += b[i];
    }
    ans = total_a + total_b;
    total_a = total_b = 0;
    for (int i = 0; i < n; ++i) {
        if ( a[i] * 0.95 <= b[i]) {
            put_a[i] = true;
            total_a += a[i];
        } else {
            put_a[i] = false;
            total_b += b[i];
        }
    }
    if ( total_a >= threshold ) {
        printf("%.2f", total_a * 0.95 + total_b);
        return 0;
    }
    f[0] = 0;
    for (int i = 1; i < threshold; ++i)
        f[i] = Inf;
    int total_b_prefix = 0;
    for (int i = 0; i < n; ++i)
        if (!put_a[i]) {
            total_b_prefix += b[i];
            for (int j = threshold - 1; j >= 0; --j) {
                if ( total_a + j + a[i] >= threshold && f[j] != Inf)
                    ans = min(ans, (total_a + j + a[i]) * 0.95 + f[j] + total_b - total_b_prefix );
                f[j] = min(f[j] + b[i], j >= a[i] ? f[j - a[i]] : Inf);
            }
        }
    printf("%.2f", ans);
    return 0;
}
