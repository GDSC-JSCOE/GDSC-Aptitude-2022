class Solution:
    def trap(self, height: List[int]) -> int:
        left=[]
        right=[0]*len(height)
        temp=0
        for i in height:
            left.append(temp)
            temp=max(temp,i)
        temp=0
        for i in reversed(range(len(right))):
            right[i]=temp
            temp=max(temp,height[i])
        ans=0
        for i in range(len(left)):
            temp=min(left[i],right[i])-height[i]
            ans+=temp if temp>0 else 0
        return ans