import unittest
#from circles import circle_area

def circle_area(r):
	if type(r) not in [int,float]:
		raise TypeError("datatype should be correct ")	
 	
	if r<0:
		raise ValueError("radius can neg")
	return 3.14*(r**2)
		


class testcircleArea(unittest.TestCase):
	def test_area(self):
	
		self.assertAlmostEqual(circle_area(1),3.14)

	def test_vaues(self):
	
		self.assertRaises(ValueError,circle_area(-2))
			
	#type errors for complex ,string bool we dont have area
	
	def test_type(self):
		#self.assertRaises(TypeError,circle_area,"radius")
		self.assertRaises(TypeError,circle_area,3+5j)
		self.assertRaises(TypeError,circle_area,True)
	
	
	
if __name__=="__main__":
	unittest.main()
