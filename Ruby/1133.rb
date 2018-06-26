x, y, valores = gets.to_i, gets.to_i, Array.new
x > y ? (x, y = y, x) : 0
x, y = x+1, y-1

for i in x..y do
    (i % 5 == 2 or i % 5 == 3) ? valores.push(i) : 0
end

puts valores