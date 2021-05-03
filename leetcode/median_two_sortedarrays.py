class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        num = []
        num = nums1 + nums2
        num.sort()
        
        n = len(num)
        
        if(n%2!=0):
            return num[n//2]
        else:
            return (num[n//2]+num[(n//2)-1])/2]
