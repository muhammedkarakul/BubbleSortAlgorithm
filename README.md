# BubbleSortAlgorithm
Bubble sort is the simplest technique in which we compare every element with its adjacent element and swap the elements if they are not in order. This way at the end of every iteration (called a pass), the heaviest element gets bubbled up at the end of the list.

# Complexity
Bubble sort has a worst-case and average complexity of О(n2), where n is the number of items being sorted.

# Algorithm:
 begin BubbleSort(list)

   for all elements of list
      if list[i] > list[i+1]
         swap(list[i], list[i+1])
      end if
   end for
   
   return list
   
end BubbleSort

