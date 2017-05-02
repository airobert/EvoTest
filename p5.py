
import numpy as np
import matplotlib.pyplot as plt

def getArrow(p1,p2, trans): #trans = 0~1
    # print i
    # we need to subtract some from each end
    # slope = m
    w = p2.x - p1.x
    h = p2.y - p1.y
    #print p1.x,p1.y
    #print p2.x,p2.y
    #print 'w',w,'h',h
    
    dr = 0.03
    if w == 0:
        dy = dr
        dx = 0
    else:
        theta = np.arctan(np.abs(h/w))
        dx = dr*np.cos(theta)
        dy = dr*np.sin(theta)
    #print 'dx',dx,'dy',dy
    
    if w < 0:  dx *= -1
    if h < 0:  dy *= -1
    #print 'dx',dx,'dy',dy    
    w -= 2*dx
    h -= 2*dy
    #print 'w',w,'h',h
    x = p1.x + dx
    y = p1.y + dy
    #print 'x',x,'y',y
    
    a = plt.Arrow(x,y,w,h,alpha = trans, facecolor = 'yellow', joinstyle ='round',
                  width=0.15 * trans ,zorder=0)
    # a.set_facecolor('yellow')
    # a.set_edgecolor('w')
    return a

class Point:  pass

N = 10
L = np.random.uniform(size=N*2)
print L
pL = list()
for i in range(0,N*2,2):
    p = Point()
    p.x,p.y = L[i],L[i+1]
    pL.append(p)
    
ax = plt.axes()

trans = 0.9
a = getArrow(pL[0],pL[1],trans)
ax.add_patch(a)


for p in pL:  
    plt.scatter(p.x,p.y,s=250,zorder=1)

ax.set_xlim(-0.01,1.01)
ax.set_ylim(-0.01,1.01)
# plt.savefig('example.png')
plt.show()

