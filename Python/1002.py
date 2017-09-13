string=input()
sum=0
for ch in string:
    sum+=int(ch)
map={0:"ling",1:"yi",2:"er",3:"san",4:"si",5:"wu",6:"liu",7:"qi",8:"ba",9:"jiu"}
isFirst=True
for c in str(sum):
    if isFirst:
        print(map[int(c)],end="")
        isFirst=False
    else:
        print(" "+map[int(c)],end="")
print()
