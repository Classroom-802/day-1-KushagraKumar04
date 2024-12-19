#include <iostream>
#include <vector>
using namespace std;

class Matrix {
public:
    void operate(vector<vector<int>> &a, vector<vector<int>> &b, int op) {
        if (op == 1) {
            if (a.size() != b.size() || a[0].size() != b[0].size()) {
                cout << "Invalid dimensions for operation." << endl;
                return;
            }
            for (size_t i = 0; i < a.size(); i++) {
                for (size_t j = 0; j < a[0].size(); j++) {
                    cout << a[i][j] + b[i][j] << " ";
                }
                cout << endl;
            }
        } else if (op == 2) {
            if (a[0].size() != b.size()) {
                cout << "Invalid dimensions for operation." << endl;
                return;
            }
            vector<vector<int>> result(a.size(), vector<int>(b[0].size(), 0));
            for (size_t i = 0; i < a.size(); i++) {
                for (size_t j = 0; j < b[0].size(); j++) {
                    for (size_t k = 0; k < b.size(); k++) {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            for (const auto &row : result) {
                for (int val : row) {
                    cout << val << " ";
                }
                cout << endl;
            }
        } else {
            cout << "Invalid operation." << endl;
        }
    }
};

int main() {
    int m, n, p, op;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cin >> n >> p;
    vector<vector<int>> b(n, vector<int>(p));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            cin >> b[i][j];

    cin >> op;

    Matrix matrix;
    matrix.operate(a, b, op);

    return 0;
}
