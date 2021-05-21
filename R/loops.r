#repeat loop (an exit control loop), executes at least once

var3=3
repeat{
  print(var3)
  var3 = var3 + 2
  if (var3>25){
    break
  }
}

#while loop (an entry control loop), doesn't execute if the condition doesn't satisfy

var4=3
while (var4<21){
  print(var4)
  var4 = var4 + 2
}


#for loop (while we know how many times to run the loop)

for (i in 1:10){
  print(i)
}