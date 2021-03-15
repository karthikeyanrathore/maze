## Introduction

### Search element in an array

Let us assume we have an array a = [a<sub>1</sub> , a<sub>2</sub> , a<sub>3</sub> ...... a<sub>n</sub>] , sorted in ascending order. a<sub>i</sub> <= a<sub>i+1</sub> should be fulfilled for the neighboring elements of the array. Our target is to search for the position of the element x in the array , that is we need to find index (i) such that a<sub>i</sub> = x.
<br/>
The Naive way of finding the index of element of x in the array , is to iterate through the whole array from left to right and return the position of the  element x when a<sub>i</sub> = x. But this approach will work in O(n) time , which is inefficient for large input of array. 














