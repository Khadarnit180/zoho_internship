import os
from threading import Thread
import time

start = time.time()

path = "/home/local/ZOHOCORP/abdul-pt6532/internship1"

# Change the directory
os.chdir(path)

def remove_dup(file_path):

    f = open(file_path, "r")
    s = f.read()
    list = s.split()
    i = 0
    
    
    while i < len(list) - 1:
        if list[i] == list[i + 1]:
            del list[i]
        else:
            i = i + 1
          
            
    str=""
    for i in list:
    	str=str+i+" "
    print(str)
    print()	
    
global c  
c = 0
pool =[]
paths=[]
for file in os.listdir():
    if file.endswith(".txt"):
        file_path = f"{file}"
        c = c + 1
        paths.append(file_path)
if c<=10:
	threads=c
else :
	threads=10
i=0
for _ in range(threads):
        	t = Thread(target=remove_dup, args=[paths[i]])
        	# or ucan keep passing arg as list .
        	t.start()   	
        	pool.append(t)
        	i+=1
for t in pool:
		t.join()
end = time.time()
print()


print("time taken for excution  ",end-start)
