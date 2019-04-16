# Territoriali OII 2019 - Delugan Kevin
# TEMPLATE - Post Gara
import os

with open('input.txt') as f:
    fin = [x for x in [[int(x) for x in line.split()] for line in f][::-1] if x]
fout = open("output.txt","w")

for t in range(fin.pop()[0]):
    N,M = fin.pop()

    fout.write(f"Case #{t+1}: {M+N}\n")
