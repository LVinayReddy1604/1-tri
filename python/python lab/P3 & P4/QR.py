paddingList=['10000000','01000000','001000000',"00010000","00001000","00000100","00000010","00000001"]

binaryList=[]
def EncodeQR(product):
    for i in product:
        binaryList.append(bin(ord(i))[2:])
    for i in range(len(binaryList)):
        binaryList[i]=binaryList[i]+paddingList[i]
    return binaryList