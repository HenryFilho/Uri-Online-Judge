xy = gets.split
x, y = xy[0].to_i, xy[1].to_i
z = 0
r = ""
for i in 1..y do
    if (z+1 == x || i == y)
        r += "%d" % i
        puts r

        r = ""
        z = 0
    else
        r += "%d " % i
        z += 1
    end
end