for rows in range(6,0,-1):
    for space in range(6-rows, 0, -1):
        print(" ", end=" ")
    for stars in range(rows*2, 1, -1):
        print ("*", end=" ")
    print()    
