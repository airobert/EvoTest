import matplotlib.pyplot as plt
# import numpy as np
import numpy as np
import scipy as sp
import pylab as pl
import math
import os, sys, re


x_bound = 10
y_bound = 10
# scale = 1000



# def draw_line(x, y, angle,length):
# 	cartesianAngleRadians = (450-angle)*math.pi/180.0
# 	terminus_x = x + length * math.cos(cartesianAngleRadians)
# 	terminus_y = y + length * math.sin(cartesianAngleRadians)
# 	pl.plot([x, terminus_x],[y,terminus_y])
# 	# print [x, terminus_x],[y,terminus_y]



def draw_line(x1, y1, x2, y2):
	# cartesianAngleRadians = (450-angle)*math.pi/180.0
	# terminus_x = x + length * math.cos(cartesianAngleRadians)
	# terminus_y = y + length * math.sin(cartesianAngleRadians)
	pl.plot([x1, x2],[y1, y2])
	# print [x, terminus_x],[y,terminus_y]

def draw_dots (x, y, pct):
	# (x, y) are dots and pct is the percentage in this nash equilibrium and represented as the size
	s = [(n*x_bound)**2 for n in pct]
	plt.scatter(x,y,s=s, edgecolors='blue', color='red')
	y = [n+1 for n in y]
	plt.scatter(x,y,s=s, edgecolors='yellow', color='red')

def main():
	# pass
	# Any code you like
	# ax = plt.axes()
	# ax.arrow(0, 0, 0.05, 0.05, head_width=0.05, head_length=0.01, fc='k', ec='k')

	# x = [0,2,4,6,8,10]
	# y = [0]*len(x)
	
	# angles = np.array([45,275,190,100,280,18,45]) 

	x = np.array([ 2, 4, 6, 8, 10, 12, 14, 16])
	y = np.array([ 0] * len(x))
	pct = [ n / 20.0 for n in x]
	print pct
	# s = [n**4 for n in range(len(x))]
	# print s
	draw_dots(x,y,pct)
	# pl.axis('equal')
	# pl.axis([-5,20,-5,40])
	# for i in range(0,len(x)):
	# 	# print x[i],y[i],angles[i]
	# 	draw_line(x[i],y[i],x[i]+1, y[i]+1)
	plt.show()


if __name__ == '__main__':
  main()
