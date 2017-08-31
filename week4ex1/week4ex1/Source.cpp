struct Specialization {
	explicit Specialization(string s_in) { s = s_in; };
	string s;
};

struct Course {
	explicit Course(string s_in) { s = s_in; };
	string s;
};

struct Week {
	explicit Week(string s_in) { s = s_in; };
	string s;
};

struct LectureTitle {
	LectureTitle(Specialization s,
		Course c,
		Week w) {
		specialization = s.s;
		course = c.s;
		week = w.s;
	}
	string specialization;
	string course;
	string week;
};
