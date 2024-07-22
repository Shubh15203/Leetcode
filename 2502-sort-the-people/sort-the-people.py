class Solution:
    def sortPeople(self, names: List[str], A: List[int]) -> List[str]:
        for i in range(len(A)-1):
    
        # Find the minimum element in remaining 
        # unsorted array
            min_idx = i
            for j in range(i+1, len(A)):
                if A[min_idx] > A[j]:
                    min_idx = j
            
        # Swap the found minimum element with 
        # the first element        
            A[i], A[min_idx] = A[min_idx], A[i]
            names[i], names[min_idx] = names[min_idx], names[i]

        return reversed(names)
