import string
import random

def generate_password(length):
    generator = string.ascii_letters + string.digits
    password = ''.join(random.choice(generator) for _ in range(length))
    return password
  
print("")
print("\t\t PASSWORD GENERATOR")
print("")
data = int(input("Berapa Panjang Password yang diinginkan = "))

pw1 = generate_password(data)
pw2 = generate_password(data)
pw3 = generate_password(data)

print("Option 1 = ",pw1)
print("Option 2 = ",pw2)
print("Option 3 = ",pw3)
print("")

opsi = input("Opsi Berapa yang anda inginkan [1,2,3] = ")
if opsi== "1" : 
  print("Password Anda : ",pw1)
elif opsi== "2":
  print("Password Anda : ",pw2)
elif opsi== "3":
  print("Password Anda : ",pw3)
else :
  print("Opsi Yang Anda Pilih Tidak Ada")
print("")

print("--TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM PASSWORD GENERATOR KAMI--")
print("")