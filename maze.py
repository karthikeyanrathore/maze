#!/usr/bin/env python3
from PIL import Image
from bfs  import BFS 

class Maze(object):
  def __init__(self ,img , out):
    self.img = img
    self.out = out
    self.data = list(self.img.getdata(0))
    self.width = img.size[0]
    self.height= img.size[1]
    self.start = [0 , 0]
    self.end = [0 , 0]

  def _print(self):
    for j in range(0 , self.height * self.width , self.width):
      for i in range(0, self.width):
        print(self.data[i + j] , end=" ")
      print(" ")



 
  def _color(self):
    print("height %d width %d" % (self.height , self.width))
    #self._print()

    self.img = self.img.convert('RGB')
    impix = self.img.load()
   
    dest = [self.height - 1 , -1]
    source = [0 , -1]
    for i in range(0 , self.width):
      if(self.data[i] > 0):
        source[1] = i
        break
    for i in range(1, self.width):
      if(self.data[(self.width  * self.height ) - i ] > 0):
        dest[1] = self.width - i  
        print(self.height * self.width - i)
        break
   
    
    print("source node: " , source) 
    print("dest node: " , dest) 
    pix = []
    func = BFS(source , dest , self.width , self.height)
    pix = func.bfs()
    pix.reverse()
 
    for i in pix:
      row = i[0]
      col = i[1]
      #print(impix[col ,row])
      impix[col , row] = (0 , 0 ,204)
    
    self.img.save(self.out)


