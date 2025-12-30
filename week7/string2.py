s = "fruit loops through loops"

seen = []
count = 0

for char in s:
    if ('a'<= char <= 'z') or ('A'<=char<='Z'):
        if char not in seen:
            seen.append(char)
            count +=1


print(count)