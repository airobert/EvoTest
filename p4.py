import numpy as np
import scipy as sp
import pylab as pl
import math

x = np.array([ 2, 4, 8, 10, 12, 14, 16])
y = np.array([ 5, 10, 15, 20, 25, 30, 35])
angles = np.array([45,275,190,100,280,18,45]) 

def draw_line(x,y,angle,length):
  cartesianAngleRadians = (450-angle)*math.pi/180.0
  terminus_x = x + length * math.cos(cartesianAngleRadians)
  terminus_y = y + length * math.sin(cartesianAngleRadians)
  pl.plot([x, terminus_x],[y,terminus_y])
  print [x, terminus_x],[y,terminus_y]


pl.axis('equal')
pl.axis([-5,20,-5,40])
for i in range(0,len(x)):
  print x[i],y[i],angles[i]
  draw_line(x[i],y[i],angles[i],1)

pl.show()

plt.annotate(r'$cos(\frac{2\pi}{3})=-\frac{1}{2}$',
             xy=(t, np.cos(t)), xycoords='data',
             xytext=(-90, -50), textcoords='offset points', fontsize=16,
             arrowprops=dict(arrowstyle="->", connectionstyle="arc3,rad=.2"))