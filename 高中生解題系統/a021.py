num = input().split()
if num[1]=="+":
    print(int(num[0])+int(num[2]))
elif num[1]=="-":
    print(int(num[0])-int(num[2]))
elif num[1]=="*":
    print(int(num[0])*int(num[2]))
else:
    print(int(num[0])//int(num[2]))
