from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans: List[int] = []
        for i, n in enumerate(nums):
            for j, m in enumerate(nums[i+1:]):
                if(m==target-n):
                    ans.append(i)
                    temp = m
                    
        for i, n in enumerate(nums):
            print(i, n)
            if(i==ans[0]):
                continue
            elif(temp==n):
                ans.append(i)
                
        return ans
