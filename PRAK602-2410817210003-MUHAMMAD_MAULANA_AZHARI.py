banyak_ruang = int(input())

banyak_zetsu_per_ruang = list(map(int, input().split()))

for i in range(banyak_ruang):
    print(banyak_zetsu_per_ruang[i] * (i + 1), end=" ")
