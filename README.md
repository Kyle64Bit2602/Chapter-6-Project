# Chapter-6-Project

# Travel Expenses
Kyle, Mason, Gideon

## Travel Expenses Desc
Outputs the total days on the trip, the time of departure, the amount of round-trip affaire, amount of car rentals,
miles driven, parking fees, taxi fees, conference/seminar registration fees, hotel expenses,
and the amount of each meal eaten.

### Travel Expenses Flowchart
```mermaid
graph TD;
  main-->totalDays;
  totalDays-->main;
  main-->departTime;
  departTime-->main;
  main-->airfaireCost;
  airfaireCost-->main;
  main-->carRentals;
  carRentals-->main;
  main-->conferenceFees;
  conferenceFees-->main;
  main-->hotelExpenses;
  hotelExpenses-->main;
  main-->meals;
  meals-->main;
```

#### Function Diagrams

| `main`              |                             | Kyle          |
| ------------------- | --------------------------- | ------------- |
| `argument: double`  | Takes input from the user for: N/A |             |
| `time: integer`     | Calculates cost of trip             | Outputs cost |
| `name: string`      | Takes input for N/A                 | Returns N/A  |

***

| `totalDays`         |                                                                                                        | Kyle           |
| ------------------- | ------------------------------------------------------------------------------------------------------ | -------------  |
| `argument: double`  | Takes input from the user for: Total number of days spent on the trip, time of departure, and time of arrival | |
| `time: integer`     | Calculates N/A                                                                                         | Outputs N/A |
| `name: string`      | Takes input for days, departure, and arrival times                                                     | Returns days, departure, and arrival times |

***

| `departTime`        |                             | Mason          |
| ------------------- | --------------------------- | -------------  |
| `argument: double`  | Takes input from the user for Time of departure and time of arrival back home | |
| `time: integer`     | Calculates N/A                        | Outputs N/A |
| `name: string`      | Takes input for depart and arrival    | Returns depart and arrival |

***

| `airfaireCost`      |                                                           | Mason          |
| ------------------- | --------------------------------------------------------- | -------------  |
| `argument: double`  | Takes input from the user for: Round-trip airfare amount  | |
| `time: integer`     | Calculates N/A                                            | Outputs N/A |
| `name: string`      | Takes input for round-trip airfare                        | Returns airfare cost |
***

| `carRentals`        |                                                                                               | Gideon         |
| ------------------- | --------------------------------------------------------------------------------------------- | -------------  |
| `argument: double`  | Takes input from the user for: Car rental cost, miles driven, parking fees, and taxi fees     | |
| `miles: double`     | Calculates vehicle expense at $0.27 per mile driven                                           | Outputs vehicle expense |
| `parking: double`   | Calculates parking fee allowance (up to $6 per day)                                           | Outputs excess parking cost if applicable |
| `taxi: double`      | Calculates taxi fee allowance (up to $10 per day)                                             | Outputs excess taxi cost if applicable |
| `name: string`      | Takes input for car rentals, mileage, parking, and taxi fees                                  | Returns total car rental and related expenses |

***

| `conferenceFees`    |                                                                | Mason          |
| ------------------- | -------------------------------------------------------------- | -------------  |
| `argument: double`  | Takes input from the user for: Conference or seminar registration fees | |
| `time: integer`     | Calculates N/A                                                 | Outputs N/A |
| `name: string`      | Takes input for registration fees                              | Returns total conference fees |

***

| `hotelExpenses`     |                                                                              | Gideon         |
| ------------------- | ---------------------------------------------------------------------------- | -------------  |
| `argument: double`  | Takes input from the user for: Nightly hotel expenses                         | |
| `allowance: double` | Calculates lodging allowance (up to $90 per night)                            | Outputs excess lodging cost if applicable |
| `name: string`      | Takes input for nightly hotel rate                                           | Returns total hotel expenses, including any excess |

***

| `meals`             |                                                                                                                                            | Gideon         |
| ------------------- | ------------------------------------------------------------------------------------------------------------------------------------------ | -------------  |
| `argument: double`  | Takes input from the user for: Meal expenses (breakfast, lunch, dinner) based on departure and arrival times                               | |
| `allowance: double` | Calculates meal allowance (up to $9 for breakfast, $12 for lunch, $16 for dinner); adjusts based on time of departure/arrival requirements | Outputs excess meal cost if applicable |
| `name: string`      | Takes input for meal costs and times of departure/arrival                                                                                  | Returns total meal expenses, including any excess |
