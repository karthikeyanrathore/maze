#!/usr/bin/env python3
from PIL import Image

class Maze(object):
  def __init__(self ,img):
    self.img = img
    self.data = list(self.img.getdata(0))
    self.width = img.size[0]
    self.height= img.size[1]
    self.start = [0 , 0]
    self.end = [0 , 0]

  def _print(self):
    for j in range(0 , 100 , 10):
      for i in range(1, self.width - 1):
        print(self.data[i + j] , end=" ")
      print(" ")



  def _create(self):
    print("height %d width %d" % (self.height , self.width))
    for i in range(1, self.width - 1):
      if(self.data[i] > 0):
        self.start = [0 , i]
        break
    print(self.start)
    
    nodes = 0
    for j in range(0 , 100 , 10):
      for i in range(1, self.width - 1):
        if(self.data[i + j] > 0):
          nodes += 1

    self._print()




    



