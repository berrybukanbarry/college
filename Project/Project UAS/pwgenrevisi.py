import string
import random

def generate_password(length):
    generator = string.ascii_letters + string.digits + string.punctuation
    password = ''.join(random.choice(generator) for _ in range(length))
    return password

def randomize_password(input_password):
    input_list = list(input_password)
    random.shuffle(input_list)
    return ''.join(input_list)

print("")
print("\t\t PASSWORD GENERATOR")
print("")
print("Pilih Menu Yang Ada di Bawah :")
print("1. Membuat Password Yang Anda Suka \n2. Auto Generate Password")
menu = input("Menu Berapa Yang Anda Pilih [1,2]: ")
print("")

if menu == "1":
    input_password = input("Masukkan Password yang Anda Suka: ")
    pw1m1 = randomize_password(input_password)
    pw2m1 = randomize_password(input_password)
    pw3m1 = randomize_password(input_password) 
    
    print("Option 1 = ",pw1m1)
    print("Option 2 = ",pw2m1)
    print("Option 3 = ",pw3m1)
    opzi = input("Opsi Berapa Yang Anda Inginkan [1,2,3] = ")
    if opzi == "1":
      print("Password Anda :",pw1m1)
    elif opzi == "2":
      print("Password Anda :",pw2m1)
    elif opzi =="3":
      print("Password Anda :",pw3m1)
  
elif menu == "2":
    data = int(input("Berapa Panjang Password yang Diinginkan = "))
    pw1m2 = generate_password(data)
    pw2m2 = generate_password(data)
    pw3m2 = generate_password(data)

    print("Option 1 = ", pw1m2)
    print("Option 2 = ", pw2m2)
    print("Option 3 = ", pw3m2)
    print("")

    opsi = input("Opsi Berapa yang Anda Inginkan [1,2,3] = ")
    if opsi == "1":
        print("Password Anda :",pw1m2)
    elif opsi == "2":
        print("Password Anda :",pw2m2)
    elif opsi == "3":
        print("Password Anda :",pw3m2)
    else:
        print("Opsi yang Anda Pilih Tidak Ada")
else:
    print("Menu yang Anda Pilih Tidak Ada")
print("")

print("--TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM PASSWORD GENERATOR KAMI--")
print("")
