def hotel_cost(nights):
    return 140*nights


def plane_ride_cost(city):
    if city == "Charlotte":
        return 183
    elif city == "Tampa":
        return 220
    elif city == "Pittsburgh":
        return 222
    elif city == "Los Angeles":
        return 475


def rental_car_cost(days):
    cost = days*40
    if days >= 7:
        cost -= 50
    elif days >= 3 and days < 7:
        cost -= 20
    return cost


def trip_cost(city, days):
    final_cost = rental_car_cost(days)+hotel_cost(days-1)+plane_ride_cost(city)
    return final_cost


print("Cost for 5 day trip to LA: $%d") % (trip_cost("Los Angeles", 5))
print("Cost for 5 day trip to Pittsburgh: $%d") % (trip_cost("Pittsburgh", 5))
print("Cost for 5 day trip to Tampa: $%d") % (trip_cost("Tampa", 5))
print("Cost for 5 day trip to Charlotte: $%d") % (trip_cost("Charlotte", 5))
