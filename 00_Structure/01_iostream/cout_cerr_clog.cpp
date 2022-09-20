#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // task가 상위폴더를 바라보고 있어서 파일이 상위에 생성됨.
    // 임의로 이쪽 폴더로 잡기.
    string root = "./00_Structure/01_iostream/";

    ofstream errfile(root + "cerr.txt");
    ofstream outfile(root + "cout.txt");

    cerr.rdbuf(errfile.rdbuf());
    cout.rdbuf(outfile.rdbuf());

    cerr << "한국어도 잘 출력됨";
    cout << "out파일 출력";
}