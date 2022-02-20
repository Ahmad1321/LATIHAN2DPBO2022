from memory import memory

class product(memory):
    __price = ""
    __id = ""

    # construct
    def __init__(self, price__price = "", id = ""):
        self.__price = price__price
        self.__id = id

    # set dan get
    def setprice(self, price__price):
        self.__price = price__price

    def getprice(self):
        return self.__price
    
    def setid(self, id):
        self.__id = id
    
    def getid(self):
        return self.__id

    # output
    def printproduct(self):
        print("Price : " + str(self.__price))
        print("ID : " + str(self.__id))