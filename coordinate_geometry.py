import math

p1x = input("Enter the first pints x value:")
p1y = input("Enter the first points y value:")
p2x = input ("Enter the second points x value:")
p2y = input ("Enter the second points y value:")
p1x = int(p1x)
p1y = int(p1y)
p2x = int(p2x)
p2y = int(p2y)

xDif = (p1x - p2x)**2
yDif = (p1y - p2y)**2

distance = math.sqrt((xDif + yDif))
print(distance)