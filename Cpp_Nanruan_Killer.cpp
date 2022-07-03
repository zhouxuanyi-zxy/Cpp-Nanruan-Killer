#include <iostream>
// #include <bits/stdc++.h>
// #include <Windows.h>
using namespace std;

int main(){
    cout << "使用pssuspend挂起进程" << endl;
    system("pssuspend.exe StudentMain.exe");
    cout << "使用taskkill结束进程" << endl;
    system("taskkill /F /T /IM StudentMain.exe");
    cout << "使用pskill结束进程" << endl;
    system("pskill.exe -t StudentMain.exe");
    cout << "使用ntsd结束进程" << endl;
    system("ntsd.exe -c q -pn StudentMain.exe");
    return 0;
}