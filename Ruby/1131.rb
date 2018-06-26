grenais = 0
inter = 0
gremio = 0
empates = 0

while true
    entrada = gets.split

    grenais += 1
    if entrada[0] > entrada[1]
        inter += 1
    elsif entrada[0] < entrada[1]
        gremio += 1
    else
        empates += 1
    end
    
    puts "Novo grenal (1-sim 2-nao)"
    entrada = gets.to_i
    if entrada == 2
        break
    end
end

puts "%i grenais" % grenais
puts "Inter:%i" % inter
puts "Gremio:%i" % gremio
puts "Empates:%i" % empates
if inter > gremio
    puts "Inter venceu mais"
elsif inter < gremio
    puts "Gremio venceu mais"
else
    puts "Nao houve vencedor"
end