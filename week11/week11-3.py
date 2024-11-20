class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans , total= 0, 0 #�̤j��total �P �ثe��total
        counter = Counter() #����p�g�A�k��j�g
        for i in range(k): #���X�e��k�ӼƦr
            num = nums[i]
            counter[num] += 1
            total += num #��{�b���ơA�[��total��
        if len(counter)==k: ans = max(ans,total)
        #�W���B�z��1�դ���ΡA�U���n�B�z����
        for i in range(k,len(nums)): #����κC�C�q�����A����k��
            left,right = nums[i-k],nums[i] #�����ª��B�k��s��
            counter[left] -= 1 #���(��)
            counter[right] += 1 #�[�k��(�s)
            total = total - left + right #���(��)�B�[�k��(�s)
            if counter[left]==0: del counter[left] #�0�A�N�R��
            if len(counter)==k: ans = max(ans,total)
        return ans
