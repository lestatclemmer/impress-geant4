#pragma once

#include "G4Types.hh"

namespace ImpMaterials {
    static const G4String kAL = "aluminum";
    static const G4int AL_NUM_COMPONENTS = 1;
    // https://www.engineeringtoolbox.com/metal-alloys-densities-d_50.html
    static const G4double AL_DENSITY = 2712 * kg / m3;
    
    const std::vector<G4double> AL_REFR_IDX_ENERGIES = {
        6.19921e-03*eV, 7.00001e-03*eV, 8.05877e-03*eV, 9.00001e-03*eV, 9.91873e-03*eV, 1.23989e-02*eV, 1.54978e-02*eV, 1.85978e-02*eV,
        2.16968e-02*eV, 2.47968e-02*eV, 2.78967e-02*eV, 3.09960e-02*eV, 3.71956e-02*eV, 4.00001e-02*eV, 4.50001e-02*eV, 4.99997e-02*eV,
        5.49990e-02*eV, 6.00001e-02*eV, 6.49983e-02*eV, 7.00001e-02*eV, 8.00001e-02*eV, 9.00001e-02*eV, 9.99953e-02*eV, 1.20000e-01*eV,
        1.39999e-01*eV, 1.59998e-01*eV, 1.79998e-01*eV, 1.99997e-01*eV, 2.19998e-01*eV, 2.40000e-01*eV, 2.59996e-01*eV, 2.80000e-01*eV,
        3.00000e-01*eV, 3.20000e-01*eV, 3.39999e-01*eV, 3.60001e-01*eV, 3.79993e-01*eV, 4.00001e-01*eV, 4.50001e-01*eV, 4.99997e-01*eV,
        6.00001e-01*eV, 7.00001e-01*eV, 8.00001e-01*eV, 9.00001e-01*eV, 9.99953e-01*eV, 1.10003e+00*eV, 1.20000e+00*eV, 1.23999e+00*eV,
        1.28000e+00*eV, 1.31999e+00*eV, 1.35998e+00*eV, 1.39999e+00*eV, 1.47998e+00*eV, 1.51999e+00*eV, 1.55998e+00*eV, 1.59998e+00*eV,
        1.70000e+00*eV, 1.79998e+00*eV, 1.90087e+00*eV, 1.99997e+00*eV, 2.19998e+00*eV, 2.40000e+00*eV, 2.59996e+00*eV, 2.80000e+00*eV,
        3.00000e+00*eV, 3.39999e+00*eV, 3.79993e+00*eV, 4.00001e+00*eV, 4.99997e+00*eV, 6.00001e+00*eV, 7.00001e+00*eV, 8.00001e+00*eV,
        9.00001e+00*eV, 9.99953e+00*eV, 1.10003e+01*eV, 1.20000e+01*eV, 1.29999e+01*eV, 1.39999e+01*eV, 1.43999e+01*eV, 1.45999e+01*eV,
        1.47998e+01*eV, 1.49998e+01*eV, 1.51000e+01*eV, 1.51999e+01*eV, 1.52999e+01*eV, 1.53998e+01*eV, 1.55000e+01*eV, 1.55998e+01*eV,
        1.57998e+01*eV, 1.59998e+01*eV, 1.70000e+01*eV, 1.79998e+01*eV, 1.90000e+01*eV, 1.99997e+01*eV, 2.49998e+01*eV, 3.00000e+01*eV,
        3.50001e+01*eV, 4.00001e+01*eV, 4.50001e+01*eV, 4.99997e+01*eV, 5.49990e+01*eV, 6.00001e+01*eV, 6.19983e+01*eV, 6.39984e+01*eV,
        6.59982e+01*eV, 6.79999e+01*eV, 7.00001e+01*eV, 7.09982e+01*eV, 7.20001e+01*eV, 7.20503e+01*eV, 7.21006e+01*eV, 7.22014e+01*eV,
        7.22982e+01*eV, 7.23995e+01*eV, 7.25011e+01*eV, 7.25988e+01*eV, 7.27009e+01*eV, 7.27991e+01*eV, 7.28976e+01*eV, 7.30006e+01*eV,
        7.30996e+01*eV, 7.31988e+01*eV, 7.32984e+01*eV, 7.33982e+01*eV, 7.34982e+01*eV, 7.35986e+01*eV, 7.36992e+01*eV, 7.38001e+01*eV,
        7.39013e+01*eV, 7.39983e+01*eV, 7.45008e+01*eV, 7.50010e+01*eV, 7.54988e+01*eV, 7.59986e+01*eV, 7.69992e+01*eV, 7.79971e+01*eV,
        7.90010e+01*eV, 8.00001e+01*eV, 8.20001e+01*eV, 8.40001e+01*eV, 8.59986e+01*eV, 8.80007e+01*eV, 9.00001e+01*eV, 9.19969e+01*eV,
        9.39986e+01*eV, 9.60001e+01*eV, 9.79957e+01*eV, 9.99953e+01*eV, 1.05000e+02*eV, 1.10003e+02*eV, 1.15002e+02*eV, 1.20000e+02*eV,
        1.24999e+02*eV, 1.29999e+02*eV, 1.34999e+02*eV, 1.39999e+02*eV, 1.44999e+02*eV, 1.49998e+02*eV, 1.59998e+02*eV, 1.70000e+02*eV,
        1.79998e+02*eV, 1.90000e+02*eV, 1.99997e+02*eV, 2.49998e+02*eV, 3.00000e+02*eV, 4.00001e+02*eV, 4.99997e+02*eV, 6.00001e+02*eV,
        7.00001e+02*eV, 8.00001e+02*eV, 9.00001e+02*eV, 9.99953e+02*eV, 1.10003e+03*eV, 1.20000e+03*eV, 1.29999e+03*eV, 1.39999e+03*eV,
        1.44999e+03*eV, 1.49998e+03*eV, 1.51999e+03*eV, 1.53998e+03*eV, 1.55000e+03*eV, 1.55199e+03*eV, 1.55398e+03*eV, 1.55798e+03*eV,
        1.55898e+03*eV, 1.55998e+03*eV, 1.56199e+03*eV, 1.56400e+03*eV, 1.57998e+03*eV, 1.59498e+03*eV, 1.67499e+03*eV, 1.70000e+03*eV,
        1.79998e+03*eV, 1.90000e+03*eV, 1.99997e+03*eV, 2.49998e+03*eV, 3.00000e+03*eV, 3.50001e+03*eV, 4.00001e+03*eV, 4.99997e+03*eV,
        6.00001e+03*eV, 7.00001e+03*eV, 8.00001e+03*eV, 9.00001e+03*eV, 9.49998e+03*eV, 9.99953e+03*eV
    };

