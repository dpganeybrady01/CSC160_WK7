
#include <string>
#include <vector>

using namespace std;

class WeatherReport {

  private:
    string location;
    double temperature;
    double windSpeed;

  public:
    const double FILL_VALUE = -9999;

    WeatherReport(string location);
    ~WeatherReport();
    
    double getTemperature();
    void setTemperature(double temperature);

    double getWindSpeed();
    void setWindSpeed(double windSpeed);
    
    string getLocation();
};


class Plotter {
  public:
    void write_plot(vector<vector<double>> data, vector<string> seriesNames, string title, string filename);
    
};
