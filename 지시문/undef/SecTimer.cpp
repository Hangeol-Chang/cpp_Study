class SecTimer
{
private :
    int iniTime;
public :
    SecTimer(int time);
    void PRINT();
};

SecTimer::SecTimer(int time)
{
    iniTime = time;
}

void SecTimer::PRINT()
{
    cout << "time seted : " << iniTime << " in SecTimer" << endl;
}

SecTimer timer1(TIME);