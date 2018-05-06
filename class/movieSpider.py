#jj"import os
import urllib2

class movieSpider:

    def __init__(self,baseAddr="https://www.dy2018.com/4",snapshot=""):
        self.__str__ ="arthur"
        self.baseAddr = baseAddr
        self.snapshot = snapshot
        self.codec = ''
        pass

    def readPage(self):
        try:
            print(self.baseAddr)
            self.snapshot = urllib2.urlopen(self.baseAddr).read()
            start = self.snapshot.find('charset=')
            self.codec = self.snapshot[start+8:start+20].split('"')[0]
            self.snapshot = self.snapshot.decode(self.codec,'ignore')
            print(self.snapshot)
        except :
            print("retrieve content failed!")
            pass

    def gettotalPageNum(base_url):

        pass

    def getNextPage(base_url):

        pass

    def getMovieName():

        pass

    def getMovieActor():

        pass

    def getMovieAdress(url):

       pass

    def writeMovie():

       pass

    def loadMovieArchive():

       pass

    def downloadMove():

       pass


if __name__ == "__main__":
   a=movieSpider()
   a.readPage()
