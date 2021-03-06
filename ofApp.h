#pragma once

#include "ofMain.h"
#include "ofxGraph.h"
#include "ofxGui.h"

#include "control_eigen.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include "Eigen/Dense"
#include "Eigen/Core"
#include <iostream>
#include <fstream>

using namespace Eigen;
using namespace std;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


		ofxGraph graph;
		ofxGraph graph2;

		long frame;
		ofxPanel gui;
		ofxFloatSlider kk,mm,cc;


		MatrixXd AA;
		MatrixXd BB; 
		MatrixXd CC;
		MatrixXd DD;
		MatrixXd XX;
		MatrixXd dXX;
		MatrixXd uu;
		MatrixXd YY;
		double dt ;
		double tt ;
};
