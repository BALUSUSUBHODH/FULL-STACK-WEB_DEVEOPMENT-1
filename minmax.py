
a=[1,2,4]
up=a[2]
down=a[0]
mid=a[1]
u=up-mid
d=mid-down
if(u>=d):
    a[1]=down
else:
    a[1]=up
print(a)


      
