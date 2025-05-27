#include <iostream>

double fall(double height, int time)
{
    double distance = height - 0.5 * 9.8 * time * time;
    if (distance <= 0)
        return 0;
    return distance;
}
int main()
{
    std::cout << "Height of the tower in meters: ";
    double height {};
    std::cin >> height;

    for (int time {0}; time <= 5; time ++)
    {
        std::cout << "At " << time << " seconds, the ball is at height: " << fall(height, time) << "m\n";
    }

    return 0;
}
