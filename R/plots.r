percent = c(11,22,33,14,20)
divisions = c("Marketing","Corporate","R&D","Sales","Support")

#pie chart
pie(percent,divisions,col=rainbow(length(percent)))

#bar plot
barplot(percent)

#boxplot
boxplot(mpg ~ cyl, data = mtcars, xlab = "Number of Cylinders", 
        ylab = "Miles per Gallon", main = "Mileage Data", col = c("Red","Yellow","Blue"))

#histogram
vtr1 = c(5,5,7,8,9,9,2,3,7,3,1,1,8,9,7)
hist(vtr1,col = "Turquoise", border = "Black")

#line plot
plot(vtr1, type = "o")

#scatter plot
vtr2 = c(11,23,1,15,16,4,5,6,7,8,1,3,8,15,16)
plot(vtr1,vtr2)
