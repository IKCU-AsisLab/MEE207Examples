/*
TASK: Ask user for bombing target coordinates in x,
if the coordinates are too close to civilian settlement,
print "TOO CLOSE" otherwise, print "BOMB" */

#include <stdio.h>
int main() {
	int target_x=0;
	// Civilian settlement coordinates are in 20m
	int cx = 20;
	// Minimum safe distance from civilian settlement
	int safe_distance = 10;
	int distance = 0;

	printf("Enter target coordinates in x : ");
	scanf("%d", &target_x);
	// Calculate distance from civilian settlement
	distance = target_x - cx;
	if (distance < 0)
	{
		distance = -distance;
	}

	if (distance <= safe_distance)
		printf("TOO CLOSE\n");
	else
		printf("BOMB\n");
	return 0;
}
