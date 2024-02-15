#include <iostream>
using namespace std;
struct point {// A structure with three fields x, y, and z representing a point in 3D space.
	double x;
	double y;
	double z;
};
class Vector3D {//A class that has two private members point p and point q, representing the starting and ending points of a vector in 3D space
private:
	point p;
	point q;
public:
	Vector3D(double px, double py, double pz, double qx, double qy, double qz) {//A constructor that initializes the starting and ending points of a vector using six double parameters.
		p = { px,py,pz };
		q = { qx,qy,qz };
	}
	Vector3D(point p1, point q1) {//A constructor that initializes the starting and ending points of a vector using two point parameters
		p = p1;
		q = q1;
	}
	Vector3D() {//A default constructor that initializes both starting and ending points to (0,0,0).
		p = { 0,0,0 };
		q = { 0,0,0 };
	}
	Vector3D(const Vector3D& obj) {//A copy constructor that creates a new object with the same starting and ending points as the input object.
		this->p = obj.p;
		this->q = obj.q;
	}
	~Vector3D() {}//A destructor that frees any resources allocated to the object.
	Vector3D operator+(Vector3D& obj) {//An addition operator that returns a new vector by adding the starting and ending points of two vectors
		double new_x = (this->q.x - this->p.x) + (obj.q.x - obj.p.x);
		double new_y = (this->q.y - this->p.y) + (obj.q.y - obj.p.y);
		double new_z = (this->q.z - this->p.z) + (obj.q.z - obj.p.z);
		return Vector3D(this->p.x, this->p.y, this->p.z, this->q.x + new_x, this->q.y + new_y, this->q.z + new_z);
	}
	Vector3D operator-(const Vector3D& obj) {//A subtraction operator that returns a new vector by subtracting the starting and ending points of the second vector from the first vector.
		double new_x = (this->q.x - this->p.x) - (obj.q.x - obj.p.x);
		double new_y = (this->q.y - this->p.y) - (obj.q.y - obj.p.y);
		double new_z = (this->q.z - this->p.z) - (obj.q.z - obj.p.z);
		return Vector3D(this->p.x, this->p.y, this->p.z, this->q.x - new_x, this->q.y - new_y, this->q.z - new_z);
	}
	Vector3D operator*(const Vector3D& obj) {//A multiplication operator that returns a new vector by multiplying the corresponding coordinates of the starting and ending points of two vectors.
		double new_x = (this->q.x - this->p.x) * (obj.q.x - obj.p.x);
		double new_y = (this->q.y - this->p.y) * (obj.q.y - obj.p.y);
		double new_z = (this->q.z - this->p.z) * (obj.q.z - obj.p.z);
		return Vector3D(this->p.x, this->p.y, this->p.z, this->q.x * new_x, this->q.y * new_y, this->q.z * new_z);
	}
	Vector3D operator^(const Vector3D& obj) {// A cross product operator that returns a new vector by taking the cross product of two vectors
		Vector3D result;
		result.q.x = p.y * obj.q.z - p.z * obj.q.y - q.y * obj.p.z + q.z * obj.p.y;
		result.q.y = p.z * obj.q.x - p.x * obj.q.z + q.x * obj.p.z - q.z * obj.p.x;
		result.q.z = p.x * obj.q.y - p.y * obj.q.x - q.x * obj.p.y + q.y * obj.p.x;
		return result;
	}
	Vector3D operator++() {//A pre-increment operator that increments the coordinates of both starting and ending points of a vector by 1 and returns the updated vector
		p.x++;
		p.y++;
		p.z++;
		q.x++;
		q.y++;
		q.z++;
		return *this;
	}

	Vector3D operator++(int) {// post-increment operator that creates a copy of a vector, increments the coordinates of both starting and ending points of the original vector by 1, and returns the copy.
		Vector3D temp(p, q);
		operator++();
		return temp;
	}
	Vector3D operator--() {//A pre-decrement operator that decrements the coordinates of both starting and ending points of a vector by 1 and returns the updated vector
		p.x--;
		p.y--;
		p.z--;
		q.x--;
		q.y--;
		q.z--;
		return *this;
	}

