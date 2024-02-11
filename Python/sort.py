def topKFrequent(nums: List[int], k: int) -> List[int]:
        m = collections.Counter(nums)
        first, second = 0, 0
        for val in m.values():
            if val > first and val > second:
                first = val
                second = first
        res = []
        for key, val in m.items():
            if val == first:
                res.append(key)
                break
        for key, val in m.items():
            if val == second:
                res.append(key)
                break
        return res

nums = [1,1,1,2,2,3]
k = 2

