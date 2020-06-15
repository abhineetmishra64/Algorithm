
from matplotlib import pyplot
import numpy
import math
x = numpy.arange(0, math.pi*2, 0.05)
y = numpy.sin(x)
pyplot.plot(x,y)
pyplot.xlabel("angle")
pyplot.ylabel("sin value")
pyplot.title("sin wave")
pyplot.show()
