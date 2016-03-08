Words french{
{ "mot", "noun", "word", "le "},
{"garcon", "noun", "boy", "le ", true, "o", 3},
{"jeune", "adjective", "young"},
{"boulanger", "noun", "baker", "le "},
{"fille", "noun", "girl", "la"},
{"francais", "adjective", "French", "", true, "c", 4},
{"livre", "noun", "book", "le "},
{"l\'ecole", "noun", "school", "", true "e", 2},
{"maison", "noun", "house", "la "},
{"etre", "verb", "to be", "", true, "e", 0},
{"apres", "preposition", "after", "" , true, "e", 3},
{"voir", "verb", "to see" },
{"dire", "verb", "to say"},
{"aller", "verb", "to go"},
{"bon", "adjective", "good"},
{"mardi", "noun", "Tuesday", "le"},
{"salle", "noun", "room", "la"},
{"elle", "pronoun", "she"},
{"jour", "noun", "day", "le"},
{"aujourd hui", "adverb", "today", "", true, "\'", 7},
{"pluie", "noun", "rain", "la"},
{"cheval", "noun", "horse", "le"},
{"moulin", "noun", "mill", "le"},
{"rouge", "adjective", "red"},
{"neige", "noun", "snow", "la "}
};

Words latin{
{"puer", "noun", "boy"},
{"pistor", "noun", "baker"},
{"puella", "noun", "baker"},
{"bonus", "adjective", "good"},
{"liber", "noun", "book"},
{"schola", "noun", "school"},
{"domus", "noun", "house"},
{"esse", "verb", "to be"},
{"post", "preposition", "after"},
{"illa", "pronoun", "she"},
{"conclave", "noun", "room"},
{"hodie", "adverb", "today"},
{"pluvia", "noun", "rain"},
{"equus", "noun", "horse"},
{"mola", "noun", "mill"},
{"rober", "adjective", "red"},
{"nix", "noun", "snow"},
{"ire", "verb", "to go"},
{"oculus", "noun", "eye"},
{"intro", "adverb", "within"},
{"femina", "noun", "woman"},
{"homunculus", "noun", "little man"},
{"malum", "noun", "apple"},
{"nam", "conjunction", "for"},
{"zelus", "noun", "zeal"}
};

Words hebrew{
{"rachok", "adverb", "far"},
{"panim", "noun", "face"},
{"tapuach", "noun", "apple"},
{"ma afia", "noun", "bakery", "", true, "\'", 2},
{"ayin", "noun", "eye"},
{"adom", "adjective", "red"},
{"shleg", "noun", "snow"},
{"ochel", "noun", "food"},
{"bari", "adjective", "healthy"},
{"cham", "adjective", "hot"},
{"yom shlishi", "noun", "Tuesday"},
{"tov", "adjective", "good"},
{"latet", "verb", "to give"},
{"kan", "adverb", "here"},
{"juke", "noun", "bug"},
{"lemala", "adverb", "up"},
{"mitah", "noun", "bed"},
{"kafa fa", "noun", "glove", "", true, "\'", 4},
{"katis ashrei", "noun", "credit card"},
{"zol", "adjective", "inexpensive"},
{"smartoot", "noun", "rain"},
{"sus", "noun", "horse"},
{"matai", "adverb", "when"},
{"chatza it", "noun", "skirt", "", true, "\'", 6},
{"cheshbon", "noun", "bill"}
};

void searchForWordMenu(){
	cout << "F1 = ä\t F2 = ö\t F3 = Ö\t F4 = ü\t F5 = ç\t F6 = è\n"
	
}

void printForeignToEngNounMenu(){
	cout << "1. Print German to English nouns\n";
	cout << "2. Print French to English nouns\n"
	cout << "3. Print Latin to English nouns\n"
	cout << "4. Print Hebrew to English nouns\n"
}

void printForeignToEngVerbMenu(){
	cout << "1. Print German to English verbs\n";
	cout << "2. Print French to English verbs\n"
	cout << "3. Print Latin to English verbs\n"
	cout << "4. Print Hebrew to English verbs\n"
}

void printForeignToEngPrepositionMenu(){
	cout << "1. Print German to English prepositions\n";
	cout << "2. Print French to English prepositions\n"
	cout << "3. Print Latin to English prepositions\n"
	cout << "4. Print Hebrew to English prepositions\n"
}

void printForeignToEngAdjectiveMenu(){
	cout << "1. Print German to English adjectives\n";
	cout << "2. Print French to English adjectives\n"
	cout << "3. Print Latin to English adjectives\n"
	cout << "4. Print Hebrew to English adjectives\n"
}

void printForeignToEngAdeverbMenu(){
	cout << "1. Print German to English adverbs\n";
	cout << "2. Print French to English adverbs\n"
	cout << "3. Print Latin to English adverbs\n"
	cout << "4. Print Hebrew to English adverbs\n"
}

void printForeignToEngCardinalNumbersMenu(){
	cout << "1. Print German to English Cardinal Numbers\n";
	cout << "2. Print French to English Cardinal Numbers\n"
	cout << "3. Print Latin to English Cardinal Numbers\n"
	cout << "4. Print Hebrew to English Cardinal Numbers\n"
}

void printForeignToEngAllMenu(){
	cout << "1. Print German to English all words\n";
	cout << "2. Print French to English all words\n"
	cout << "3. Print Latin to English all words\n"
	cout << "4. Print Hebrew to English all words\n"
}
//////////
void printEngToForeignNounMenu(){
	cout << "1. Print English to German nouns\n";
	cout << "2. Print English to French nouns\n"
	cout << "3. Print English to Latin nouns\n"
	cout << "4. Print English to Hebrew nouns\n"
}

void printEngToForeignVerbMenu(){
	cout << "1. Print English to German verbs\n";
	cout << "2. Print English to French verbs\n"
	cout << "3. Print English to Latin verbs\n"
	cout << "4. Print English to Hebrew verbs\n"
}

void printEngToForeignPrepositionMenu(){
	cout << "1. Print English to German prepositions\n";
	cout << "2. Print English to French prepositions\n"
	cout << "3. Print English to Latin prepositions\n"
	cout << "4. Print English to Hebrew prepositions\n"
}

void printEngToForeignAdjectiveMenu(){
	cout << "1. Print English to German adjectives\n";
	cout << "2. Print English to French adjectives\n"
	cout << "3. Print English to Latin adjectives\n"
	cout << "4. Print English to Hebrew adjectives\n"
}

void printEngToForeignAdverbMenu(){
	cout << "1. Print English to German adverbs\n";
	cout << "2. Print English to French adverbs\n"
	cout << "3. Print English to Latin adverbs\n"
	cout << "4. Print English to Hebrew adverbs\n"
}

void printEngToForeignCardinalNumbersMenu(){
	cout << "1. Print English to German Cardinal Numbers\n";
	cout << "2. Print English to French Cardinal Numbers\n"
	cout << "3. Print English to Latin Cardinal Numbers\n"
	cout << "4. Print English to Hebrew Cardinal Numbers\n"
}

void printEngToForeignAllMenu(){
	cout << "1. Print English to German all words\n";
	cout << "2. Print English to French all words\n"
	cout << "3. Print English to Latin all words\n"
	cout << "4. Print English to Hebrew all words\n"
}