"""import matplotlib.pyplot as plt
fig = plt.figure()
ax = fig.add_axes([0,0,1,1])
langs = ['C', 'C++', 'Java', 'Python', 'PHP']
students = [23,17,35,29,12]
ax.bar(langs,students)
plt.show()"""
import numpy as np
from matplotlib import pyplot as pt
data = [[30,25,50,20],[40,23,51,17],[35,22,45,19]]
x=np.arange(4)
fig=pt.figure()
ax=fig.add_axes([0,0,1,1])
ax.bar(x+0.00,data[0],color='b',width=0.25)
ax.bar(x+0.25,data[1],color='g',width=0.25)
ax.bar(x+0.50,data[2],color='r',width=0.25)
