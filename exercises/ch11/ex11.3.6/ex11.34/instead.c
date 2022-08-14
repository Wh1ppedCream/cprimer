// ORIGINAL

const string &transform(const string &s, const map<string, string> &m)
{
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second; // use the replacement word
	else
		return s;
}

// ALTERED
	
const string &transform(const string &s, const map<string, string> &m)
{
	auto map_it = m[s];
	if (map_it != m.cend())
		return map_it->second; // use the replacement word
	else
		return s;
}

//if a string does not exist within the map, it will produce m.end() with find, while it will create a new
// item with subscript
