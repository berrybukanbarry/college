#Operator Aritmatika

a = 10
b = 3

#Operasi Tambah ++
hasil = a + b
print(a, '+',b, '=', hasil)

#Operasi Pengurangan --
hasil = a - b
print(a, '-', b, '=', hasil)

#operasi Pembagian /
hasil = a / b
print(a, '/', b, '=', hasil)

#Operasi Eskponen (pangkat) **
hasil = a**b
print(a, '*','*', '=', hasil)

#Operasi Eksponen (Modulus / Sisa Hasil Bagi) %
hasil = a % b
print(a , '%', b, '=', hasil)

#Operasi Eksponen (Floor Division / Pembagian Bulat / Pembuatan Kebawah) //
hasil = a // b
print(a,'/','/', b, '=', hasil)

#Prioritas Operasi 
#1.()
#2.eskponen pangkat dll
#3.perkalian
#4.pertambahan

x = 3
y = 2
z = 4

hasil = x**y*z+x/y
print(hasil)  