    const std::vector<G4double> AL_REFR_IDX_REAL = {
        4.23960e+02, 3.97930e+02, 3.64040e+02, 3.39620e+02, 3.18810e+02, 2.74380e+02, 2.33560e+02, 2.02630e+02,
        1.77930e+02, 1.57300e+02, 1.40050e+02, 1.25140e+02, 1.02100e+02, 9.19550e+01, 7.57480e+01, 6.85350e+01,
        6.35540e+01, 5.85800e+01, 5.44130e+01, 5.09510e+01, 4.37750e+01, 3.84610e+01, 3.35190e+01, 2.62160e+01,
        2.08370e+01, 1.67550e+01, 1.40880e+01, 1.21950e+01, 1.07420e+01, 9.55800e+00, 8.58810e+00, 7.77570e+00,
        7.07960e+00, 6.48080e+00, 5.95640e+00, 5.49030e+00, 5.07350e+00, 4.70970e+00, 3.93800e+00, 3.33720e+00,
        2.47380e+00, 1.92050e+00, 1.57820e+00, 1.38990e+00, 1.31570e+00, 1.32810e+00, 1.39980e+00, 1.43590e+00,
        1.48670e+00, 1.67840e+00, 1.97390e+00, 2.28020e+00, 2.69450e+00, 2.76680e+00, 2.76750e+00, 2.61540e+00,
        2.16060e+00, 1.83010e+00, 1.57240e+00, 1.36600e+00, 1.07280e+00, 8.73400e-01, 7.27800e-01, 6.07900e-01,
        5.21350e-01, 3.98770e-01, 3.14740e-01, 2.80030e-01, 1.81370e-01, 1.26770e-01, 9.42360e-02, 7.25050e-02,
        5.71670e-02, 4.63040e-02, 3.84680e-02, 3.57530e-02, 3.64370e-02, 4.41680e-02, 5.48630e-02, 6.70410e-02,
        9.45170e-02, 1.50650e-01, 1.79430e-01, 2.05690e-01, 2.33440e-01, 2.59360e-01, 2.82710e-01, 3.03730e-01,
        3.40310e-01, 3.71970e-01, 4.91310e-01, 5.72510e-01, 6.32420e-01, 6.79120e-01, 8.15120e-01, 8.80130e-01,
        9.18020e-01, 9.41890e-01, 9.58340e-01, 9.70480e-01, 9.79980e-01, 9.88270e-01, 9.91430e-01, 9.94570e-01,
        9.97910e-01, 1.00190e+00, 1.00700e+00, 1.01080e+00, 1.01690e+00, 1.01740e+00, 1.01790e+00, 1.01920e+00,
        1.02060e+00, 1.02260e+00, 1.02490e+00, 1.03050e+00, 1.03490e+00, 1.03050e+00, 1.02550e+00, 1.02460e+00,
        1.02620e+00, 1.02590e+00, 1.02190e+00, 1.01940e+00, 1.01810e+00, 1.01730e+00, 1.01670e+00, 1.01610e+00,
        1.01560e+00, 1.01510e+00, 1.01320e+00, 1.01180e+00, 1.01100e+00, 1.01060e+00, 1.00950e+00, 1.00780e+00,
        1.00750e+00, 1.00750e+00, 1.00770e+00, 1.00740e+00, 1.00650e+00, 1.00600e+00, 1.00580e+00, 1.00410e+00,
        1.00120e+00, 9.96520e-01, 9.92650e-01, 9.91230e-01, 9.92850e-01, 9.94150e-01, 9.92330e-01, 9.91390e-01,
        9.89410e-01, 9.87610e-01, 9.87930e-01, 9.88830e-01, 9.89340e-01, 9.89660e-01, 9.89120e-01, 9.89090e-01,
        9.90070e-01, 9.90540e-01, 9.91110e-01, 9.93130e-01, 9.94800e-01, 9.96940e-01, 9.97970e-01, 9.98600e-01,
        9.98980e-01, 9.99240e-01, 9.99400e-01, 9.99530e-01, 9.99610e-01, 9.99680e-01, 9.99740e-01, 9.99790e-01,
        9.99810e-01, 9.99830e-01, 9.99850e-01, 9.99870e-01, 9.99890e-01, 9.99910e-01, 9.99910e-01, 9.99920e-01,
        9.99920e-01, 9.99930e-01, 9.99920e-01, 9.99900e-01, 9.99870e-01, 9.99860e-01, 9.99840e-01, 9.99840e-01,
        9.99850e-01, 9.99860e-01, 9.99870e-01, 9.99910e-01, 9.99940e-01, 9.99950e-01, 9.99970e-01, 9.99980e-01,
        9.99984e-01, 9.99989e-01, 9.99991e-01, 9.99993e-01, 9.99994e-01, 9.99995e-01
    };

