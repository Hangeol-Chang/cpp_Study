class MinTimer
{
private :
    int iniTime;
public :
    MinTimer(int time);
    void PRINT();
};

MinTimer::MinTimer(int time)
{
    iniTime = time;
}

void MinTimer::PRINT()
{
    cout << "time seted : " << iniTime << " in MinTimer" << endl;
}

MinTimer timer2(TIME);