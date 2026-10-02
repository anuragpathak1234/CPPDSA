#include <iostream>

using namespace std;


class Box{

  public  :
  double l;
  double w;
  double h;

  Box(){
    this->l = -1;
    this->w = -1;
    this->h = -1;


  }

  // cube

  Box(double side){
    this->l = side;
    this->w = side;
    this->h = side;
  }

  Box(double l, double w, double h){
    this->l = l;
    this->w = w;
    this->h = h;
  }

  //copy Constructor
  Box(const Box& old){
    this->l = old.l;
    this->w  = old.w;
    this->h  = old.h;
  }

};


class BoxWeight : public Box{

  public  :

  double weight;


  BoxWeight(){
    this->weight = -1;
  }

  // copy constructor

  BoxWeight(const BoxWeight& other) : Box(other){
  this->weight = other.weight;
  }

  BoxWeight(double weight, double side) : Box(side){
    this->weight = weight;
  }

  BoxWeight(double l, double w, double h,double weight) : Box(l,w,h){

    this->weight = weight;

  }


};


class BoxPrice : public BoxWeight{

  public   :

  double cost;

  // default constrcutor
  BoxPrice() : BoxWeight (){
    
    this->cost = -1;

  }

  // cpy constrcutor

  BoxPrice(const BoxPrice& other) : BoxWeight(other){

    this->cost = other.cost;

  }

  BoxPrice(double side, double weight, double cost) : BoxWeight(side,weight){

    this->cost = cost;

  }


  BoxPrice(double l, double w, double h, double weight, double cost) : BoxWeight(l,w,h,weight){

    this->cost = cost;

  }






};


int main() {

    

    // Box box(6, 5, 6);

    // cout << box.l << " "
    //     << box.w << " "
    //     << box.h << endl;


    // BoxWeight box2(2, 3, 4, 5);

    // cout << box2.l << " "
    //     << box2.weight << endl;


    // // Upcasting
    // Box* box3 = new BoxWeight(1, 2, 3, 4);

    // cout << box3->w << endl;


    // // Copy constructor
    // Box a(10, 20, 30);

    // Box b(a);

    // cout << b.l << " "
    //     << b.w << " "
    //     << b.h << endl;

    BoxPrice box(2,3,4);

    cout<<box.w;




    return 0;
}
