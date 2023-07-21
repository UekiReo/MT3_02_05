#pragma once

//３次元ベクトル
struct Vector3 final {
	float x;	
	float y;	
	float z;	
};

//4x4行列
struct Matrix4x4 final {
	float m[4][4];	
};

//球
struct Sphere final {
	Vector3 center;
	float radius;
};

//直線
struct Line final {
	Vector3 origin;	
	Vector3 diff;	
};

//半直線
struct Ray final {
	Vector3 origin;	
	Vector3 diff;	
};

//線分
struct Segment final {
	Vector3 origin;	
	Vector3 diff;	
};

//平面
struct Plane final {
	Vector3 normal;
	float distance;	
};

struct Triangle {
	Vector3 vertices[3]; 
};

struct AABB {
	Vector3 min;	
	Vector3 max;	

};