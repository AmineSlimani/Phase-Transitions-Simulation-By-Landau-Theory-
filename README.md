# Phase Transitions Simulation By Landau Theory

This repository contains C code implementations related to Landau theory, focusing on phase transitions and their properties. The simulations compute various physical quantities such as free energy, order parameters, and critical exponents based on theoretical frameworks.

## Table of Contents

- [Repository Overview](#repository-overview)
- [Code Files](#code-files)
- [Usage](#usage)
- [Results](#results)
- [License](#license)

## Repository Overview

The repository includes several C code files that compute various properties related to phase transitions. The key components of the project are:

1. **Logarithmic Properties**: Analysis of the relationship between temperature, magnetization, and an additional variable \(X\).
2. **Free Energy Calculations**: Computation of free energy based on order parameters and temperature.
3. **Order Parameter Calculation**: Determining the order parameter as a function of temperature.
4. **Heat Capacity and Susceptibility**: Analysis of specific heat capacity and susceptibility in the context of phase transitions.

## Code Files

1. **`ec.c`**: 
   - Computes the logarithmic values of temperature differences from the critical temperature, magnetization, and an additional variable \(X\). 
   - Outputs the results to `exp.dat`.

2. **`F_m.c`**: 
   - Calculates the free energy \(F\) based on the order parameter \(m\) and temperature. 
   - Saves the results in `Elibre.dat`.

3. **`F_T.c`**: 
   - Similar to `F_m.c`, this code calculates the free energy while varying temperature and outputs to `Elibre_T.dat`.

4. **`m.c`**: 
   - Computes the order parameter \(m\) as a function of temperature and the critical temperature \(T_c\). 
   - Results are stored in `aim.dat`.

5. **`X_Cp.c`**: 
   - Analyzes the heat capacity \(C_p\) and susceptibility \(X\) based on Landau theory.
   - Outputs the computed values to `landau.dat`.

## Usage

To compile and run the code files, follow these steps:

1. Ensure you have a C compiler installed (e.g., `gcc`).
2. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/AmineSlimani/Phase-Transitions-Simulation-By-Landau-Theory.git
   cd Phase-Transitions-Simulation-By-Landau-Theory
   ```

3. Compile the C files using `gcc`:

   ```bash
   gcc ec.c -o ec
   gcc F_m.c -o F_m
   gcc F_T.c -o F_T
   gcc m.c -o m
   gcc X_Cp.c -o X_Cp
   ```

4. Run each program:

   ```bash
   ./ec
   ./F_m
   ./F_T
   ./m
   ./X_Cp
   ```

5. The output files (`exp.dat`, `Elibre.dat`, `Elibre_T.dat`, `aim.dat`, `landau.dat`) will be generated in the same directory.

## Results

The output files contain the computed values of various properties related to phase transitions. You can use them for further analysis, plotting, or comparative studies. Each output file is structured to facilitate interpretation of the simulation results.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
