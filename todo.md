# Todo:
=======

setup vector library to use operators rather than .add .sub etc
https://stackoverflow.com/questions/23718850/is-it-possible-to-add-two-objects-of-same-class-using-operator

seutp tests to be run from main makefile



# Makefile Structure:
=====================


# Engine Structure:
===================

Math
    Quat
    Vec
    Matrix

Physics
    Sim
        Torque
        Force
        Accel
        Vel
        Pos



*May switch to 

Physics
    Rigid 
        Torque
        Force
        Accel
        Vel
        Pos
    Sim 
        *Rigid
        Time
        Update
        MMOI
        Motor Burn
        Force Vec
