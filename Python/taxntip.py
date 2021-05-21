# define a fucntion that returns
# the total value of a meal including tax and tip


# returns the price with added tax
def tax(bill):
    bill *= 1.08
    print("Bill with added tax is %.02d") % (bill)
    return bill


# returns the price with added tax and tip
def tip(bill):
    bill *= 1.15
    print("Bill with added tax and tip is %.02d") % (bill)
    return bill


meal_price = 100
meal_price_tax = tax(meal_price)
meal_price_tax_tip = tip(meal_price_tax)
