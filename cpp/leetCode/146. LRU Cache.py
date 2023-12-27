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
        
    def remove(self, node):
        print(node.val)
        p = node.prev
        n = node.next
        print(p)
        p.next = n
        n.prev = p

    def get(self, key: int) -> int:
        print('bye')
        if key in self.LRU:
            self.remove(self.LRU[key])
            self.insert(self.LRU[key])
            return self.LRU[key].val
        return -1
        

    def put(self, key: int, value: int) -> None:
        if key in self.LRU:
            self.remove(self.LRU[key].val) 
        
        self.LRU[key] = Node(key, value)
        print('hi')
        self.insert(self.LRU[key])

        if len(self.LRU) > self.capacity:
            self.remove(self.left.next)
            del self.LRU[self.left.next.key]



# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)


