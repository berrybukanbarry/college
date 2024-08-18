# CLASS 3 OBJECT MENGGUNAKAN INPUTAN
class karakter:
  nama = ""
  kelas = ""
  senjata = ""
karakter1 = karakter()
karakter2 = karakter()
karakter3 = karakter()

karakter1.nama = input("Nama Karakter:")
karakter1.kelas = input("Kelas Karakter: ")
karakter1.senjata = input("Senjata Karakter: ")
print("")
karakter2.nama = input("Nama Karakter:")
karakter2.kelas = input("Kelas Karakter:")
karakter2.senjata = input("Senjata Karakter:")
print("")
karakter3.nama = input("Nama Karakter:")
karakter3.kelas = input("Kelas Karakter:")
karakter3.senjata = input("Senjata Karakter:")
print("")
print(f"\tKarakter 1\nNama:{karakter1.nama}\nKelas:{karakter1.kelas}\nSenjata:{karakter1.senjata}\n")
print(f"\tKarakter 2\nNama:{karakter2.nama}\nKelas:{karakter2.kelas}\nSenjata:{karakter2.senjata}\n")
print(f"\tKarakter 3\nNama:{karakter3.nama}\nKelas:{karakter3.kelas}\nSenjata:{karakter3.senjata}\n")