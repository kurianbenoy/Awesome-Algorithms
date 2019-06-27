class Queue(object):
  def __init__(self):
    self.S1 = []
    self.S2 = []

  def enqueue(self, element):
    self.S1.append(element)

  def dequeue(self, element):
    if not self.S2:
      while self.S1:
        self.S2.append(self.S1.pop())
    return self.S2.pop()

q = Queue()
for i in range(5):
  q.enqueue(i)
for i in range(5):
  print(q.dequeue(i))
	   
