

class RoboticArm {
  private:
	  double x;
	  double y;
	  double z;
	  bool sujetando;

  public:
	  RoboticArm(double x = 0.0, double y = 0.0, double z = 0.0);
          
          double getX();
          double getY();
          double getZ();
          bool getsujetando();
          
          void grab();
          void release();
          void move(double x , double y, double z);

          	  
};
