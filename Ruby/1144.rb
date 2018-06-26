n = gets.to_i

for i in 1..n do
    puts "%d %d %d" % [i, i ** 2, i ** 3]
    puts "%d %d %d" % [i, i ** 2 + 1, i ** 3 + 1]
end