#include<iostream>

using namespace::std;

int main(){

    int index[15];
    int i,j,a,b,c,d,e,f,batas,baru;


cout<<"\n=====WAKTU DAN TEMPAT KAMI PERSILAHKAN=====\n"<<endl;
cout<<"\nmasukan Jumlah Indeks : ";cin>>batas;
cout<<endl;

    for(i=0;i<batas;i++)
    {
        cout<<"\nData Indeks ["<<i<<"]= ";cin>>index[i];
    }
    cout<<endl;
    cout<<"\nMasukkan Nilai Yang Dicari= ";
    cin>>f;

    for(j=0;j<batas;j++)
    {
    if(index[j]==f)
    {
    cout<<"\nNilai yang dicari ditemukan pada indeks ke ["<<j<<"]";
    }
   }
cout<<endl;
cout<<"\nMasukkan indeks yang ingin diganti = ";cin>>c;
cout<<"\nMasukkan data pengganti            = ";cin>>baru;
a = c;index[a] = baru;
cout<<"\nData Baru  = \n";

for(b=0;b<batas;b++)
{
cout<<"\nData["<<b<<"]="<<index[b]<<"\n";
}
cout<<endl;
cout<<"\nMasukkan indeks yang ingin dihapus = ";cin>>d;
i=d;
cout<<"\nNilai yang dihapus = ";
cout<<" "<<index[i]<<" pada indeks ke ["<<i<<"] \n";
cout<<"\n========Hasil=========\n";

for(j=d;j<batas;j++)
{
index[j]=index[j+1];
}
for(e=0;e<batas-1;e++)
{
cout<<"\nData["<<e<<"]="<<index[e];
}
return 0;
}
