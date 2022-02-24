#pragma once

#include <G4String.hh>
#include <G4Types.hh>
#include <G4SystemOfUnits.hh>

namespace OptDebugMaterials
{
    static const G4String kNIST_SI = "G4_Si";
    static const G4double SI_DENSITY = 2.33 * g / cm3;
    static const G4String kOP_DET_EFF = "EFFICIENCY";
    static const G4String kREFLECTIVITY = "REFLECTIVITY";
    static const G4String kTRANSMITTANCE = "TRANSMITTANCE";

    const std::vector<G4double> SI_DET_EFF_ENERGIES = {
        3.98830e+00*eV, 3.90793e+00*eV, 3.86124e+00*eV, 3.78585e+00*eV, 3.71335e+00*eV, 3.64358e+00*eV, 3.57638e+00*eV, 3.51161e+00*eV,
        3.44915e+00*eV, 3.42478e+00*eV, 3.40076e+00*eV, 3.36535e+00*eV, 3.33066e+00*eV, 3.29669e+00*eV, 3.25245e+00*eV, 3.19880e+00*eV,
        3.15714e+00*eV, 3.13671e+00*eV, 3.10656e+00*eV, 3.05757e+00*eV, 3.01011e+00*eV, 2.97319e+00*eV, 2.92829e+00*eV, 2.86766e+00*eV,
        2.82587e+00*eV, 2.78528e+00*eV, 2.75364e+00*eV, 2.71508e+00*eV, 2.68501e+00*eV, 2.63395e+00*eV, 2.59170e+00*eV, 2.55079e+00*eV,
        2.51767e+00*eV, 2.47273e+00*eV, 2.42329e+00*eV, 2.35844e+00*eV, 2.31343e+00*eV, 2.27009e+00*eV, 2.20805e+00*eV, 2.15889e+00*eV,
        2.09815e+00*eV, 2.04937e+00*eV, 2.01111e+00*eV, 1.97024e+00*eV, 1.92716e+00*eV, 1.87862e+00*eV, 1.82213e+00*eV, 1.78523e+00*eV,
        1.74349e+00*eV, 1.68883e+00*eV, 1.64583e+00*eV, 1.59179e+00*eV, 1.54610e+00*eV, 1.51233e+00*eV, 1.47103e+00*eV, 1.43193e+00*eV,
        1.40292e+00*eV, 1.38094e+00*eV
    };

    // calibrated using some sample data
    const std::vector<G4double> SI_DET_EFF = std::vector<double>(SI_DET_EFF_ENERGIES.size(), 1);//, 0.596);//{
    // set to zero so that we either detect or reflect
    const std::vector<G4double> SI_TRANSMITTANCE = std::vector<double>(SI_DET_EFF_ENERGIES.size(), 0);
    const std::vector<G4double> SI_BROADCOM_NUMBERS = {
        2.62014e-01, 2.70252e-01, 2.79863e-01, 3.00458e-01, 3.23799e-01, 3.49886e-01, 3.67735e-01, 3.78719e-01,
        3.85584e-01, 3.86957e-01, 3.89703e-01, 3.93822e-01, 3.99314e-01, 4.04805e-01, 4.13043e-01, 4.24027e-01,
        4.35011e-01, 4.41876e-01, 4.48741e-01, 4.51487e-01, 4.45995e-01, 4.36384e-01, 4.24027e-01, 4.06178e-01,
        3.93822e-01, 3.81465e-01, 3.70481e-01, 3.59497e-01, 3.48513e-01, 3.32037e-01, 3.18307e-01, 3.04577e-01,
        2.92220e-01, 2.78490e-01, 2.63387e-01, 2.42792e-01, 2.30435e-01, 2.19451e-01, 2.04348e-01, 1.93364e-01,
        1.79634e-01, 1.67277e-01, 1.56293e-01, 1.46682e-01, 1.38444e-01, 1.30206e-01, 1.19222e-01, 1.09611e-01,
        1.01373e-01, 8.76430e-02, 7.94050e-02, 6.70481e-02, 5.88101e-02, 5.33181e-02, 4.37071e-02, 3.54691e-02,
        2.86041e-02, 2.44851e-02
    };

