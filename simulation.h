#ifndef SIMULATION_H
#define SIMULATION_H

#include <QMainWindow>
#include <QObject>

#include "pid.h"
#include "generator.h"
#include "arx.h"

enum class ChartPosition{
    top,
    middle,
    bottom,
};


struct Point{
    float x;
    float y;
};


class Simulation : public QObject
{
    Q_OBJECT
public:
    static Simulation& get_instance();

    void start();
    void stop();

    void set_ticks_per_second(float ticks_per_second);
    void set_duration(float duration);

    size_t get_tick();
    float get_ticks_per_second() const;

    float durration{0};

    bool is_running{false};

    size_t duration_timer_id{0};

    void reset();

    void set_interval(int interval);
    int get_interval() const;

    std::unique_ptr<PID> pid;
    std::unique_ptr<Generator> generator;
    std::unique_ptr<ARX> arx;

    std::vector<std::byte> serialize();
    void deserialize(std::vector<std::byte> data);

signals:
    void simulation_start();
    void simulation_stop();


    void reset_chart();
    void update_chart();
    void add_series(QString series_name, float y, ChartPosition position);

protected:
    void timerEvent(QTimerEvent *event) override;

private:
    void simulate();

    float ticks_per_second{60};
    size_t tick{0};
    size_t timer_id{0};
    int interval{100};

    explicit Simulation(QObject *parent = nullptr);
    ~Simulation();


signals:
};

#endif // SIMULATION_H
