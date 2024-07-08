#include <iostream>
using namespace std;

class MasukUniversitas(string snbt, snbp)
{

    public : string snbt, snbp;

    int uangPendaftaran;


    // isi daftar variable yang dibutuhkan di bawah ini
    public:
    MasukUniversitas()
    {
        uangPendaftaran = 0;

        // isi nilai default variable yang dibutuhkan di bawah ini
    }
    virtual void namaJalurMasuk() { return; }
    // isi disini dengan fungsi virtual yang dibutuhkan
    {
        cout << "SNBT =" << snbt << endl;
        cout << "SNBP =" << snbp << endl;
    }
    void setUangPendaftaran(int nilai)
    {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran()
    {
        return uangPendaftaran;
    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas
{
    string biaya;

    uangpendaftaran(string pbiaya) 
    {
        cout << "uang pendaftaran\n" << endl;
    }
    uangbangunan(string pbiaya) 
    {
        cout << "uang bangunan\n" << endl;
    }
    uangsemester(string pbiaya) 
    {
        cout << "uang semester\n" << endl;
    }
    
     // isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas 
{
    uangpendaftaran(string pbiaya) 
    {
        cout << "uang pendaftaran\n" << endl;
    }
    uangbangunan(string pbiaya) 
    {
        cout << "uang bangunan\n" << endl;
    }
    uangsemester(string pbiaya) 
    {
        cout << "uang semester\n" << endl;
    }
    // isi disini untuk melengkapi class SNBP
};
int main()
{
    cout << snbt();
    cout << snbp();

    return 0;
 // isi disini untuk fungsi main
}