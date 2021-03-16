## Introduction

### Search element in an array

Let us assume we have an array **a = [a<sub>1</sub> , a<sub>2</sub> , a<sub>3</sub> ...... a<sub>n</sub>]** , sorted in ascending order. **a<sub>i</sub> <= a<sub>i+1</sub>** should be fulfilled for the neighboring elements of the array. Our target is to search for the position of the element x in the array , that is we need to find index (i) such that **a<sub>i</sub> = x**.
<br/>

The Naive way of finding the index of element of x in the array , is to iterate through the whole array from left to right and return the position of the  element x when a<sub>i</sub> = x. But this approach will work in **O(n)** time , which is inefficient for large input of array. 

#### Idea & Procedure
How to make the algorithm faster ? The Better Way to approach the problem is to use the Binary Search Algorithm.  Binary Search Algorithm works only when the array is **sorted** . The Procedure of finding position of element x in the array is as follows :

1. set the left variable to 0 and right variable to (size of array - 1).
2. If left > right , then the program terminates.
3. set the middle variable (m)  to the middle position of the array ,that is (L + R)/2 , to avoid overflow we will use **L + (R - L)/2**.
4. If the m is greater than the variable x , then we will cut off all the elements to the right of it . Else if it is smaller than x , then we will cut off all the elements to the left of it.
5. At the end we will have only one element in the array , which will be either equal to x or not equal to x.

#### Implementation
```Python
L = 0 , R = n - 1
while L <= R:
  mid = L + (R - L)/2
  if a[mid] == x:
    return mid
  if a[mid] < x:
    L = mid + 1
  else:
    R = mid - 1
```

#### Example
For example for the array **a = [2 ,3 , 5 , 6 , 8 , 10 , 12]**  and **x = 10** , the algorithm will be executed as follows:
1. We will consider the line segment **[left , right] = [0 , 6]** , the middle element is **6**.
2. As our middle element is smaller than the element x , so we will cut off all the elements to the left of it and only consider elements to the right of it.
3. Now our segment is **[left , right] = [4 , 6]** , the middle element is **10**.
4. As the middle element is equal to element x , we will return the position of **10** which is **5**.

#### Time Complexity
At each step of the algorithm, we reduce the length of the segment under consideration by 2 times, therefore, the steps of the algorithm will be done no more than log<sub>2</sub>n. Thus, the binary search algorithm  runs in **O(logn) time**.
 
## Applications

### Find closest in array
Let us assume we have an array a = [7 ,10 , 11 , 13 , 18 , 25 , 27] and the target value is 20. Our task is to  return the maximum element not greater than the targeted value (closest to targeted value  on the left) and also to return the minimum element greater than our targeted value(closest to targeted value on the right). In the above example , the maximum element not greater than x (targeted value) is 18 and the minimum element greater than x (targeted value) is 25.  



#### Idea & Procedure for finding maximum element not greater than x 









