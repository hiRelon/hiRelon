#include <stdio.h>

void sumberCerita() //Fungsi untuk menyimpan pilihan sumber cerita
{
    printf("Sumber cerita: \n");
    printf("1. Imajinasi\n");
    printf("2. Kehidupan nyata\n");
    printf("3. Kajian dan studi\n");
}

void tujuanCerita() //Fungsi untuk menyimpan pilihan tujuan cerita
{
    printf("Tujuan cerita: \n");
    printf("1. Hiburan\n");
    printf("2. Pengetahuan\n");
}

void tokohCerita() //Fungsi untuk menyimpan pilihan tokoh cerita
{
    printf("Tokoh cerita: \n");
    printf("1. Nyata\n");
    printf("2. Fiksi\n");
    printf("3. Semi fiksi\n");
}

void fiksiUmum() //Fungsi untuk menyimpan contoh genre Fiksi Umum
{
    printf("Ini dia beberapa contoh genre Fiksi Umum: \n");
    printf("Fantasi, Sci-Fi, Misteri, Horor, Romansa, Petualangan\n");
}

void sastra() //Fungsi untuk menyimpan contoh genre Realistis/Sastra
{
    printf("Ini dia beberapa contoh genre Realistis/Sastra: \n");
    printf("Drama, Komedi, Tragedi, Historis, Fiksi Sastra\n");
}

void nonFiksi() //Fungsi untuk menyimpan contoh genre Non Fiksi
{
    printf("Ini dia beberapa contoh genre Non Fiksi: \n");
    printf("Biografi, Sejarah, Jurnalisme Sastra\n");
}

int main()
{
    int sumber, tujuan, tokoh;

    printf("PROGRAM ANALISIS GENRE\n");
    printf("\n");
    printf("Pilih kata kunci yang sesuai dengan ceritamu\n");
    printf("\n");

    sumberCerita(); //Program untuk input pertama
    printf("Apa yang menjadi sumber dari ceritamu?\n");
    printf("Masukan nomornya: ");
    scanf("%d", &sumber);
    printf("\n");
    while (sumber < 1 || sumber > 3) //Untuk validasi input
    {
    printf("Nomor tidak valid.\n");
    printf("Masukan nomornya: ");
    scanf("%d", &sumber);
    printf("\n");
    }

    tujuanCerita(); //Program untuk input kedua
    printf("Apa yang menjadi tujuan dari ceritamu?\n");
    printf("Masukan nomornya: ");
    scanf("%d", &tujuan);
    printf("\n");
    while (tujuan < 1 || tujuan > 2) //Untuk validasi input
    {
    printf("Nomor tidak valid.\n");
    printf("Masukan nomornya: ");
    scanf("%d", &tujuan);
    printf("\n");
    }
    
    tokohCerita(); //Program untuk input ketiga
    printf("Bagimana tokoh dalam ceritamu?\n");
    printf("Masukan nomornya: ");
    scanf("%d", &tokoh);
    printf("\n");
    while (tokoh < 1 || tokoh > 3) //Untuk validasi input
    {
    printf("Nomor tidak valid.\n");
    printf("Masukan nomornya: ");
    scanf("%d", &tokoh);
    printf("\n");
    }
    
    if (sumber == 1 && tujuan == 1 && tokoh == 2) //Untuk menentukan genre Fiksi Umum
    {
        printf("Genre ceritamu adalah 'FIKSI UMUM'\n");
        fiksiUmum();
    }
    else if (sumber == 2 && tujuan == 1 && tujuan == 3) //Untuk menentukan genre Realistis/Sastra
    {
        printf("Genre ceritamu adalah 'REALISTIS/SASTRA'\n");
        sastra();
    }
    else if (sumber == 3 && tujuan == 2 && tokoh == 1) //Untuk menentukan genre Non Fiksi
    {
        printf("Genre ceritamu adalah 'NON FIKSI'\n");
        nonFiksi();
    }
    else
    {
        printf("Wah sepertinya ceritamu memiliki genre campuran ^^\n"); //Untuk kondisi default
    }
    
    return 0;
}