    const std::vector<G4double> SI_REFR_IDX_ENERGY = {
        4.69993e+00*eV, 4.67512e+00*eV, 4.65057e+00*eV, 4.62455e+00*eV, 4.60053e+00*eV, 4.57506e+00*eV, 4.54988e+00*eV, 4.52497e+00*eV,
        4.50033e+00*eV, 4.47435e+00*eV, 4.45026e+00*eV, 4.42485e+00*eV, 4.39972e+00*eV, 4.37488e+00*eV, 4.35032e+00*eV, 4.32453e+00*eV,
        4.30053e+00*eV, 4.27532e+00*eV, 4.25040e+00*eV, 4.22433e+00*eV, 4.20001e+00*eV, 4.17455e+00*eV, 4.14940e+00*eV, 4.12456e+00*eV,
        4.10001e+00*eV, 4.07441e+00*eV, 4.05045e+00*eV, 4.02546e+00*eV, 3.99949e+00*eV, 3.97513e+00*eV, 3.94980e+00*eV, 3.92479e+00*eV,
        3.90010e+00*eV, 3.87451e+00*eV, 3.85044e+00*eV, 3.82549e+00*eV, 3.79970e+00*eV, 3.77540e+00*eV, 3.75028e+00*eV, 3.72549e+00*eV,
        3.69992e+00*eV, 3.67469e+00*eV, 3.64981e+00*eV, 3.62527e+00*eV, 3.60001e+00*eV, 3.57509e+00*eV, 3.54950e+00*eV, 3.52528e+00*eV,
        3.50040e+00*eV, 3.47489e+00*eV, 3.44976e+00*eV, 3.42498e+00*eV, 3.39962e+00*eV, 3.37464e+00*eV, 3.35002e+00*eV, 3.32486e+00*eV,
        3.30009e+00*eV, 3.27481e+00*eV, 3.24991e+00*eV, 3.22540e+00*eV, 3.19959e+00*eV, 3.17501e+00*eV, 3.15001e+00*eV, 3.12539e+00*eV,
        3.10038e+00*eV, 3.07500e+00*eV, 3.05004e+00*eV, 3.02474e+00*eV, 2.99986e+00*eV, 2.97467e+00*eV, 2.94990e+00*eV, 2.92485e+00*eV,
        2.90022e+00*eV, 2.87533e+00*eV, 2.85021e+00*eV, 2.82488e+00*eV, 2.80000e+00*eV, 2.77494e+00*eV, 2.74970e+00*eV, 2.72493e+00*eV,
        2.70000e+00*eV, 2.67496e+00*eV, 2.64980e+00*eV, 2.62512e+00*eV, 2.59979e+00*eV, 2.57496e+00*eV, 2.55007e+00*eV, 2.52514e+00*eV,
        2.50019e+00*eV, 2.47523e+00*eV, 2.44980e+00*eV, 2.42488e+00*eV, 2.40000e+00*eV, 2.37518e+00*eV, 2.34997e+00*eV, 2.32485e+00*eV,
        2.29984e+00*eV, 2.27494e+00*eV, 2.25017e+00*eV, 2.22513e+00*eV, 2.19986e+00*eV, 2.17516e+00*eV, 2.14989e+00*eV, 2.12484e+00*eV,
        2.10000e+00*eV, 2.07505e+00*eV, 2.05000e+00*eV, 2.02489e+00*eV, 2.00007e+00*eV, 1.97490e+00*eV, 1.95005e+00*eV, 1.92492e+00*eV,
        1.90014e+00*eV, 1.87514e+00*eV, 1.84996e+00*eV, 1.82491e+00*eV, 1.80000e+00*eV, 1.77501e+00*eV, 1.74995e+00*eV, 1.72512e+00*eV,
        1.70004e+00*eV, 1.67501e+00*eV, 1.65004e+00*eV, 1.62496e+00*eV, 1.60000e+00*eV, 1.57500e+00*eV, 1.55000e+00*eV, 1.52502e+00*eV,
        1.49993e+00*eV
    };

