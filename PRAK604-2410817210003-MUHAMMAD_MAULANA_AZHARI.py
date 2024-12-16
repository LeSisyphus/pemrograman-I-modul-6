jumlah_pagar = 0
jumlah_bintang = 0
kode_shikamaru = input()
kode_musuh = input()

if len(kode_shikamaru) != len(kode_musuh):
    print("Panjang kalimat berbeda, pesan palsu")
    exit()

for i in range(len(kode_shikamaru)):
    if kode_shikamaru[i] == ' ' and kode_musuh[i] == ' ':
        continue

    if kode_musuh[i] == kode_shikamaru[i]:
        print("*", end="")
        jumlah_bintang += 1
    else:
        print("#", end="")
        jumlah_pagar += 1
    
print("\n* = ", jumlah_bintang)
print("# = ",  jumlah_pagar)

if (jumlah_bintang >= jumlah_pagar): print("Pesan Asli")
else: print("Pesan Palsu")