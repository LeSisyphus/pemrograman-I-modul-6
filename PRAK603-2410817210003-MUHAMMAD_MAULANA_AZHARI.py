n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
    exit()

list1 = list(map(int, input().split()))
list2 = list(map(int, input().split()))

for i in range(n1):
    print(list1[i] * list2[i], end=" ")
