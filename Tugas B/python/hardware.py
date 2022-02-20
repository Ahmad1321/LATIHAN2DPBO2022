from product import product

class hardware(product):
    __brand = ""
    __model = ""

    # construct
    def __init__(self, brand__brand = "", model = ""):
        self.__brand = brand__brand
        self.__model = model

    # set dan get
    def setbrand(self, brand__brand):
        self.__brand = brand__brand

    def getbrand(self):
        return self.__brand
    
    def setmodel(self, model):
        self.__model = model
    
    def getmodel(self):
        return self.__model

    # output
    def printhardware(self):
        print("Brand : " + str(self.__brand))
        print("Model : " + str(self.__model))
        