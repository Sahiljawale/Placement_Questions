#Write a program to print Solid and hollow rectangle star pattern
r=int(input("Rows: "))
c=int(input("Cols: "))

for i in range(r):
  for j in range(c):
    print("*",end="")
  print()
