n = int(input("Enter the number of flights: "))

flightData = []
totalDelay = 0
maxDelay = 0
maxDelayFlight = ""

for _ in range(n):
    flightId, delay = input("Enter flight ID and delay time: ").split()
    delay = int(delay)
    flightData.append((flightId, delay))
    totalDelay += delay

    if delay > maxDelay:
        maxDelay = delay
        maxDelayFlight = flightId

averageDelay = totalDelay / n if n else 0

#
print(maxDelayFlight,maxDelay)
print(averageDelay)
