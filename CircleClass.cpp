# include<iostream>
# include<cstdlib>
# include<cmath>
using namespace std;

class circle{
    
private:
    float x,y,radius;
    float perimeter, area;
public:
    circle(float x_user, float y_user, float radius_user)
    {
        x = x_user;
        y = y_user;
        radius = radius_user;
    }
    float area_circle(){
        area = (M_PI)*(radius*radius);
        return area;
    }
    float perimeter_circle(){
        perimeter = (M_PI)*(radius*2);
        return perimeter;
    }

    
};
int main(){

    circle c(0,0,5);
    
    cout<<c.perimeter_circle()<<endl;
    
    
    return 0;
}

