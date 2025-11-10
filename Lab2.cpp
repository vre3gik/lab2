// 1
#include <iostream>
using namespace std;

int countedinic(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    cout << countedinic(52) << endl;
    return 0;
}


// 2
#include <iostream>
#include <cmath>
using namespace std;

bool arifprog(int n) {
    if (n < 10) {
        return true;
    }
    n = abs(n);
    int last = n % 10;
    n /= 10;
    int predid = n % 10;
    int razn = last - predid;
    
    while (n >= 10) {
        last = predid;
        predid = n % 10;
        n /= 10;
        if (last - predid != razn) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << arifprog(1234) << endl;
    return 0;
}


// 3
#include <iostream>
using namespace std;

bool vorobeyprime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << vorobeyprime(17) << endl;
    return 0;
}

// 4
#include <iostream>
using namespace std;

int ydalenie(int n) {
    int result = 0, razr = 1;
    while (n) {
        int num = n % 10;
        if (num != 3 && num != 7) {
            result += num * razr;
            razr *= 10;
        }
        n /= 10;
    }
    return result;
}

int main() {
    cout << ydalenie(1379) << endl;
    return 0;
}


// 5
#include <iostream>
#include <cmath>
using namespace std;

int summa(int n) {
    int sum = 0;
    n = abs(n);
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    cout << summa(123) << endl;
    return 0;
}


// 6
#include <iostream>
#include <cmath>
using namespace std;

bool delitsya(int n) {
    int n2 = abs(n);
    while (n2) {
        int num = n2 % 10;
        if (num != 0 && n % num != 0) {
            return false;
        }
        n2 /= 10;
    }
    return true;
}

int main() {
    cout << delitsya(128) << endl;
    return 0;
}


// 7
#include <iostream>
using namespace std;

bool stepdvoiki(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    cout << stepdvoiki(16) << endl;
    return 0;
}


// 8
#include <iostream>
using namespace std;

int nod(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << nod(54, 24) << endl;
    return 0;
}

// 9
#include <iostream>
using namespace std;

int govno(int p) {
    int res = 0;
    while (p) {
        res = (res << 1) | (p & 1);
        p >>= 1;
    }
    return res;
}

int main() {
    cout << govno(6) << endl;
    return 0;
}


// 10
#include <iostream>
using namespace std;

bool soversh(int n) {
    if (n <= 1) { 
        return false;
    }
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum == n;
}

int main() {
    cout << soversh(28) << endl;
    return 0;
}


// 11
#include <iostream>
using namespace std;

int summ(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum;
}

bool friends(int a, int b) {
    return a != b && summ(a) == b && summ(b) == a;
}

int main() {
    cout << friends(220, 284) << endl;
    return 0;
}

// 12
#include <iostream>
using namespace std;

int count_dels(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += 2;
            if (i * i == n) {
                count--;
            }
        }
    }
    return count;
}

int main() {
    cout << count_dels(12) << endl;
    return 0;
}


// 13
#include <iostream>
using namespace std;

int nodevkl(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << nodevkl(48, 18) << endl;
    return 0;
}


// 14
#include <iostream>
using namespace std;

int koren(int n) {
    while (n > 9) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    cout << koren(34697) << endl;
    return 0;
}


// 15
#include <iostream>
using namespace std;

bool simet(int n) {
    if (n < 0) return false;
    int revers = 0, norm = n;
    while (n) {
        revers = revers * 10 + n % 10;
        n /= 10;
    }
    return norm == revers;
}

int main() {
    cout << simet(3443) << endl;
    return 0;
}



// 16
#include <iostream>
using namespace std;

int bitvichit(int a, int b) {
    while (b) {
        int bit = (~a) & b;
        a = a ^ b;
        b = bit << 1;
    }
    return a;
}

int main() {
    cout << bitvichit(15, 7) << endl;
    return 0;
}

// 17
#include <iostream>
using namespace std;

int perevod(int n) {
    int res = 0, stepen = 1;
    while (n) {
        res += (n % 10) * stepen;
        n /= 10;
        stepen *= 7;
    }
    return res;
}

