import math
with open("uni.dat","r") as a:
    with open("v.dat","w") as b:
        for n in a:
            if(1-float(n)>0):
                b.write(f"{-2*math.log(1-float(n))}\n")