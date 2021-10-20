## Wiki
```
Q. Given a maze , source , destination . find path. L R U D (left , right ,up , down).

0 = walls
1 = free

0 0 1 0 0 0 0 0  
1 1 1 1 1 1 1 1  
1 0 0 0 0 1 0 1  
1 1 1 0 1 1 0 1  
1 0 1 0 1 0 0 1  
1 1 1 1 1 0 1 1  
0 0 0 0 1 0 0 0  
1 0 1 0 1 0 0 1  
1 1 1 1 1 1 1 1  
0 0 0 0 0 0 1 0  

source = (0 , 2)
dest = (9 , 6)

shortest path in term of L R D U.

sol : docs/back.cpp
D R R R D D L D D D D D R R D
```

## run
```
chmod +x run.sh
./run.sh
```

## examples. bfs-algo
- tiny 10x10 img [Link](https://imgur.com/a/dm3L0zi)
- small 15x15 img [Link](https://imgur.com/a/q0Ui4Ne)
- normal 41x41 img [Link]( https://imgur.com/a/hFjQyAD)
- braid200 200x200 img, multiple solutions possible [Link](https://imgur.com/a/DqWnEUG)
- combo400 400x400 img, multiple solutions possible [Link](https://imgur.com/a/ct2akcy)
- perfect4k 4001x4001 img, image too large to view , one solution only- [Link](https://imgur.com/a/1ybH0Jm) 
- combo600 6001x6001 img, multiple solutions possible [Link](https://imgur.com/a/dnV2yGQ)

## TODO
```
- compare various path finding algos on image braid200.
```
## issue
```
- saving every singlie pixel in docs/in1 , in2 , in3 // is not the right way.
- Failed at test case perfect15k
```
## ignore
```
- git config credential.helper 'cache --timeout=243600'
- Learn bfs here - https://youtu.be/_YVhjRAfkOw 
- I guess it works for every  testcases (no).
- As the images are 10x10 , 15x15 , 41x41 so to see the input image & output image.
- You can't view 10x10 image on any os(image viewer) , so i used photoshop to view it.
```