int main() {
    cout << perevod(123) << endl;
    return 0;
}


// 18
#include <iostream>
using namespace std;

bool palindr(int n) {
    if (n < 0) return false;
    int revers = 0, norm = n;
    while (n) {
        revers = revers * 10 + n % 10;
        n /= 10;
    }
    return norm == revers;
}

int main() {
    cout << palindr(12321) << endl;
    return 0;
}


// 19
#include <iostream>
#include <cmath>
using namespace std;

bool firstlastravn(int n) {
    if (n < 10) {
        return true;
    }
    n = abs(n);
    int last = n % 10;
    while (n >= 10) {
        n /= 10;
    }
    return n == last;
}

int main() {
    cout << firstlastravn(1231) << endl;
    return 0;
}


// 20
#include <iostream>
using namespace std;

double power(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / power(x, -n);
    double res = 1;
    while (n) {
        if (n & 1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}

int main() {
    cout << "2^5 = " << power(2, 5) << endl;
    return 0;
}



// 21
#include <iostream>
using namespace std;

int countedinich(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

void maxedin(int arr[], int size, int &num, int &countres) {
    num = 0;
    countres = 0;
    for (int i = 0; i < size; i++) {
        int count = countedinich(arr[i]);
        if (count > countres) {
            countres = count;
            num = arr[i];
        }
    }
}

int main() {
    int seq[] = {3, 7, 15, 31, 63};
    int num, maxCount;
    maxedin(seq, 5, num, maxCount);
    cout << "Макс единиц: число " << num << ", количество: " << maxCount << endl;
    return 0;
}


// 22
#include <iostream>
#include <cmath>
using namespace std;

bool arif(int n) {
    if (n < 10) {
        return true;
    }
    n = abs(n);
    int last = n % 10;
    n /= 10;
    int pred = n % 10;
    int razn = last - pred;
    while (n >= 10) {
        last = pred;
        pred = n % 10;
        n /= 10;
        if (last - pred != razn) {
            return false;
        }
    }
    return true;
}

void arifandmax(int arr[], int size, int &count, int &maxmin) {
    count = 0;
    maxmin = -1;
    for (int i = 0; i < size; i++) {
        if (arif(arr[i])) {
            count++;
            if (arr[i] > maxmin) maxmin = arr[i];
        }
    }
}

int main() {
    int arr[] = {123, 456, 789, 111, 246};
    int count, maxmin;
    arifandmax(arr, 5, count, maxmin);
    cout << "Арифм. прогрессий: " << count << ", макс: " << maxmin << endl;
    return 0;
}


// 23
#include <iostream>
using namespace std;

bool prost(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void prostandmax(int arr[], int size, int &count, int &orime) {
    count = 0;
    orime = -1;
    for (int i = 0; i < size; i++) {
        if (prost(arr[i])) {
            count++;
            if (arr[i] > orime) {
                orime = arr[i];
            }
        }
    }
}

int main() {
    int arr[] = {2, 4, 7, 9, 11, 15};
    int count, orime;
    prostandmax(arr, 6, count, orime);
    cout << "Простых чисел: " << count << ", макс: " << orime << endl;
    return 0;
}


// 24
#include <iostream>
using namespace std;

int ydalenit37(int n) {
    int res = 0, stepen = 1;
    while (n) {
        int num = n % 10;
        if (num != 3 && num != 7) {
            res += num * stepen;
            stepen *= 10;
        }
        n /= 10;
    }
    return res;
}

void govno(int arr[], int size, int &count, int &min) {
    count = 0;
    min = 10000000;
    for (int i = 0; i < size; i++) {
        int peredelannum = ydalenit37(arr[i]);
        if (peredelannum != arr[i]) {
            count++;
            if (peredelannum < min) {
                min = peredelannum;
            }
        }
    }
}

int main() {
    int arr[] = {2412, 123, 42421, 32154, 1379};
    int count, min;
    govno(arr, 5, count, min);
    cout << "Преобразованных: " << count << ", мин: " << min << endl;
    return 0;
}


// 25
#include <iostream>
#include <cmath>
using namespace std;

int summa(int n) {
    int sum = 0;
    n = abs(n);
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void countres(int arr[], int size, int &count, int &max) {
    count = 0;
    max = -1;
    for (int i = 0; i < size; i++) {
        if (summa(arr[i]) % 7 == 0) {
            count++;
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }
}

int main() {
    int arr[] = {16, 25, 34, 43, 52};
    int count, max;
    countres(arr, 5, count, max);
    cout << "Сумма цифр кратна 7: " << count << ", макс: " << max << endl;
    return 0;
}


// 26
#include <iostream>
#include <cmath>
using namespace std;

bool delyatsya(int n) {
    int temp = abs(n);
    while (temp) {
        int num = temp % 10;
        if (num != 0 && n % num != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

void countres(int arr[], int size, int &count, int &min) {
    count = 0;
    min = 10000000;
    for (int i = 0; i < size; i++) {
        if (delyatsya(arr[i])) {
            count++;
            if (arr[i] < min) {
                min = arr[i];
            }
        }
    }
}

int main() {
    int arr[] = {128, 144, 155, 222, 248};
    int count, min;
    countres(arr, 5, count, min);
    cout << "Делится на все цифры: " << count << ", мин: " << min << endl;
    return 0;
}


// 28
#include <iostream>
using namespace std;

int nod(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nodarr(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = nod(result, arr[i]);
    }
    return result;
}

int mokarr(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = (result * arr[i]) / nod(result, arr[i]);
    }
    return result;
}

int main() {
    int arr[] = {12, 18, 24};
    cout << "НОД(12,18,24) = " << nodarr(arr, 3) << ", НОК = " << mokarr(arr, 3) << endl;
    return 0;
}



// 29
#include <iostream>
using namespace std;

int countedin(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int perevorot(int p) {
    int result = 0;
    while (p) {
        result = (result << 1) | (p & 1);
        p >>= 1;
    }
    return result;
}

void countres(int arr[], int size, int &count) {
    count = 0;
    for (int i = 0; i < size && arr[i] != 0; i++) {
        int P = countedin(arr[i]);
        int M = perevorot(arr[i]);
        if (P == M) count++;
    }
}

int main() {
    int arr[] = {3, 5, 7, 9, 0};
    int count;
    countres(arr, 5, count);
    cout << "P = M: " << count << " чисел" << endl;
    return 0;
}


// 30
#include <iostream>
using namespace std;

bool ideal(int n) {
    if (n <= 1) {
        return false;
    }
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

void count_res(int arr[], int size, int &count, int &maxideal) {
    count = 0;
    maxideal = -1;
    for (int i = 0; i < size && arr[i] != 0; i++) {
        if (ideal(arr[i])) {
            count++;
            if (arr[i] > maxideal) maxideal = arr[i];
        }
    }
}

int main() {
    int arr[] = {6, 28, 12, 496, 8128, 0};
    int count, maxideal;
    count_res(arr, 6, count, maxideal);
    cout << "Совершенных: " << count << ", макс: " << maxideal << endl;
    return 0;
}


// 31
#include <iostream>
using namespace std;

int summa(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

bool friends(int a, int b) {
    return a != b && summa(a) == b && summa(b) == a;
}

void firstpara(int n, int &a, int &b) {
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (friends(i, j)) {
                a = i;
                b = j;
                return;
            }
        }
    }
    a = b = -1;
}

int main() {
    int a, b;
    firstpara(300, a, b);
    cout << "Первая дружественная пара: " << a << " и " << b << endl;
    return 0;
}


// 32
#include <iostream>
using namespace std;

int delitels(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += 2;
            if (i * i == n) count--;
        }
    }
    return count;
}

void maxandmindelitels(int arr[], int size, int &divmax, int &mindiv) {
    int maxcount = 0, mincount = 10000000;
    divmax = mindiv = arr[0];
    
    for (int i = 0; i < size; i++) {
        int divisors = delitels(arr[i]);
        if (divisors > maxcount) {
            maxcount = divisors;
            divmax = arr[i];
        }
        if (divisors < mincount) {
            mincount = divisors;
            mindiv = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 16, 24, 30, 60};
    int divmax, mindiv;
    maxandmindelitels(arr, 5, divmax, mindiv);
    cout << "Макс делителей: " << divmax << ", мин делителей: " << mindiv << endl;
    return 0;
}






// 2.1
#include <iostream>
#include <cmath>
using namespace std;

bool seveninnum(int n) {
    n = abs(n);
    while (n) {
        if (n % 10 == 7) return true;
        n /= 10;
    }
    return false;
}

bool prostoe(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int count_res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (seveninnum(arr[i]) && prostoe(arr[i]))
            count++;
    return count;
}

int main() {
    int arr[] = {7, 17, 27, 37, 47};
    cout << count_res(arr, 5) << endl;
    return 0;
}

// 2.2
#include <iostream>
#include <cmath>
using namespace std;

void yporyadposled() {
    int prednum, num;
    cout << "Введите последовательность для задачи 2: ";
    cin >> prednum;
    if (prednum < 0) {
        return;
    }
    bool yporyad = true;
    int count_error = 0;
    int max_rast = 0;
    while (true) {
        cin >> num;
        if (num < 0) break;
        
        if (num < prednum) {
            yporyad = false;
            count_error++;
        }
        max_rast = max(max_rast, abs(num - prednum));
        prednum = num;
    }
    if (yporyad) {
        cout << "Макс расстояние: " << max_rast << endl;
    }
    else {
        cout << "Нарушений: " << count_error << endl;
    }
}

int main() {
    yporyadposled();
    return 0;
}

// 2.3
#include <iostream>
#include <cmath>
using namespace std;

int summa(int n) {
    int sum = 0;
    n = abs(n);
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool steptroiki(int n) {
    if (n <= 0) return false;
    while (n % 3 == 0) n /= 3;
    return n == 1;
}

int count_res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = summa(arr[i]);
        if (steptroiki(sum)) count++;
    }
    return count;
}

int main() {
    int arr[] = {12, 18, 27, 36, 45};
    cout << count_res(arr, 5) << endl;
    return 0;
}

// 2.4
#include <iostream>
#include <cmath>
using namespace std;

bool firstpavnlast(int n) {
    if (n < 10) return true;
    n = abs(n);
    int last = n % 10;
    while (n >= 10) n /= 10;
    return n == last;
}

bool nozero(int n) {
    n = abs(n);
    while (n) {
        if (n % 10 == 0) return false;
        n /= 10;
    }
    return true;
}

void res(int arr[], int n) {
    for (int i = 0; i < n; i++)
        if (firstpavnlast(arr[i]) && nozero(arr[i])) {
            cout << arr[i] << " ";
        }
    cout << endl;
}

int main() {
    int arr[] = {121, 131, 141, 101, 151};
    res(arr, 5);
    return 0;
}

// 2.5
#include <iostream>
#include <cmath>
using namespace std;

bool stependvoiki(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
int summa(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int res_count(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size && arr[i] != 0; i++)
        if (stependvoiki(arr[i]) && summa(arr[i]) % 7 == 0)
            count++;
    return count;
}
int main() {
    int arr[] = {128, 64, 32, 16, 0};
    cout << res_count(arr, 5) << endl;
    return 0;
}

// 2.6
#include <iostream>
#include <cmath>
using namespace std;
bool firstbolshelast(int n) {
    if (n < 10) {
        return false;
    }
    n = abs(n);
    int last = n % 10;          
    while (n >= 10) {
        n /= 10;
    }     
    return n > last;
}
bool ymenshautsya(int n) {
    n = abs(n);
    int temp = n;
    int divisor = 1;
    while (temp >= 10) {
        divisor *= 10;
        temp /= 10;
    }
    temp = n;
    while (divisor >= 10) {
        int currnum = temp / divisor;              
        int nextnum = (temp / (divisor / 10)) % 10;       
        if (currnum <= nextnum) {
            return false;
        }
        temp %= divisor;    
        divisor /= 10;     
    }
    return true;
}
int count_res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (firstbolshelast(arr[i]) && ymenshautsya(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {321, 431, 541, 651, 761, 852, 963, 111, 123, 21};
    cout << count_res(arr, 10) << endl;
}


// 2.7
#include <iostream>
#include <cmath>
using namespace std;

bool prostoe(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool mersen(int n) {
    return prostoe(n) && ((n + 1) & n) == 0;
}

void count_res(int arr[], int n, int &countmers, int &countnemers) {
    countmers = 0;
    countnemers = 0;
    for (int i = 0; i < n; i++) {
        if (prostoe(arr[i])) {
            if (mersen(arr[i])) countmers++;
            else countnemers++;
        }
    }
}

int main() {
    int arr[] = {3, 7, 15, 31, 17, 19};
    int mers, nomerse;
    count_res(arr, 6, mers, nomerse);
    cout << "Мерсена: " << mers << ", простых не Мерсена: " << nomerse << endl;
    return 0;
}

// 2.8
#include <iostream>
#include <cmath>
using namespace std;

bool trinotinnum(int n) {
    n = abs(n);
    while (n) {
        if (n % 10 == 3) {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool delyatsya(int n) {
    int temp = abs(n);
    while (temp) {
        int digit = temp % 10;
        if (digit != 0 && n % digit != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

void res(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (trinotinnum(arr[i]) && delyatsya(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 24, 36, 48, 124};
    res(arr, 5);
    return 0;
}

// 2.9
#include <iostream>
#include <cmath>
using namespace std;

bool nechetcount(int n) {
    int count = 0;
    n = abs(n);
    while (n) {
        count++;
        n /= 10;
    }
    return count % 2 == 1;
}

bool palindome(int n) {
    if (n < 0) return false;
    int revers = 0, norm = n;
    while (n) {
        revers = revers * 10 + n % 10;
        n /= 10;
    }
    return norm == revers;
}

int count_res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (nechetcount(arr[i]) && palindome(arr[i]))
            count++;
    return count;
}

int main() {
    int arr[] = {121, 1331, 12321, 1221, 123};
    cout << count_res(arr, 5) << endl;
    return 0;
}

// 2.10
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countblizn(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (prime(arr[i]) && prime(arr[i+1]) && abs(arr[i] - arr[i+1]) == 2) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {3, 5, 7, 11, 13, 17, 19};
    cout << countblizn(arr, 7) << endl;
    return 0;
}

// 2.11
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool firstpavmlast(int n) {
    if (n < 10) {
        return true;
    }
    n = abs(n);
    int last = n % 10;
    while (n >= 10) {
        n /= 10;
    }
    return n == last;
}

int count_res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (prime(arr[i]) && firstpavmlast(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {11, 13, 17, 19, 101, 131};
    cout << count_res(arr, 6) << endl;
    return 0;
}

// 2.12
#include <iostream>
#include <cmath>
using namespace std;

bool troikainnum(int n) {
    n = abs(n);
    while (n) {
        if (n % 10 == 3) {
            return true;
        }
        n /= 10;
    }
    return false;
}

double avg(int arr[], int n) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
        if (troikainnum(arr[i])) {
            sum += arr[i];
            count++;
        }
    if (count > 0) {
        return (double)sum / count;
    } 
    else {
        return 0;
    }
}

int main() {
    int arr[] = {13, 23, 33, 40, 50};
    cout << avg(arr, 5) << endl;
    return 0;
}

// 2.13
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int revers(int n) {
    int reverss = 0;
    while (n) {
        reverss = reverss * 10 + n % 10;
        n /= 10;
    }
    return reverss;
}

int count_revers(int arr[], int n) {
    int firstprime = -1;
    for (int i = 0; i < n; i++) {
        if (prime(arr[i])) {
            firstprime = arr[i];
            break;
        }
    if (firstprime == -1) {
        return 0;
    }
    }
    int reversed = revers(firstprime);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == reversed) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {13, 31, 17, 19, 31};
    cout << count_revers(arr, 5) << endl;
    return 0;
}

// 2.14
#include <iostream>
#include <cmath>
using namespace std;

bool stepentroiki(int n) {
    if (n <= 0) {
        return false;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int summa(int n) {
    int sum = 0;
    n = abs(n);
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int count_num(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size && arr[i] != 0; i++)
        if (stepentroiki(arr[i]) && summa(arr[i]) == 9)
            count++;
    return count;
}

int main() {
    int arr1[] = {27, 81, 36, 0};
    int arr2[] = {9, 18, 27, 0};
    int arr3[] = {81, 162, 243, 0};
    cout << count_num(arr1, 4) << endl;
    cout << count_num(arr2, 4) << endl;
    cout << count_num(arr3, 4) << endl;
    return 0;
}

// 2.15
#include <iostream>
#include <cmath>
using namespace std;

double koef(double coef[], int n, double x) {
    double result = 0;
    for (int i = 0; i <= n; i++) {
        result += coef[i] * pow(x, n - i);
    }
    return result;
}

int main() {
    double coefP[] = {1, 2, 3};
    double coefQ[] = {2, 1, 1};
    double x = 2;
    double Px = koef(coefP, 2, x);
    double Qx = koef(coefQ, 2, x);
    double result = koef(coefP, 2, x + Qx * koef(coefP, 2, x + 1));
    cout << result << endl;
    return 0;
}

// 2.16
#include <iostream>
#include <cmath>
using namespace std;

bool palindrome(int n) {
    if (n < 0) return false;
    int reversed = 0, original = n;
    while (n) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int summa(int n) {
    int sum = 0;
    n = abs(n);
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool result(int arr[], int n) {
    int sum = -1;
    for (int i = 0; i < n; i++) {
        if (palindrome(arr[i])) {
            if (sum == -1) {
                sum = summa(arr[i]);
            }
            else if (summa(arr[i]) != sum) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int arr[] = {151, 232};
    cout << result(arr, 2) << endl;
    return 0;
}

// 2.17
#include <iostream>
#include <cmath>
using namespace std;

int firstnum(int n) {
    n = abs(n);
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

bool nol(int n) {
    if (n == 0) {
        return false;
    }
    int digit = firstnum(n);
    return digit != 0 && n % digit == 0;
}

int summa(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size && arr[i] >= 0; i++) {
        sum += arr[i];
    }
    if (sum == 0) {
        return sum;  
    } 
    else {
        return -1;
    }
}

int main() {
    int arr[] = {10, 20, 30, -1};
    cout << summa(arr, 4) << endl;
    return 0;
}

// 2.18
#include <iostream>
#include <cmath>
using namespace std;

bool ideal(int n) {
    if (n <= 1) {
        return false;
    }
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

void count_res(int arr[], int n, int &count, int &idealmax) {
    count = 0;
    idealmax = -1;
    for (int i = 0; i < n; i++) {
        if (ideal(arr[i])) {
            count++;
            if (arr[i] > idealmax) {
                idealmax = arr[i];
            }
        }
    }
}

int main() {
    int arr[] = {6, 28, 12, 496, 8128};
    int count, idealmax;
    count_res(arr, 5, count, idealmax);
    cout << "Количество: " << count << ", максимальное: " << idealmax << endl;
    return 0;
}

// 2.19
#include <iostream>
#include <cmath>
using namespace std;

double mngchlen(double coef[], int n, double x) {
    double result = 0;
    for (int i = 0; i <= n; i++) {
        result += coef[i] * pow(x, n - i);
    }
    return result;
}
double proizv(double coef[], int n, double x) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += coef[i] * (n - i) * pow(x, n - i - 1);
    }
    return result;
}

int main() {
    double coef1[] = {1, 2, 3};
    double coef2[] = {2, 1, 1};
    double x = 2;
    double val1 = mngchlen(coef1, 2, x);
    double der1 = proizv(coef1, 2, x);
    double val2 = mngchlen(coef2, 2, x);
    double der2 = proizv(coef2, 2, x);
    cout << "Первый - значение: " << val1 << ", производная: " << der1 << endl;
    cout << "Второй - значение: " << val2 << ", производная: " << der2 << endl;
    return 0;
}

// 2.20
#include <iostream>
#include <cmath>
using namespace std;

bool countnchet(int n) {
    int count = 0;
    n = abs(n);
    while (n) {
        count++;
        n /= 10;
    }
    return count % 2 == 1;
}

int countprime(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            count++;
            n /= i;
        }
    }
    if (n > 1) {
        count++;
    }
    return count;
}

int count_res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (countnchet(arr[i]) && countprime(arr[i]) == 3) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {30, 42, 66, 70, 78};
    cout << "Количество: " << count_res(arr, 5) << endl;
    return 0;
}

// 2.21
#include <iostream>
#include <cmath>
using namespace std;

bool chetcountnum(int n) {
    int count = 0;
    n = abs(n);
    while (n) {
        count++;
        n /= 10;
    }
    return count % 2 == 0;
}

int countprime(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            count++;
            n /= i;
        }
    }
    if (n > 1) {
        count++;
    }
    return count;
}

int count_res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (chetcountnum(arr[i]) && countprime(arr[i]) == 2) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {6, 10, 14, 15, 21};
    cout << "Количество: " << count_res(arr, 5) << endl;
    return 0;
}

// 2.22
#include <iostream>
#include <cmath>
using namespace std;

bool troikainnum(int n) {
    n = abs(n);
    while (n) {
        if (n % 10 == 3) {
            return true;
        }
        n /= 10;
    }
    return false;
}

bool prostoe(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int count_res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (troikainnum(arr[i]) && prostoe(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {3, 13, 23, 31, 37};
    cout << "Количество: " << count_res(arr, 5) << endl;
    return 0;
}

// 2.23
#include <iostream>
#include <cmath>
using namespace std;

bool firstneravnlast(int n) {
    if (n < 10) {
        return false;
    }
    n = abs(n);
    int last = n % 10;
    while (n >= 10) {
        n /= 10;
    }
    return n != last;
}

bool nozero(int n) {
    n = abs(n);
    while (n) {
        if (n % 10 == 0) {
            return false;
        }
        n /= 10;
    }
    return true;
}

void res_num(int arr[], int n) {
    cout << "Числа: ";
    for (int i = 0; i < n; i++) {
        if (firstneravnlast(arr[i]) && nozero(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {123, 134, 145, 156, 167};
    res_num(arr, 5);
    return 0;
}

// 2.24
#include <iostream>
#include <cmath>
using namespace std;

int summa(int n) {
    int sum = 0;
    n = abs(n);
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void res_num(int arr[], int n) {
    cout << "Числа: ";
    for (int i = 0; i < n; i++) {
        if (summa(arr[i]) > 15) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {789, 888, 999, 1234, 567};
    res_num(arr, 5);
    return 0;
}

// 2.25 
#include <iostream>
#include <cmath>
using namespace std;

int proizveden(int n) {
    int product = 1;
    n = abs(n);
    while (n) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

void res_num(int arr[], int size) {
    cout << "25. Числа: ";
    for (int i = 0; i < size && arr[i] >= 0; i++) {
        if (proizveden(arr[i]) < 15) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 23, 34, 45, -1};
    res_num(arr, 5);
    return 0;
}

// 2.26
#include <iostream>
#include <cmath>
using namespace std;

bool count_num_is_chet(int n) {
    int count = 0;
    n = abs(n);
    while (n) {
        count++;
        n /= 10;
    }
    return count % 2 == 0;
}

bool palindrome(int n) {
    if (n < 0) {
        return false;
    }
    int revers = 0, norm = n;
    while (n) {
        revers = revers * 10 + n % 10;
        n /= 10;
    }
    return norm == revers;
}

int count_Res(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count_num_is_chet(arr[i]) && palindrome(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1221, 1331, 123321, 123, 456};
    cout << count_Res(arr, 5) << endl;
    return 0;
}

// 2.27
#include <iostream>
#include <cmath>
using namespace std;

void govno(int arr[], int size) {
    if (size == 0) {
        return;
    }
    bool ybivanie = true;
    int count_error = 0;
    int maxrast = 0;
    for (int i = 1; i < size && arr[i] >= 0; i++) {
        if (arr[i] > arr[i-1]) {
            ybivanie = false;
            count_error++;
        }
        maxrast = max(maxrast, abs(arr[i] - arr[i-1]));
    }
    if (ybivanie) {
        cout << "Макс расстояние: " << maxrast << endl;
    }
    else {
        cout << "Нарушений: " << count_error << endl;
    }
}

int main() {
    int arr[] = {10, 8, 6, 4, 2, -1};
    govno(arr, 6);
    return 0;
}

// 2.28
#include <iostream>
using namespace std;


bool firstLessLast(int n) {
    if (n < 10) return false; 
    n = abs(n);
    int last = n % 10;       
    while (n >= 10) n /= 10;  
    return n < last;
}
bool digitsAscending(int n) {
    n = abs(n);
    int divisor = 1;
    int temp = n;
    while (temp >= 10) {
        divisor *= 10;
        temp /= 10;
    }
    
    temp = n;
    while (divisor >= 10) {
        int current_digit = temp / divisor;
        int next_digit = (temp / (divisor / 10)) % 10;
        
        if (current_digit >= next_digit) {
            return false;  
        }
        
        temp %= divisor;
        divisor /= 10;
    }
    return true;
}

int countNumbers(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (firstLessLast(arr[i]) && digitsAscending(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {123, 134, 145, 156, 167,  
                 121, 132, 189, 234, 345,  
                 321, 432, 543, 654, 765,  
                 111, 122, 133, 144, 155};
    int size = 20;
    cout << countNumbers(arr, size) << endl;
    return 0;
}







//1 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MAX_SIZE 1000


bool palindrome(int num) {
    int izn = num;
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return izn == reverse;
}

void input_nums(int arr[], int n) {
    cout << "Введите " << n << " элементов массива (целые числа от 1 до 999999):" << endl;
    for (int i = 0; i < n; i++) {
        while (!(cin >> arr[i]) || arr[i] <= 0 || arr[i] >= 1000000) {
            cout << "Ошибка! Введите целое число от 1 до 999999: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}

void randomInput(int arr[], int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 999998 + 1; 
    }
    cout << "Массив заполнен " << n << " рандомными числами!" << endl;
}

int palindromelist(int Z[], int B[], int M) {
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (palindrome(Z[i])) {
            B[count] = Z[i];
            count++;
        }
    }
    return count;
}

int main() {
    int Z[MAX_SIZE], B[MAX_SIZE];
    int M = 0;
    cout << "Введите количество чисел списка (1-" << MAX_SIZE-1 << "): ";
    while (!(cin >> M) || M <= 0 || M >= MAX_SIZE) {
        cout << "Ошибка! Введите число от 1 до " << MAX_SIZE-1 << ": ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    int choice;
    cout << "\nВыберите способ ввода:" << endl;
    cout << "1. Пользователем" << endl;
    cout << "2. Случайные числа" << endl;
    cout << "Ваш выбор: ";
    while (!(cin >> choice) || (choice != 1 && choice != 2)) {
        cout << "Ошибка! Выберите 1 или 2: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    if (choice == 1) {
        input_nums(Z, M);
    } else {
        randomInput(Z, M);
    }
    int count = palindromelist(Z, B, M);
    if (M == 0) {
        cout << "Массив Z пустой." << endl;
    } else {
        cout << "Массив Z " << endl;
        for (int i = 0; i < M; i++) {
            cout << Z[i] << " ";
            if ((i + 1) % 10 == 0) {
                cout << endl;
            }
        }
        cout << endl;
    }
    if (count > 0) {
        cout << "Массив B :" << endl;
        for (int i = 0; i < count; i++) {
            cout << B[i] << " ";
            if ((i + 1) % 10 == 0) {
                cout << endl;
            }
        }
        cout << endl;
    } else {
        cout << "В массиве нет палиндромов." << endl;
    }
    return 0;
}