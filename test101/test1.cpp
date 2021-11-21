#include<iostream>

class date
{
    private:
    int day;
    int month;
    int year;
    public:
    date(int = 7, int = 8, int = 2005);
    void setDate(int, int, int);
    void showDate();
};

date::date(int mm, int dd, int yyyy)
{
    month = mm;
    day = dd;
    year = yyyy;
}

void date::setDate(int mm, int dd, int yyyy)
{
    month = mm; day = dd; year = yyyy;
    return;
}
void date::showDate()
{
    std::cout<<"The date is ";
    std::cout<<month<<"/"<<day<<"/"<<year;
    return;
}