    const std::vector<G4double> SI_REFR_IDX_REAL = {
        1.82500e+00, 1.85400e+00, 1.89900e+00, 1.95400e+00, 2.01400e+00, 2.09900e+00, 2.18800e+00, 2.29300e+00,
        2.42600e+00, 2.57400e+00, 2.72300e+00, 2.87700e+00, 3.03700e+00, 3.23200e+00, 3.40600e+00, 3.66800e+00,
        3.92600e+00, 4.20500e+00, 4.45400e+00, 4.65900e+00, 4.79100e+00, 4.88500e+00, 4.92800e+00, 4.98500e+00,
        4.98600e+00, 5.00900e+00, 5.02500e+00, 5.02400e+00, 5.02900e+00, 5.03400e+00, 5.03900e+00, 5.03500e+00,
        5.03200e+00, 5.05100e+00, 5.06800e+00, 5.06600e+00, 5.09100e+00, 5.12000e+00, 5.13500e+00, 5.15900e+00,
        5.17700e+00, 5.21800e+00, 5.24700e+00, 5.27700e+00, 5.31000e+00, 5.36300e+00, 5.42900e+00, 5.48700e+00,
        5.60100e+00, 5.75200e+00, 5.96700e+00, 6.25100e+00, 6.56300e+00, 6.82100e+00, 6.98900e+00, 7.00400e+00,
        6.89900e+00, 6.73500e+00, 6.54800e+00, 6.36900e+00, 6.19100e+00, 6.04100e+00, 5.89700e+00, 5.76400e+00,
        5.64900e+00, 5.54300e+00, 5.45000e+00, 5.35600e+00, 5.27900e+00, 5.19700e+00, 5.12600e+00, 5.05600e+00,
        4.99400e+00, 4.93300e+00, 4.87200e+00, 4.82500e+00, 4.77000e+00, 4.72200e+00, 4.67700e+00, 4.63100e+00,
        4.59100e+00, 4.54900e+00, 4.51000e+00, 4.47100e+00, 4.43500e+00, 4.40200e+00, 4.36800e+00, 4.33700e+00,
        4.30900e+00, 4.28100e+00, 4.25200e+00, 4.22400e+00, 4.20000e+00, 4.17700e+00, 4.15300e+00, 4.13100e+00,
        4.10900e+00, 4.08900e+00, 4.06800e+00, 4.04900e+00, 4.02900e+00, 4.01200e+00, 3.99500e+00, 3.97700e+00,
        3.96000e+00, 3.94410e+00, 3.92910e+00, 3.91440e+00, 3.90000e+00, 3.88600e+00, 3.87230e+00, 3.85890e+00,
        3.84500e+00, 3.83300e+00, 3.82050e+00, 3.80840e+00, 3.79600e+00, 3.78510e+00, 3.77390e+00, 3.76310e+00,
        3.75300e+00, 3.74230e+00, 3.73240e+00, 3.72280e+00, 3.71600e+00, 3.70460e+00, 3.69600e+00, 3.68770e+00,
        3.67800e+00
    };

    const std::vector<G4double> SI_REFR_IDX_IMAG = {
        4.17500e+00, 4.26200e+00, 4.34100e+00, 4.43900e+00, 4.54300e+00, 4.65900e+00, 4.73500e+00, 4.85500e+00,
        4.94100e+00, 5.03100e+00, 5.11100e+00, 5.15800e+00, 5.23300e+00, 5.28000e+00, 5.33200e+00, 5.34700e+00,
        5.35300e+00, 5.27200e+00, 5.14200e+00, 4.94900e+00, 4.74000e+00, 4.54800e+00, 4.36400e+00, 4.20600e+00,
        4.06700e+00, 3.94100e+00, 3.82700e+00, 3.74400e+00, 3.64500e+00, 3.57500e+00, 3.49200e+00, 3.44400e+00,
        3.39200e+00, 3.34700e+00, 3.28600e+00, 3.25800e+00, 3.21300e+00, 3.17400e+00, 3.14600e+00, 3.11200e+00,
        3.08300e+00, 3.05000e+00, 3.03200e+00, 3.00900e+00, 3.00500e+00, 3.00800e+00, 3.01800e+00, 3.02800e+00,
        3.05600e+00, 3.09200e+00, 3.10500e+00, 3.03700e+00, 2.86900e+00, 2.56200e+00, 2.16300e+00, 1.75000e+00,
        1.40400e+00, 1.06800e+00, 8.71000e-01, 6.95000e-01, 5.87000e-01, 4.86000e-01, 4.40000e-01, 3.85000e-01,
        3.26000e-01, 2.97000e-01, 2.59000e-01, 2.32000e-01, 2.03000e-01, 1.87000e-01, 1.71000e-01, 1.54000e-01,
        1.42000e-01, 1.30000e-01, 1.21000e-01, 1.08000e-01, 1.01000e-01, 9.50000e-02, 8.60000e-02, 8.00000e-02,
        6.90000e-02, 6.26000e-02, 5.68000e-02, 4.82000e-02, 4.27000e-02, 3.93000e-02, 3.62000e-02, 3.29000e-02,
        2.80000e-02, 2.40000e-02, 2.28000e-02, 1.89000e-02, 1.44000e-02, 1.22000e-02, 1.09000e-02, 1.00000e-02,
        8.00000e-03, 7.50000e-03, 6.00000e-03, 6.40000e-03, 5.20000e-03, 4.70000e-03, 4.50000e-03, 3.80000e-03,
        3.50000e-03, 2.60000e-03, 2.00000e-03, 2.40000e-03, 1.70000e-03, 1.30000e-03, 8.00000e-04, 1.30000e-03,
        1.70000e-03, 2.10000e-03, 1.70000e-03, 2.40000e-03, 2.90000e-03, 2.60000e-03, 2.40000e-03, 2.40000e-03,
        2.90000e-03, 2.60000e-03, 4.00000e-03, 4.40000e-03, 1.20000e-03, 2.90000e-03, 4.70000e-03, 5.00000e-03,
        4.60000e-03
    };
}
