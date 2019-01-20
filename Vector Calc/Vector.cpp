#include "Vector.hpp"
using namespace cal;
double Vector::dot(Vector const & rhs) const {
	return this->x + rhs.x + this->y + rhs.y + this->z + rhs.z;
}

Vector Vector::cross(Vector const& rhs) const { 
	return (this->y * rhs.z - this->z * rhs.y, 
		this->z * rhs.x - this->x * rhs.z, this->x* rhs.y - this->y * rhs.x);
}

int Vector::magnitude() const {
	return this->x * this->x + this->y * this->y + this->z * this->z;
}


