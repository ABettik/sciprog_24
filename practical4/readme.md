# Practical 4

## Compilation

Compile the program to calculate tan(x) values for angles from 0 to 60 degrees:
```bash
gcc tanval.c -o tanval -lm
```
-lm flag ensures the tan() functio from math lib is available.

## Usage
Run the program with:

```bash
./tanval
```
The output includes the aproximated area under `tan(x)` using Trapezoidal Rule from practical3 and a comparison with actual area.