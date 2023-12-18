class TimeMap:

    def __init__(self):
        self.map = {}

        

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.map:
            self.map[key] = [(value, timestamp)]
        else:
            self.map[key].append((value, timestamp))
        
        
    def get(self, key: str, timestamp: int) -> str:
        out=""
        v=self.map.get(key, [])
        l, r = 0, len(v)-1

        arr=v
        while l<=r:
            m=(l+r)//2
            if arr[m][1] <= timestamp:
                out=arr[m][0]
                l=m+1
            else:
                r=m-1

        return out
                
        
        

    
        

# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)