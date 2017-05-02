import matplotlib.pyplot as plt
import matplotlib.patches as patches

fig12 = plt.figure()
ax12 = fig12.add_subplot(111, aspect='equal')

# More styles:
# styles = ['<-', '<->', '-', '-|>', '<|-', '<|-|>', '-[', ']-', ']-[', '|-|']
ps =[(1,2,3,4), (3,4,5,6.0)]

for p in [
    patches.FancyArrowPatch(
        (x1, y1),
        (x2, y2),
        arrowstyle='<-',
        mutation_scale=20
    ) for (x1,y1,x2,y2) in ps
]:
    ax12.add_patch(p)
# fig12.savefig('arrow12.png', dpi=90, bbox_inches='tight')
fig12.show()
input("x")