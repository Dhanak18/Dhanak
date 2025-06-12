#himani= int(input("enter a varialbe:")
for row in range(1,6):
    for space in range(1,6-row):
        print(" ", end=" ")
    for star in range(1, row*2):
        print ("*",end=" ")
    print() 
