#ifndef IFieldMapProvider_h
#define IFieldMapProvider_h

/*
 * IFieldMapProvider will provide the B-Field at a 2D grid (r-z).
 * The provider will return the bin index for r/z. Then the GenericBFieldMapBrBz
 * will use this bin index to get the values at (r0,z0), (r1,z0), (r0,z1), (r1,z1).
 * The interpolation is not computated IFieldMapProvider. Please see GenericBFieldMapBrBz. 
 *
 * -- Tao Lin <lintao AT ihep.ac.cn>
 */

class IFieldMapProvider {

    // Meta data about the map
    virtual int rBinIdx(double r) = 0;
    virtual int zBinIdx(double z) = 0;

    // The Br and Bz
    virtual void access(int rbin, int zbin, double& Br, double& Bz) = 0;

};

#endif
