string arr[10] = {"hi", "hello", "konichuwa", "greetings"}

string(&Fun(string(&array)[10]))[10]

typedef string arrStr[10];
arrStr &Fun(arrStr array);

auto Fun(string (&array)[10]) -> string(&)[10];

decltype(arr) &Fun(string (&array)[10]);
