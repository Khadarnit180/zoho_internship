'''import unittest
def sum(a,b):
	return a+b

class mytest(unittest.Testcase):
	def test_method(self):
		res=sum(5,6)
		self.assertEqual(res,self.a+self.b)
if__name__=="__main__":
	unittest.main()
''' 	
import unittest


'''def sum(a,b):
    return a+b


class sumtest(unittest.TestCase):

    def test_sum(self):
        a=10
        b=10
         #act
         #calling fun                                  ///not working in linux
        result=sum(self.a,self.b)                           ///in linux
                                                            ///its working in online compiler
        #assert
        self.assertEquals(result,self.a+self.b)


if __name__=="__main__":
    unittest.main()  
'''
import unittest

def summ(a,b):
	return a+b
	
class TestSum(unittest.TestCase):
	
	def test_summ(self):
		self.assertEqual(summ(5,1),6)
		
	
	
if __name__ == "__main__":
	unittest.main()    
