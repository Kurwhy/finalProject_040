#include <iostream> 
using namespace std; 

class MataKuliah 
{
private:
float presensi;  	
float activity;  	
float exercise;  	
float tugasAkhir; 
public:
    MataKuliah() {
        presensi = 0;  	 	
        activity = 0;  	 	
        exercise = 0;
        tugasAkhir = 0;

    }
    virtual float hitungNilaiAkhir() {return 0;}
    virtual void cekKelulusan() {return;}  	
    virtual void input() {return ;}


    void setP(float nilai) {
        this->presensi = nilai;
    }

    float getP() {
        return presensi;
    }

    void setA(float nilai) {
        this->activity = nilai;
    }

    float getA() {
        return activity;
    }

    void setE(float nilai) {
        this->exercise = nilai;
    }

    float getE() {
        return exercise;
    }

    void setUA(float nilai) {
        this->tugasAkhir = nilai;
    }

    float getUA() {
        return tugasAkhir;
    }

};
class Pemrograman : public MataKuliah {
public:
    float hitungNilaiAkhir() {
        return ((10 * getP()) / 100) + ((20 * getA()) / 100) + ((30 * getE()) / 100) + ((40 * getUA()) / 100);
    }

    void cekKelulusan() {
        float  {
            if (h >= 75) {
                return " Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir 75  ";
            }
            else {
                return "Apakah anda ingin mengulang program? Y/N";
            }
        }
    }

    void input() {
        cout << "Masukkan Nilai Presensi:";
        int presensi;
        cin >> presensi;
        setP(presensi);
    
        cout << "Masukkan Nilai Activity:";
        int activity;
        cin >> activity;
        setA(activity);
    
        cout << "Masukkan Nilai Exercise:";
        int exercise;
        cin >> exercise;
        setE(exercise);
   
        cout << "Masukkan Nilai TugasAkhir:";
        int tugasAkhir;
        cin >> tugasAkhir;
        setUA(tugasAkhir);
    }
};
int main() {
    Pemrograman a;
    a.input();
    a.hitungNilaiAkhir();
    a.cekKelulusan();
}
