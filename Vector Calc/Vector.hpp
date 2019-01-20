#pragma once
/*
 a vector in R3
*/
namespace cal {
	
	class Vector {
	public:
		int x, y, z;

		Vector(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}

		double dot(Vector const& rhs) const inline;

		Vector cross(Vector const& rhs) const;

		int magnitude() const inline;

		Vector substract(Vector const& rhs);

		Vector add(Vector const& rhs);
	};
}