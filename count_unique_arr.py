n = int(input('Enter size of array : '))

print('Enter array elements : ')
l = list(map(int, input().split()))

unique = set(l)
d = {}

for ele in unique:
    d[ele] = l.count(ele)

print('Unique Elements Count : ', end='')

cou = 0

for key in d:
    if(d[key] == 1):
        cou+=1

print(cou, end='')
    