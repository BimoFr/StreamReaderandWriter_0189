#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 3.5; //melemparkan intejer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi 
        cout << a << " : Pengecualian akan dieksekusi" << endl;

    }
    catch (...) {
        /*jika selain intejer maka block ini akan dieksekusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }
    return 0;
};