import numpy as np

LENGTH = 5
Z_START = 3.75 - LENGTH/2
Z_END = 3.75  + LENGTH/2
NUM_Z = 10
NUM_X = 10
NUM_PHOTS = 10000

script_begin =\
f'''/gps/particle opticalphoton

/gps/pos/type Point

/gps/ang/type iso
/gps/polarization 1 0 0

/gps/ene/type Mono
/gps/ene/mono 3 eV

/run/printProgress {NUM_PHOTS//5}

'''

def pozition():
    for x in np.linspace(0, 37/2, num=NUM_X):
        for z in np.linspace(Z_START + 0.1, Z_END, num=NUM_Z):
            yield (x, z)

if __name__ == '__main__':
    with open('optical_vary_xz.mac', 'w') as f:
        print(script_begin, file=f)
        for (x, z) in pozition():
            print(f'/gps/pos/centre {x:.2f} 0 {z:.2f} mm', file=f)
            print(f'/run/beamOn {NUM_PHOTS}\n', file=f)
