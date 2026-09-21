n = int(input('Enter size of array : '))

print('Enter array elements : ')
l = list(map(int, input().split()))

unique = set(l)
d = {}

for ele in unique:
    d[ele] = l.count(ele)
    
for key in d:
    print(f'{key} -> {d[key]} times')
    