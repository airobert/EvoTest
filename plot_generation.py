import matplotlib.pyplot as plt
# import numpy as np
import numpy as np
import scipy as sp
# import pylab as pl
import math
import os, sys, re

from pylab import *
import matplotlib.patches as patches

generation = 0
population1 = 0
population2 = 0


# plt.suptitle('bold figure suptitle', fontsize=14, fontweight='bold')
plt.xlabel('First Gene')
plt.ylabel('Second Gene')

def draw_dots (x, y, f, g, player):
	# (x, y) are dots and pct is the percentage in this nash equilibrium and represented as the size
	# s = [(n*x_bound)**2 for n in pct]
	if (player): # if it is the first player
		scatter(x,y,s=10, edgecolors='red', alpha = 0.4, linewidth=str(2))
	else :
		scatter(x,y,s=10, edgecolors='blue', alpha = 0.4 , linewidth=str(2))


f = open('plot.dat')
lines = f.readlines()
generation = int(lines[0].split(' ')[0])
population1 = int(lines[1].split(' ')[0])
population2 = int(lines[2].split(' ')[0])
print generation, ' ', population1, ' ', population2 

head_no = 3
# (next generation +1 lines) are for player 1
for i in range(generation):
	print 'generation= ', i 
	for j in range(population1):
		# print 'j= ', j 
		line = lines[i* (population1 + population2) + j + head_no]
		# print line
		l = line.split(' ')
		x = float(l[0])
		y = float(l[1])
		f = float(l[2])
		g = int(l[3]) # this is the current generation
		draw_dots(x, y, f, g, True)
		
	for j in range(population2):
		# print 'k= ', j 
		line = lines[i* (population1 + population2) + j + population1 + head_no]
		# print line
		l = line.split(' ')
		x = float(l[0])
		y = float(l[1])
		f = float(l[2])
		g = int(l[3]) # this is the current generation
		draw_dots(x, y, f, g, False)

show()
savefig('plot.png')
print 'saved for you'