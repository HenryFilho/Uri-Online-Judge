n, c = gets.to_i - 1, 0

for i in 0..n do
    numeros = Array.new
    for j in 1..3 do
        numeros.push(j+i*4)
    end
    puts "%d %d %d PUM" % [numeros[0], numeros[1], numeros[2]]
end