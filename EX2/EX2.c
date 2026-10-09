#include <stdio.h>

int main(void)
{
	const double KMH_TO_MS = 1000.0 / 3600.0; // km/hr to m/s conversion
					
	double speed_kmh, distance_m;
	double speed_ms, accleration, time_s;

	printf("Enter takeoff speed (km/hr): ");
	scanf("%lf", &speed_kmh);

	printf("Enter catapault distance (meters): ");
	scanf("%lf", &distance_m);

	speed_ms = speed_kmh * KMH_TO_MS;

	// From v = at and s = 1/2 at^2 => a = v^2 / (2s), t = v / a
	accleration = (speed_ms * speed_ms) / (2.0 * distance_m);
	time_s = speed_ms / accleration;

	printf("Acceleration: %.2f m/s^2\n", accleration);
	printf("Time to takeoff: %.2f seconds\n", time_s);

	return 0;
}


