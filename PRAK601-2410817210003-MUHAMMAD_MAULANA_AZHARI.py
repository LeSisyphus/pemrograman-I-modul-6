baris, kolom = map(int, input().split())

elemen = list(map(int, input().split()))

if (len(elemen) != (baris * kolom)):
    print("Jumlah input tidak sesuai")
    exit()
else :
    for i in range(0, len(elemen), kolom):
        print(*elemen[i : i + kolom])