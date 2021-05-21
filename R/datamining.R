houses = read.csv("/Users/muhtasim/Desktop/houses.csv")   #import data
View(houses)  #view data
str(houses)   #structure of data
library(dplyr)    #load deployer package

#pre-processing/cleaning data

houses = houses %>% select(c(-1,-2))
houses$air_cond = factor(houses$air_cond,labels = c("No","Yes"))
houses$construction = factor(houses$construction,labels = c("No","Yes"))
houses$waterfront = factor(houses$waterfront,labels = c("No","Yes"))
houses$fuel = factor(houses$fuel,labels = c("Gas","Electric","Oil"))
houses$sewer = factor(houses$sewer,labels = c("None","Private","Public"))
houses$heat = factor(houses$heat,labels = c("Hot Air","Hot Water","Electric"))

#data visualization

library(ggplot2)
ggplot(data = houses, aes(x = price)) + geom_histogram(bins = 40, fill = "pink", color = "red")
ggplot(data = houses, aes(y = price, x = waterfront, fill = waterfront)) + geom_boxplot()
ggplot(data = houses, aes(y = price, x = air_cond, fill = air_cond)) + geom_boxplot()
ggplot(data = houses, aes(y = price, x = living_area)) + geom_point() + geom_smooth(method = 'lm', se = F)
ggplot(data = houses, aes(y = price, x = age)) + geom_point(col = "purple") + geom_smooth(method = 'lm', se = F)
ggplot(data = houses, aes(y = price, x = living_area, col = factor(rooms))) + geom_point() + geom_smooth(method = 'lm', se = F) + labs(col = "rooms")

#splitting data

library(caTools)
split_index = sample.split(houses$price,SplitRatio = 0.65)
train = subset(houses,split_index == T)
test = subset(houses,split_index == F)
nrow(train)
nrow(test)

#model building

mod1 = lm(price~.,data = train)
result = predict(mod1,test)
compare_result = cbind(actual = test$price, predicted = result)
compare_result = as.data.frame(compare_result)
error = compare_result$actual - compare_result$predicted
compare_result = cbind(compare_result,error)
View(compare_result)
rmse1 = sqrt(mean(compare_result$error^2))
summary(mod1)

mod2 = lm(price~.-fireplaces-sewer-fuel,data = train)
result2 = predict(mod2,test)
compare_result2 = cbind(actual = test$price, predicted = result2)
compare_result2 = as.data.frame(compare_result2)
error2 = compare_result2$actual - compare_result2$predicted
compare_result2 = cbind(compare_result2,error)
View(compare_result2)
rmse2 = sqrt(mean(compare_result2$error^2))
summary(mod2)
 