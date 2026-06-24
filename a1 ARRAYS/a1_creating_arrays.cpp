// ========================================
// 1. Create an Array with Fixed Size
// ========================================

#include <iostream>
using namespace std;

int main() {
    int arr[5];   // fixed size array

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
OUTPUT:
10 20 30 40 50
*/



// ========================================
// 2. Create and Initialize Array Together
// ========================================

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
OUTPUT:
10 20 30 40 50
*/




/// ========================================
// 3. Partial Initialization of Array
// ========================================

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20};   // remaining elements = 0

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
OUTPUT:
10 20 0 0 0
*/


// ========================================
// 4. Array Without Size (Auto Size)
// ========================================

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
OUTPUT:
1 2 3 4 5
*/


// ========================================
// 5. Dynamic Array using new Keyword
// ========================================

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // array size

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;   // free memory
    return 0;
}

/*
INPUT:
5

OUTPUT:
1 2 3 4 5
*/


// ========================================
// 6. Array using Vector (Recommended)
// ========================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};

    arr.push_back(50);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
OUTPUT:
10 20 30 40 50
*/


// ========================================
// 7. Array of Any Size Initialized with 0
// ========================================

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0};   // works for any size

    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
OUTPUT:
0 0 0 0 0 0 0 0 0 0
*/
