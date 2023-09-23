/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c) 2014 The College Blackjack Team.
 * pg 45, Chapter 2: Memory & Pointers: (Head First C).
 * Writing a game called Bermuda Rectangle.
 * The game tracks the location of players using Latitudes and Longitudes.
 * This Particular code breaks because of the way that C calss functions.
 */

#include <stdio.h>
void go_south_east(int lat, int lon)
{
	lat = lat - 1;
	lon = lon + 1;
}
int main()
{
	int latitude = 32;
	int longitude = -64;
	go_south_east(latitude, longitude);
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
	return 0;
}
