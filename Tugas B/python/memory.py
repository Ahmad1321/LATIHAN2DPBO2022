class memory():
    __freq = ""
    __size = ""
    __cuda = ""

    # construct
    def __init__(self, freq = "", size = "", cuda = ""):
        self.__freq = freq
        self.__size = size
        self.__cuda = cuda

    # set dan get
    def setfreq(self, freq):
        self.__freq = freq

    def getfreq(self):
        return self.__freq
    
    def setsize(self, size):
        self.__size = size
    
    def getsize(self):
        return self.__size

    def setcuda(self, cuda):
        self.__cuda = cuda
    
    def getcuda(self):
        return self.__cuda

    # output
    def printmemory(self):
        print("Freq : " + str(self.__freq))
        print("Size : " + str(self.__size))
        print("Cuda : " + str(self.__cuda))