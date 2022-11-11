from threading import Thread
import threading
import time 

def eating():
	print("eaten")
def reading():
	print("read")
 
#t=threading.Thread(target=eating,args=())
#t.start()
#t.join()
u=Thread(target=reading)
u.start()
u.join()#i.e main thread
print(threading.active_count())#only give active thread 
print(threading.enumerate())
print(time.perf_counter())

