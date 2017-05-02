from matplotlib.pyplot import *
from numpy import *
import matplotlib.patches as patches

# x = arange(10)
# y = x

# Plot junk and then a filled region

# Now lets make an arrow object
# arr = Arrow(2, 2, 1, 1, edgecolor='white')

# Get the subplot that we are currently working on
# ax = gca()

# Now add the arrow
# ax.add_patch(arr)

x_bound = 10
y_bound = 10
# We should be able to make modifications to the arrow.
# Lets make it green.

def draw_dots (x, y, pct):
	# (x, y) are dots and pct is the percentage in this nash equilibrium and represented as the size
	s = [(n*x_bound)**2 for n in pct]
	scatter(x,y,s=s, edgecolors='blue', color='red')
	y = [n+1 for n in y]
	scatter(x,y,s=s, edgecolors='yellow', color='red')

# patches.FancyArrowPatch(
#         (0.24, 0.2),
#         (0.34, 0.8),
#         arrowstyle='->',
#         mutation_scale=30
#     ),

def make_arrow(x1, y1, x2, y2):
	# x = arange(10)
	# y = x
	# plot(x,y)
	arr = Arrow(x1, y1, x2, y2, edgecolor='red', alpha = 0.2)
	arr = Arrow(x1, y1, x2, y2, edgecolor='red', alpha = 0.2)
	ax = gca()
	ax.add_patch(arr)
	arr.set_facecolor('yellow')
	# plot(x, y)


def main():
	make_arrow(1, 3, 2, 2)

	x = np.array([ 2, 4, 6, 8, 10, 12, 14, 16])
	y = np.array([ 0] * len(x))
	
	# plot(x,y)
	pct = [ n / 20.0 for n in x]
	draw_dots(x,y,pct)
	show()



if __name__ == '__main__':
  main()
