
השיחה נפתחה. 2 הודעות. הודעה אחת שלא נקראה.


דילוג לתוכן
שימוש ב-Gmail עם קוראי מסך
1 מתוך 10,780
(ללא נושא)
דואר נכנס

מוריה דוד
קבצים מצורפיםיום ג׳, 28 במרץ, 20:24 ‎(לפני 22 שעות)‎


מוריה דוד
קבצים מצורפים
19:07 ‎(לפני 0 דקות)‎
אני



‫בתאריך יום ג׳, 28 במרץ 2023 ב-20:23 מאת מוריה דוד <‪moriah.david24@gmail.com‬‏>:‬


2
קבצים מצורפים
•  נסרקו על ידי Gmail
#pragma once


#include "iostream"

using namespace std;


namespace ariel {

    class Player {

        const int all_cards = 26;

    private:
        string name;
        int cards_taken = 0;
        int stack_size = this->all_cards;

    public:
        Player(string name) : name(name) {}
        int stacksize();
        int cardesTaken();
        string get_name();

    };
}