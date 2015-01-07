#pragma once
#include "afxwin.h"
#include "Point.h"
#include "PolarPoint.h"

#undef min
#undef max

struct candidateModel{
	int id;
	double descriptors_diff,partial_weight;
};

using namespace std; 

int compareDescriptors(const void * a,const void * b);
double round(double number);
void getDescriptorsSorted(candidateModel id_array[], int left_id, int right_id);
void getPartialWeightsSorted(candidateModel id_array[], int left_id, int right_id);
void getIDSorted(candidateModel id_array[], int left_id, int right_id);
void GetPolarCoordinate(vector<Point> &grid_points,vector<PolarPoint> &grid_polar_points);
void FindMaxMin(MyMesh &mesh, double &x_max, double &y_max, double &z_max, double &x_min, double &y_min, double &z_min);