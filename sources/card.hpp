namespace ariel{

    enum CardShape {
        Club,
        Diamond,
        Heart,
        Spade
    };

    class Card {

        private:
            CardShape shape;
            int value;

        public:
            CardShape get_shape();
            int get_value();
            Card(int value, CardShape shape);

    };
}