class rectangle
{
private:
	int length;
	int width;
	int area;
public:
	rectangle();
	rectangle(int, int);
	void set_data(int, int);
	void set_length(int);
	void set_width(int);
	int get_length()const;
	int get_width()const;
	int getarea();
};