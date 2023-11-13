 
class Date
{
private:
    int _year;
    int _month;
    int _day;
public:
    Date(int year=1, int month=1, int day=1);
    void validDate();
    int getYear();
    int getMonth();
    int getDay();
};

