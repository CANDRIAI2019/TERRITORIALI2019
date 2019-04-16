# Territoriali OII 2019 - Delugan Kevin
# TORNELLI - Post Gara
import os

with open('input.txt') as f:
    fin = [x for x in [[int(x) for x in line.split()] for line in f][::-1] if x]
fout = open("output.txt","w")

for t in range(fin.pop()[0]):
    N = fin.pop()[0]
    C = fin.pop()
    
    MAXP=0
    for i in range(N):
        p=0
        for j in range(i,N):
            p+=C[j]
            MAXP=max(MAXP,p)

    fout.write(f"Case #{t+1}: {MAXP}\n")
