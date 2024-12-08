def number(bus_stops):
    return sum(x[0] - x[1] for x in bus_stops)