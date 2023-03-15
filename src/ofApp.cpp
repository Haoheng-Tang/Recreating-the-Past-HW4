#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(110, 183, 220);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(244, 93, 17);
	/*
	for (int x = 0; x < 45; x=x+2) {
		for (int y = 0; y < 60; y=y+2) {
			int bol = x % 2;
			int bolean = y% 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 , y * 30);
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 , x * 30 + 30 * bolean, y * 30 , x * 30 , y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 , x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30, y * 30);

		}
	}


	for (int x = 0; x < 45; x = x + 6) {
		for (int y = 0; y < 60; y = y + 3) {
			int bol = y % 2;
			int bolean = x % 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);

		}
	}



	for (int x = 1; x < 45; x = x + 2) {
		for (int y = 1; y < 60; y = y + 2) {
			int bol = y % 2;
			int bolean = x % 2;
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);

		}
	}


	for (int x = 0; x < 45; x = x + 2) {
		for (int y = 0; y < 60; y = y + 2) {
			int bol = x % 2;
			int bolean = y % 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30);
			ofDrawTriangle(x * 30 + 30 * bol, y * 30, x * 30 + 30 * bolean, y * 30, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30, x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30, y * 30);

		}
	}


	
	ofSeedRandom(mouseX);
	for (int x = 0; x < 45; x++) {
		for (int y = 0; y < 60; y++) {
			int bol = x % 2;
			int bolean = y % 2;
			int randomValue = ofRandom(0, 90);
			if (sin(randomValue*y) > 0) {
				ofDrawTriangle(x * 30 + 30 * bolean, y * 30, x * 30 + 30, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30);
			}
		}
	}

	for (int x = 0; x < 45; x = x + 3) {
		for (int y = 0; y < 60; y = y + 2) {
			int bol = x % 2;
			int bolean = y % 2;
			int randomValue = ofRandom(0, 90);
			if (sin(randomValue*y) > 0) {
				ofDrawTriangle(x * 30, y * 30, x * 30 + 30, y * 30 + 30, x * 30 + 30, y * 30);
			}
		}
	}

	for (int x = 0; x < 45; x = x + 4) {
		for (int y = 0; y < 60; y = y + 3) {
			int randomValue = ofRandom(0, 90);
			int bol = x % 2;
			int bole = y % 3;
			int bolean = (bole + randomValue) % 2;
			int bolea = (bol + randomValue) % 2;
			ofDrawTriangle(x * 30 + 30 * bolea, y * 30 + 30 + 30 * bolean, x * 30 + 30, y * 30 + 30, x * 30 + 30 * bolean, y * 30);

		}
	}
	for (int x = 0; x < 45; x = x + 6) {
		for (int y = 0; y < 60; y = y + 3) {
			int randomValue = ofRandom(0, 90);
			int bol = randomValue*y % 2;
			int bolean = randomValue*x % 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);

		}
	}

	for (int x = 2; x < 45; x = x + 1) {
		for (int y = 2; y < 60; y = y + 1) {
			int randomValue = ofRandom(0, 90);
			int bolean = randomValue * y % 2;
			int bol = randomValue * x*y % 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);

		}
	}


	for (int x = 1; x < 45; x = x + 2) {
		for (int y = 1; y < 60; y = y + 2) {
			int randomValue = ofRandom(0, 90);
			int bol = randomValue * y % 2;
			int bolean = randomValue * x % 2;
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);

		}
	}


	for (int x = 0; x < 45; x = x + 6) {
		for (int y = 0; y < 60; y = y + 3) {
			int randomValue = ofRandom(0, 90);
			int bol = y % 2;
			int bolean = randomValue * x % 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);

		}
	}


	for (int x = 1; x < 45; x = x + 2) {
		for (int y = 1; y < 60; y = y + 2) {
			int randomValue = ofRandom(0, 90);
			int bol = randomValue * y % 2;
			int bolean = (x+y) % 2;
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);

		}
	}

	for (int x = 0; x < 45; x++) {
		for (int y = 0; y < 60; y++) {
			int randomValue = ofRandom(0, 90);
			int bol = x % 2;
			int bole = y % 3;
			int bolean = (bole + randomValue)% 2;
			ofDrawTriangle(x*30 +30* bolean, y*30+30 * bolean, x*30 + 30 * bol, y*30 + 30 * bol, x*30 + 30 * bolean, y*30+30 * bol);
			ofDrawTriangle(x*30 +30* bol, y*30+30 * bol, x*30 + 30 * bolean, y*30 + 30 * bolean, x*30 + 30 * bol, y*30+30 * bol);
			ofDrawTriangle(x*30 +30* bolean, y*30+30 * bol, x*30 + 30 * bol, y*30 + 30 * bolean, x*30 + 30 * bol, y*30+30 * bolean);

		}
	}


	ofSeedRandom(mouseY);
	for (int x = 0; x < 45; x=x+4) {
		for (int y = 0; y < 60; y=y+9) {
			int randomValue = ofRandom(0, 90);
			int bol = x % 2;
			int bole = y % 3;
			int bolean = (bole + randomValue) % 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30, x * 30 + 30 * bol, y * 30);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30, x * 30 + 30 * bol, y * 30) ;

		}
	}

	for (int x = 0; x < 45; x=x+4) {
		for (int y = 2; y < 60; y=y+6) {
			int randomValue = ofRandom(0, 90);
			int bol = x % 2;
			int bole = y % 7;
			int bolean = (bole + randomValue) % 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30, y * 30 + 30 * bol);

		}
	}

	for (int x = 45; x >0; x = x - 4) {
		for (int y = 2; y < 60; y = y + 6) {
			int randomValue = ofRandom(0, 90);
			int bol = x % 2;
			int bole = y % 7;
			int bolean = (bole + randomValue) % 2;
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30, y * 30 + 30 * bol);

		}
	}


	for (int x = 1; x < 45; x = x + 5) {
		for (int y = 1; y < 60; y = y + 7) {
			int randomValue = ofRandom(0, 90);
			int bol = (randomValue + x) % 2;
			int bolean = randomValue*y % 2;
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);

		}
	}

	for (int x = 0; x < 45; x++) {
		for (int y = 0; y < 60; y++) {
			int randomValue = ofRandom(0, 90);
			int bol = x % 2;
			int bole = y % 5;
			int bolean = (bole + randomValue) % 2;
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);

		}
	}


	for (int x = 0; x < 45; x++) {
		for (int y = 0; y < 60; y++) {
			int randomValue = ofRandom(0, 90);
			int bol = x* randomValue % 2;
			int bole = (y+ randomValue) % 5;
			int bolean = (bole + randomValue) % 2;
			ofDrawTriangle(x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 + 30 * bol, y * 30 + 30 * bolean, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);
			ofDrawTriangle(x * 30 + 30 * bolean, y * 30 + 30 * bol, x * 30 + 30 * bol, y * 30 + 30 * bol, x * 30 + 30 * bolean, y * 30 + 30 * bol);

		}
	}

	*/
	ofSeedRandom(mouseX);
	for (int x = 0; x < 45; x++) {
		for (int y = 0; y < 60; y++) {
			int randomValue = ofRandom(0, 190);
			int bol = (randomValue*(x+y)) % 4;
			if (bol ==0)
			{
				ofDrawTriangle(x * 30 , y * 30, x * 30+30, y * 30, x * 30 + 30, y * 30 + 30);
			}
			else if (bol==1) {
				ofDrawTriangle(x * 30, y * 30, x * 30+30, y * 30, x * 30, y * 30 + 30);
			}
			else if (bol==2) {
				ofDrawTriangle(x * 30+30, y * 30, x * 30+30, y * 30+30, x * 30, y * 30 + 30);
			}
			else
			{
				ofDrawTriangle(x * 30, y * 30, x * 30, y * 30+30, x * 30+30, y * 30 + 30);

			}
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