	Vector3D operator--(int) {//A post-decrement operator that creates a copy of a vector, decrements the coordinates of both starting and ending points of the original vector by 1, and returns the copy.
		Vector3D temp(p, q);
		operator--();
		return temp;
	}

	point getp() {//A member function that returns the starting point of a vector.
		return p;
	}
	point getq() {// A member function that returns the ending point of a vector.
		return q;
	}
	void displayQP() {//A member function that prints the starting and ending points of a vector.
		cout << "p(" << this->getp().x << "," << this->getp().y << "," << this->getp().z << ") -> q(" << this->getq().x << "," << this->getq().y << "," << this->getq().z << ")" << endl;
	}
	void display() {//This display the checker code members  
		cout << "Point 1: (" << p.x << ", " << p.y << ", " << p.z << ")" << endl;
		cout << "Point 2: (" << q.x << ", " << q.y << ", " << q.z << ")" << endl;
	}
};
int main() {
	Vector3D obj1(1, 2, 3, 4, 5, 6);
	Vector3D obj2(7, 8, 9, 10, 11, 12);
	Vector3D obj3 = obj1 + obj2;
	cout << "Sum is :\n";
	cout << "p(" << obj3.getp().x << "," << obj3.getp().y << "," << obj3.getp().z << ") -> q(" << obj3.getq().x << "," << obj3.getq().y << "," << obj3.getq().z << ")" << endl;
	cout << "Subtraction is :\n";
	obj3 = obj1 - obj2;
	cout << "p(" << obj3.getp().x << "," << obj3.getp().y << "," << obj3.getp().z << ") -> q(" << obj3.getq().x << "," << obj3.getq().y << "," << obj3.getq().z << ")" << endl;
	cout << "Multiplication is :\n";
	obj3 = obj1 * obj2;
	cout << "p(" << obj3.getp().x << "," << obj3.getp().y << "," << obj3.getp().z << ") -> q(" << obj3.getq().x << "," << obj3.getq().y << "," << obj3.getq().z << ")" << endl;
	cout << "Using ^ Operator :\n";
	obj3 = obj1 ^ obj2;
	cout << "Cross product of vectors (" << obj1.getp().x << "," << obj1.getp().y << "," << obj1.getp().z << ") -> ("
		<< obj1.getq().x << "," << obj1.getq().y << "," << obj1.getq().z << ") and ("
		<< obj2.getp().x << "," << obj2.getp().y << "," << obj2.getp().z << ") -> ("
		<< obj2.getq().x << "," << obj2.getq().y << "," << obj2.getq().z << ") is ("
		<< obj3.getq().x - obj3.getp().x << "," << obj3.getq().y - obj3.getp().y << "," << obj3.getq().z - obj3.getp().z << ")" << endl;
	cout << "Using ++ Operator :\n";
	++obj1;
	cout << "Prefix increment: "; obj1.displayQP();
	obj2 = obj1++;
	cout << "Postfix increment: "; obj1.displayQP();
	cout << "Original object after postfix increment: "; obj1.displayQP();
	cout << "Using -- Operator :\n";
	--obj1;
	cout << "Prefix decrement: "; obj1.displayQP();
	obj2 = obj1--;
	cout << "Postfix decrement: "; obj1.displayQP();
	cout << "Original object after postfix decrement: "; obj1.displayQP();
	cout << "--------------------------------Checking the Answers------------------------------------\n";
	Vector3D v1(1, 2, 3, 4, 5, 6);
	Vector3D v2(point{ 0, 1, 2 }, point{ 3, 4, 5 });
	Vector3D v3 = v1 + v2;
	Vector3D v4 = v1 - v2;
	Vector3D v5 = v1 * v2;
	Vector3D v6 = v1 ^ v2;
	v1.display();
	v2.display();
	cout << "After Addition :\n";
	v3.display();
	cout << "After Subtraction :\n";
	v4.display();
	cout << "After Multiplication :\n";
	v5.display();
	cout << "After taking dot product :\n";
	v6.display();
	v1++;
	++v1;
	cout << "Post and Pre Increment:";
	v1.display();
	v2.display();
	cout << " Post and Pre Decrement : \n";
	v2--;
	--v2;
	v1.display();
	v2.display();
	Vector3D v7(v1);
	v7.display();
	cout << "----------------------------------------------------------------------------------------";
	return 0;
}