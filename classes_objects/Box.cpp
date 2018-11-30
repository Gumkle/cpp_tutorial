class Box{
    private:
        double length;
        double breadth;
        double height;

    public:
        Box(double inputLength, double inputBreadth, double inputHeight) 
        {
                length = inputLength;
                breadth = inputBreadth;
                height = inputHeight;
        }

        ~Box(){
            // destruktor
        }

        double getVolume()
        {
            return length * breadth * height;    
        }
};