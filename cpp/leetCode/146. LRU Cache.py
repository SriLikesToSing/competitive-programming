class Node:
    def __init__(self, key, val):
        self.key, self.val = key, val
        self.prev = self.next = None 


class LRUCache:
    def __init__(self, capacity: int):
        self.LRU = {}
        self.left = Node(0, 0)
        self.right = Node(0, 0)
        self.left.next = self.right
        self.right.prev = self.left
        self.capacity = capacity

    def insert(self, node):
        p = self.right.prev
        n = self.right
        p.next = n.prev = node
        node.next, node.prev = n, p
        
    def remove(self, node):
        p = node.prev
        n = node.next
        p.next, n.prev = n, p

    def get(self, key: int) -> int:
        if key in self.LRU:
            self.remove(self.LRU[key])
            self.insert(self.LRU[key])
            return self.LRU[key].val
        return -1
        

    def put(self, key: int, value: int) -> None:
        if key in self.LRU:
            self.remove(self.LRU[key]) 
        
        self.LRU[key] = Node(key, value)
        self.insert(self.LRU[key])

        if len(self.LRU) > self.capacity:
            tmp = self.left.next
            self.remove(tmp)
            del self.LRU[tmp.key]



# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)


