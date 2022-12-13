# Microscopic simulation code

The mean of this project is to develop a microscopic simulation code
based on the Lennard-Jones potential to study a fluid of homogeneous particles.


## Build

This program has not external lib dependecies (since it's a sequential 
version). Parallelism will be added when computation kernels we'll be
implemented and invoked.

### Makefile

To compile the project using the given Makefile, make sure you are at the
root's project and make sure a "bin" directory exists.

## Implemented method

### Potential computation


$U^{LJ} = 4 \sum_{i=1}^{N} \sum_{j>i}^{N} \varepsilon^{*} \[ \left( \frac{r^{*}}{r_{ij}} \right)^{12} - 2 \left( \frac{r^{*}}{r_{ij}} \right) \]$
