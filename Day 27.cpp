class TestDataEmptyArray
{
public:
    static vector<int> get_array()
    {
        vector<int> a;
        return a;
    }
};
class TestDataUniqueValues
{
public:
    static vector<int> get_array()
    {
        vector<int> a{2, 1, 3};
        return a;
    }
    static int get_expected_result()
    {
        return 1;
    }
};
class TestDataExactlyTwoDifferentMinimums
{
public:
    static vector<int> get_array()
    {
        vector<int> a{4, 2, 3, 2};
        return a;
    }
    static int get_expected_result()
    {
        return 1;
    }
};


