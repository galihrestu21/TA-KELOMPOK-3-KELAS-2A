// header 
#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
//Tipe Data 
struct nilai{
    string npm, nama;
    int n_absen, n_tugas, n_uts, n_uas, n_praktikum, n_total;
    string keterangan;
    char grade;
};  nilai mhs[4];
	
void NilaiAkhir(){
	for(int i=0; i<4; i++){
    mhs[i].n_total = (mhs[i].n_absen*10/100)+(mhs[i].n_tugas*30/100)+(mhs[i].n_uts*20/100)+(mhs[i].n_uas*20/100)+(mhs[i].n_praktikum*20/100);
	}
}
void tabel_nilai(){
	//Output Untuk Tabel Nilai Mahasiswa
		cout << "\n\t===================================================================================================================================================="<<endl;
		cout << "\t|\t\t\t\t\t\t\t TABEL NILAI                                                                               |"<<endl;
        cout << "\t===================================================================================================================================================="<<endl;
		cout << "\t|     Nama              |     NPM       | n_absen | n_tugas |  n_uts  |     n_uas         | n_praktikum | Nilai Total | Grade       |  Keterangan  |"<<endl;
		cout << "\t===================================================================================================================================================="<<endl;
		for(int i=0; i<4; i++){
				cout << "\t|  "<< mhs[i].nama <<"\t|      "<< mhs[i].npm <<"|       "<< mhs[i].n_absen <<"|       "<< mhs[i].n_tugas<<"|       "<< mhs[i].n_uts <<"|          "<< mhs[i].n_uas <<"       |      "<< mhs[i].n_praktikum << "     |       "<<mhs[i].n_total<<"    |         "<<mhs[i].grade<<"   |   "<<mhs[i].keterangan<<endl;
		}cout << "\t===================================================================================================================================================="<<endl;
}
//Sub Program
void menu(){
    int pil;
	  do{
	    cout<<"\n\t\t\t=================================================="<<endl;
        cout<<"\t\t\t||\tProgram Penilaian Akhir Mahasiswa       ||"<<endl;
        cout<<"\t\t\t||\t    Universitas Pakuan Bogor            ||"<<endl;
        cout<<"\t\t\t||\t     Ilmu Komputer Kelas A              ||"<<endl;
        cout<<"\t\t\t||\t      Mata Kuliah Algopro               ||"<<endl;
        cout<<"\t\t\t=================================================="<<endl;
	    cout<<"\t\t\t||10. DAFTAR NAMA MAHASISWA KELAS A             ||"<<endl;
	    cout<<"\t\t\t||11. Tabel Nilai                               ||"<<endl;
        cout<<"\t\t\t||12. Exit                                      ||"<<endl;
        cout<<"\t\t\t=================================================="<<endl;
        cout<<endl;
        cout<<"\t\t\tMasukan Pilihan : ";
        cin >> pil;
        if (pil==10)
        {
            cout<<"\n\t\t\t=================================================="<<endl;
            cout<<"\t\t\t||        DAFTAR NAMA MAHASISWA KELAS A         ||"<<endl;
            cout<<"\t\t\t||==============================================||"<<endl;
            cout<<"\t\t\t||1. Galih Restu Fauzi                          ||"<<endl;
            cout<<"\t\t\t||2. Marchel Mahesa                             ||"<<endl;
            cout<<"\t\t\t||3. Muhamad Ridwan                             ||"<<endl;
            cout<<"\t\t\t||4. Abdul Mun'im                               ||"<<endl;
            cout<<"\t\t\t=================================================="<<endl;
            cout<<endl;
            cout<<"\t\t\tMasukan Pilihan : ";
            
		            cin >> pil;
		            switch(pil)
		            {
		            case 1:
		            	mhs[0].nama = "Galih Restu Fauzi ";
		            	mhs[0].npm = "065121014";
		             cout<<"\n\t\t\t=================================================="<<endl;
		            cout<<"\t\t\t||Nama           : Galih Restu Fauzi            ||"<<endl;
		            cout<<"\t\t\t||NPM            : 065121014                    ||"<<endl;
		            cout<<"\t\t\t=================================================="<<endl;
		              
		            cout<<"\n\t\t\t||Nilai Absen     :"; cin>>mhs[0].n_absen;
		            cout<<"\t\t\t||Nilai Tugas     :"; cin>>mhs[0].n_tugas;
		            cout<<"\t\t\t||Nilai UTS       :"; cin>>mhs[0].n_uts;
		            cout<<"\t\t\t||Nilai UAS       :"; cin>>mhs[0].n_uas;
		            cout<<"\t\t\t||Nilai Praktikum :"; cin>>mhs[0].n_praktikum;
		            NilaiAkhir();
		            if(mhs[0].n_total>=80)
		            { 
		                mhs[0].grade='A';
		            }
		            else if (mhs[0].n_total>=70)
		            {
		                mhs[0].grade='B';
		            }
		            else if (mhs[0].n_total>=55)
		            {
		                mhs[0].grade='C';
		            }
		            else if (mhs[0].n_total>=40)
		            {
		                mhs[0].grade='D';
		            }
		            else if (mhs[0].n_total<=39)
		            {
		                mhs[0].grade='E';
		            }
		
		            if(mhs[0].n_total >= 55){
			            mhs[0].keterangan = "lulus";
		            }else{
			            mhs[0].keterangan = "Tidak Lulus";
		            }
		            cout<<"\n\t\t\t========================================="<<endl;
		            cout<<"\t\t\t||Output Nilai Yang Didapat"<<endl;;
		            cout<<"\t\t\t||======================================="<<endl;
		            cout<<"\t\t\t||Mendapatkan Nilai total   : "<<mhs[0].n_total<<endl;
		            cout<<"\t\t\t||Grade        		    : "<<mhs[0].grade<<endl;
		 	        cout<<"\t\t\t||Keterangan                : "<<mhs[0].keterangan<<endl;
		            cout<<"\t\t\t========================================="<<endl;
		 	        cout<<endl;
		 	        break;
			
		        	case 2:
		            	mhs[1].nama = "Marchel Mahesa ";
		            	mhs[1].npm = "065121003";
		            cout<<"\n\t\t\t=================================================="<<endl;
		            cout<<"\t\t\t||Nama           : Marchel Mahesa               ||"<<endl;
		            cout<<"\t\t\t||NPM            : 065121003                    ||"<<endl;
		            cout<<"\t\t\t=================================================="<<endl;
		
		            cout<<"\n\t\t\t||Nilai Absen     :"; cin>>mhs[1].n_absen;
		            cout<<"\t\t\t||Nilai Tugas     :"; cin>>mhs[1].n_tugas;
		            cout<<"\t\t\t||Nilai UTS       :"; cin>>mhs[1].n_uts;
		            cout<<"\t\t\t||Nilai UAS       :"; cin>>mhs[1].n_uas;
		            cout<<"\t\t\t||Nilai Praktikum :"; cin>>mhs[1].n_praktikum;
		            NilaiAkhir();
		            if(mhs[1].n_total>=80)
		            { 
		                mhs[1].grade='A';
		            }
		            else if (mhs[1].n_total>=70)
		            {
		                mhs[1].grade='B';
		            }
		            else if (mhs[1].n_total>=55)
		            {
		                mhs[1].grade='C';
		            }
		            else if (mhs[1].n_total>=40)
		            {
		                mhs[1].grade='D';
		            }
		            else if (mhs[1].n_total<=39)
		            {
		                mhs[1].grade='E';
		            }
		
		            if(mhs[1].n_total >= 55){
			            mhs[1].keterangan = "lulus";
		            }else{
			            mhs[1].keterangan = "Tidak Lulus";
		            }
		            cout<<"\n\t\t\t========================================="<<endl;
		            cout<<"\t\t\t||Output Nilai Yang Didapat"<<endl;;
		            cout<<"\t\t\t||======================================="<<endl;
		            cout<<"\t\t\t||Mendapatkan Nilai total   : "<<mhs[1].n_total<<endl;
		            cout<<"\t\t\t||Grade       		    : "<<mhs[1].grade<<endl;
		 	        cout<<"\t\t\t||Keterangan                  : "<<mhs[1].keterangan<<endl;
		            cout<<"\t\t\t========================================="<<endl;
		 	        cout<<endl;
		 	        break;
		 	        
		 	        case 3:
		            	mhs[2].nama = "Muhamad Ridwan";
		            	mhs[2].npm = "065121013";
		            cout<<"\n\t\t\t=================================================="<<endl;
		            cout<<"\t\t\t||Nama           : Muhamad Ridwan               ||"<<endl;
		            cout<<"\t\t\t||NPM            : 065121013                    ||"<<endl;
		            cout<<"\t\t\t=================================================="<<endl;
		            
		            cout<<"\n\t\t\t||Nilai Absen     :"; cin>>mhs[2].n_absen;
		            cout<<"\t\t\t||Nilai Tugas     :"; cin>>mhs[2].n_tugas;
		            cout<<"\t\t\t||Nilai UTS       :"; cin>>mhs[2].n_uts;
		            cout<<"\t\t\t||Nilai UAS       :"; cin>>mhs[2].n_uas;
		            cout<<"\t\t\t||Nilai Praktikum :"; cin>>mhs[2].n_praktikum;
		            NilaiAkhir();
		            if(mhs[2].n_total>=80)
		            { 
		                mhs[2].grade='A';
		            }
		            else if (mhs[2].n_total>=70)
		            {
		                mhs[2].grade='B';
		            }
		            else if (mhs[2].n_total>=55)
		            {
		                mhs[2].grade='C';
		            }
		            else if (mhs[2].n_total>=40)
		            {
		                mhs[2].grade='D';
		            }
		            else if (mhs[2].n_total<=39)
		            {
		                mhs[2].grade='E';
		            }
		
		            if(mhs[2].n_total >= 55){
			            mhs[2].keterangan = "lulus";
		            }else{
			            mhs[2].keterangan = "Tidak Lulus";
		            }
		            cout<<"\n\t\t\t========================================="<<endl;
		            cout<<"\t\t\t||Output Nilai Yang Didapat"<<endl;;
		            cout<<"\t\t\t||======================================="<<endl;
		            cout<<"\t\t\t||Mendapatkan Nilai total   : "<<mhs[2].n_total<<endl;
		            cout<<"\t\t\t||Huruf        		    : "<<mhs[2].grade<<endl;
		 	        cout<<"\t\t\t||keterangan                : "<<mhs[2].keterangan<<endl;
		            cout<<"\t\t\t========================================="<<endl;
		 	        cout<<endl;
		 	        break;
		 	       
		           case 4:
		            	mhs[3].nama = "Abdul Mun'im ";
		            	mhs[3].npm = "065121020";
		            cout<<"\n\t\t\t=================================================="<<endl;
		            cout<<"\t\t\t||Nama           : Abdul Mun'im                 ||"<<endl;
		            cout<<"\t\t\t||NPM            : 065121020                    ||"<<endl;
		            cout<<"\t\t\t=================================================="<<endl;
		            
		            cout<<"\n\t\t\t||Nilai Absen     :"; cin>>mhs[3].n_absen;
		            cout<<"\t\t\t||Nilai Tugas     :"; cin>>mhs[3].n_tugas;
		            cout<<"\t\t\t||Nilai UTS       :"; cin>>mhs[3].n_uts;
		            cout<<"\t\t\t||Nilai UAS       :"; cin>>mhs[3].n_uas;
		            cout<<"\t\t\t||Nilai Praktikum :"; cin>>mhs[3].n_praktikum;
		            NilaiAkhir();
		            if(mhs[3].n_total>=80)
		            { 
		                mhs[3].grade='A';
		            }
		            else if (mhs[3].n_total>=70)
		            {
		                mhs[3].grade='B';
		            }
		            else if (mhs[3].n_total>=55)
		            {
		                mhs[3].grade='C';
		            }
		            else if (mhs[3].n_total>=40)
		            {
		                mhs[3].grade='D';
		            }
		            else if (mhs[3].n_total<=39)
		            {
		                mhs[3].grade='E';
		            }
		
		            if(mhs[3].n_total >= 55){
			            mhs[3].keterangan = "lulus";
		            }else{
			            mhs[3].keterangan = "Tidak Lulus";
		            }
		            cout<<"\n\t\t\t========================================="<<endl;
		            cout<<"\t\t\t||Output Nilai Yang Didapat"<<endl;;
		            cout<<"\t\t\t||======================================="<<endl;
		            cout<<"\t\t\t||Mendapatkan Nilai total   : "<<mhs[3].n_total<<endl;
		            cout<<"\t\t\t||Huruf        		    : "<<mhs[3].grade<<endl;
		 	        cout<<"\t\t\t||Keterangan               : "<<mhs[3].keterangan<<endl;
		            cout<<"\t\t\t========================================="<<endl;
		 	        cout<<endl;
		 	        break;
		 	        default :
		 	        	pil == 12;
		 	        	break;
		 }	        
	}				
		else if(pil==11){
        	tabel_nilai();
		}
		else if(pil==12){
            cout<<"\n Program Keluar, Terima Kasih!\n";
        }else{
            cout<<"PILIHAN TIDAK ADA!!\n";
        }
    }while (pil!=12);
}

int main(){
    menu();
    return 0;
}
