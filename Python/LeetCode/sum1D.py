class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        return [sum(nums[:i+1]) for i in range(len(nums))]

nums=[1,2,3,4]
result=Solution()
print(result.runningSum(nums))
print(Solution.runningSum.__annotations__)
print(nums.count(3))

arr=[10,2,5,3]
arrset=set(arr)
print(arrset-{1})
print('Hello'+'!!!')
hello='Hello!!!'
hello=hello.replace('H','M').replace('!','?').replace('l','k').replace('X','Boo')
print(hello)