    const std::vector<G4double> AL_REFR_IDX_IMAG = {
        4.83700e+02, 4.58500e+02, 4.29620e+02, 4.08920e+02, 3.91710e+02, 3.54350e+02, 3.21080e+02, 2.95420e+02,
        2.75340e+02, 2.58260e+02, 2.43430e+02, 2.30190e+02, 2.08100e+02, 1.99990e+02, 1.81780e+02, 1.64810e+02,
        1.53450e+02, 1.44230e+02, 1.36090e+02, 1.29490e+02, 1.18390e+02, 1.08960e+02, 1.01280e+02, 8.81970e+01,
        7.82740e+01, 6.98570e+01, 6.28410e+01, 5.71560e+01, 5.25180e+01, 4.85930e+01, 4.52570e+01, 4.23670e+01,
        3.98260e+01, 3.75950e+01, 3.56080e+01, 3.38140e+01, 3.21830e+01, 3.07370e+01, 2.75800e+01, 2.50040e+01,
        2.09820e+01, 1.79910e+01, 1.56560e+01, 1.37840e+01, 1.22450e+01, 1.09690e+01, 9.89140e+00, 9.49390e+00,
        9.06550e+00, 8.59700e+00, 8.30580e+00, 8.11340e+00, 8.18780e+00, 8.25730e+00, 8.38660e+00, 8.49140e+00,
        8.35650e+00, 8.06010e+00, 7.73540e+00, 7.40520e+00, 6.78390e+00, 6.24180e+00, 5.77810e+00, 5.36760e+00,
        5.00080e+00, 4.39570e+00, 3.91650e+00, 3.70810e+00, 2.90290e+00, 2.35630e+00, 1.95190e+00, 1.63660e+00,
        1.37750e+00, 1.15550e+00, 9.56770e-01, 7.71630e-01, 5.90860e-01, 3.91150e-01, 2.92930e-01, 2.34200e-01,
        1.65890e-01, 1.10410e-01, 9.42230e-02, 7.99590e-02, 6.83480e-02, 6.14070e-02, 5.66970e-02, 5.33490e-02,
        4.83200e-02, 4.42020e-02, 3.24090e-02, 2.76810e-02, 2.47700e-02, 2.23400e-02, 1.58940e-02, 1.16510e-02,
        9.31210e-03, 7.84660e-03, 6.61910e-03, 5.74690e-03, 5.00040e-03, 4.36960e-03, 4.23970e-03, 4.10920e-03,
        3.89260e-03, 3.67300e-03, 3.54250e-03, 3.49570e-03, 3.52490e-03, 3.51080e-03, 3.48770e-03, 3.47670e-03,
        3.44000e-03, 3.41410e-03, 3.62180e-03, 4.11640e-03, 1.24760e-02, 2.00720e-02, 2.00120e-02, 1.91450e-02,
        1.95640e-02, 2.42270e-02, 2.60180e-02, 2.54320e-02, 2.48310e-02, 2.44990e-02, 2.43750e-02, 2.42820e-02,
        2.42280e-02, 2.41840e-02, 2.43430e-02, 2.40200e-02, 2.39550e-02, 2.38530e-02, 2.51800e-02, 2.47570e-02,
        2.45010e-02, 2.44760e-02, 2.54600e-02, 2.68260e-02, 2.82320e-02, 2.89560e-02, 3.09180e-02, 3.33920e-02,
        3.53110e-02, 3.58830e-02, 3.30610e-02, 2.99200e-02, 2.44150e-02, 2.54520e-02, 2.49280e-02, 2.40630e-02,
        2.34210e-02, 2.06060e-02, 1.77650e-02, 1.63040e-02, 1.54370e-02, 1.47730e-02, 1.37280e-02, 1.09870e-02,
        9.65170e-03, 8.47160e-03, 7.50990e-03, 4.18630e-03, 2.34920e-03, 9.68870e-04, 4.35030e-04, 2.20010e-04,
        1.18110e-04, 7.29920e-05, 4.67710e-05, 3.11150e-05, 2.15860e-05, 1.56280e-05, 1.16360e-05, 8.94000e-06,
        7.84220e-06, 6.80490e-06, 6.48180e-06, 6.19010e-06, 6.04840e-06, 1.10260e-05, 2.36870e-05, 3.29110e-05,
        4.11310e-05, 4.99980e-05, 7.18470e-05, 8.54180e-05, 7.84800e-05, 7.48620e-05, 6.16330e-05, 5.79740e-05,
        4.71380e-05, 3.84970e-05, 3.20790e-05, 1.36420e-05, 7.14080e-06, 4.04840e-06, 2.48430e-06, 1.07260e-06,
        5.51020e-07, 3.14630e-07, 1.91730e-07, 1.24880e-07, 1.27200e-07, 8.24100e-08
    };

}
