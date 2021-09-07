#ifndef METERIAL_H
#define METERIAL_H

#include "rtweekend.h"

struct hit_record;

class material {
public:
	virtual bool scatter(
		const ray& r_in, const hit_record& hit_record, color& attenuation, ray& scattered
	) const = 0;
};

#endif // !METERIAL_H
