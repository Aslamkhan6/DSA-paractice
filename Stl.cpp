#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    // ============================================================
    // C++ STL BASICS
    // ============================================================
    // Topics:
    // 1. vector
    // 2. string
    // 3. pair
    // 4. iterators
    // 5. set
    // 6. unordered_set
    // 7. map
    // 8. unordered_map
    // 9. stack
    // 10. queue
    // 11. deque
    // 12. priority_queue
    // 13. STL algorithms
    // ============================================================


    // ============================================================
    // 1. VECTOR
    // ============================================================

    cout << "\n========== VECTOR ==========\n";

    vector<int> numbers;

    // Adding elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    // Access using index
    cout << "First element: " << numbers[0] << endl;

    // Access using at()
    cout << "Second element: " << numbers.at(1) << endl;

    // Size
    cout << "Vector size: " << numbers.size() << endl;

    // Empty check
    cout << "Is vector empty? "
         << (numbers.empty() ? "Yes" : "No") << endl;

    // Traversing using normal loop
    cout << "Normal traversal: ";

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    // Range-based loop
    cout << "Range-based traversal: ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Remove last element
    numbers.pop_back();

    cout << "After pop_back(): ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Insert at a specific position
    numbers.insert(numbers.begin() + 1, 99);

    cout << "After inserting 99: ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Erase an element
    numbers.erase(numbers.begin() + 1);

    cout << "After erase: ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Clear vector
    // numbers.clear();

    // ============================================================
    // 2. STRING
    // ============================================================

    cout << "\n========== STRING ==========\n";

    string name = "Aslam";

    cout << "String: " << name << endl;

    // Length
    cout << "Length: " << name.length() << endl;

    // Size
    cout << "Size: " << name.size() << endl;

    // Access character
    cout << "First character: " << name[0] << endl;

    // Add character
    name.push_back('!');

    cout << "After push_back: " << name << endl;

    // Remove last character
    name.pop_back();

    cout << "After pop_back: " << name << endl;

    // Append another string
    name.append(" Khan");

    cout << "After append: " << name << endl;

    // Find a character/string
    cout << "Position of 'K': "
         << name.find('K') << endl;

    // Substring
    string part = name.substr(0, 5);

    cout << "Substring: " << part << endl;


    // ============================================================
    // 3. PAIR
    // ============================================================

    cout << "\n========== PAIR ==========\n";

    pair<int, int> p = {10, 20};

    cout << "First: " << p.first << endl;
    cout << "Second: " << p.second << endl;

    // Pair of different data types
    pair<int, string> student = {101, "Aslam"};

    cout << "Student ID: " << student.first << endl;
    cout << "Student Name: " << student.second << endl;


    // ============================================================
    // 4. ITERATORS
    // ============================================================

    cout << "\n========== ITERATORS ==========\n";

    vector<int> v = {10, 20, 30, 40, 50};

    // begin() points to first element
    // end() points just after the last element

    cout << "Using iterator: ";

    for (vector<int>::iterator it = v.begin();
         it != v.end();
         it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // Using auto
    cout << "Using auto iterator: ";

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;


    // ============================================================
    // 5. SET
    // ============================================================

    cout << "\n========== SET ==========\n";

    set<int> s;

    s.insert(50);
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(10); // Duplicate ignored

    cout << "Set: ";

    for (int x : s)
    {
        cout << x << " ";
    }

    cout << endl;

    // Search
    if (s.find(30) != s.end())
    {
        cout << "30 exists in set." << endl;
    }

    // Count
    cout << "Count of 10: " << s.count(10) << endl;

    // Erase
    s.erase(20);

    cout << "After erasing 20: ";

    for (int x : s)
    {
        cout << x << " ";
    }

    cout << endl;


    // ============================================================
    // 6. UNORDERED_SET
    // ============================================================

    cout << "\n========== UNORDERED SET ==========\n";

    unordered_set<int> us;

    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10); // Duplicate ignored

    cout << "Unordered set: ";

    for (int x : us)
    {
        cout << x << " ";
    }

    cout << endl;

    // Search
    if (us.find(20) != us.end())
    {
        cout << "20 exists." << endl;
    }

    // Count
    cout << "Count of 10: "
         << us.count(10) << endl;

    // Erase
    us.erase(20);


    // ============================================================
    // 7. MAP
    // ============================================================

    cout << "\n========== MAP ==========\n";

    map<int, string> students;

    students[103] = "Ali";
    students[101] = "Aslam";
    students[102] = "Ahmed";

    cout << "Students:\n";

    for (auto item : students)
    {
        cout << item.first
             << " -> "
             << item.second
             << endl;
    }

    // Access value using key
    cout << "Student 101: "
         << students[101] << endl;

    // Search
    if (students.find(102) != students.end())
    {
        cout << "Student 102 exists." << endl;
    }


    // ============================================================
    // 8. UNORDERED_MAP
    // ============================================================

    cout << "\n========== UNORDERED MAP ==========\n";

    unordered_map<int, string> users;

    users[1] = "Aslam";
    users[2] = "Ali";
    users[3] = "Ahmed";

    for (auto item : users)
    {
        cout << item.first
             << " -> "
             << item.second
             << endl;
    }

    // ============================================================
    // FREQUENCY COUNTING
    // Very important for DSA
    // ============================================================

    cout << "\n========== FREQUENCY COUNT ==========\n";

    vector<int> arr = {
        10, 20, 10, 30, 20, 10, 40, 30
    };

    unordered_map<int, int> frequency;

    for (int x : arr)
    {
        frequency[x]++;
    }

    for (auto item : frequency)
    {
        cout << item.first
             << " appears "
             << item.second
             << " times"
             << endl;
    }


    // ============================================================
    // 9. STACK
    // ============================================================

    cout << "\n========== STACK ==========\n";

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Stack size: "
         << st.size() << endl;

    cout << "Top: "
         << st.top() << endl;

    // Remove top
    st.pop();

    cout << "Top after pop: "
         << st.top() << endl;

    cout << "Removing all elements: ";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;


    // ============================================================
    // 10. QUEUE
    // ============================================================

    cout << "\n========== QUEUE ==========\n";

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front: "
         << q.front() << endl;

    cout << "Back: "
         << q.back() << endl;

    q.pop();

    cout << "Front after pop: "
         << q.front() << endl;


    // ============================================================
    // 11. DEQUE
    // ============================================================

    cout << "\n========== DEQUE ==========\n";

    deque<int> dq;

    dq.push_back(20);
    dq.push_back(30);

    dq.push_front(10);
    dq.push_front(5);

    cout << "Deque: ";

    for (int x : dq)
    {
        cout << x << " ";
    }

    cout << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "After removing both ends: ";

    for (int x : dq)
    {
        cout << x << " ";
    }

    cout << endl;


    // ============================================================
    // 12. PRIORITY QUEUE
    // ============================================================

    cout << "\n========== PRIORITY QUEUE ==========\n";

    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(50);
    maxHeap.push(20);
    maxHeap.push(5);

    cout << "Maximum element: "
         << maxHeap.top() << endl;

    cout << "Elements in priority order: ";

    while (!maxHeap.empty())
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    cout << endl;


    // ============================================================
    // MIN HEAP
    // ============================================================

    cout << "\n========== MIN HEAP ==========\n";

    priority_queue<
        int,
        vector<int>,
        greater<int>
    > minHeap;

    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);
    minHeap.push(5);

    cout << "Minimum element: "
         << minHeap.top() << endl;

    cout << "Elements in ascending priority: ";

    while (!minHeap.empty())
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

    cout << endl;


    // ============================================================
    // 13. STL ALGORITHMS
    // ============================================================

    cout << "\n========== STL ALGORITHMS ==========\n";

    vector<int> nums = {
        9, 101, 111, 17, 19,
        17, 11, 13, 104, 130
    };

    // ------------------------------------------------------------
    // sort - ascending
    // ------------------------------------------------------------

    sort(nums.begin(), nums.end());

    cout << "Ascending sort: ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    cout << endl;


    // ------------------------------------------------------------
    // sort - descending
    // ------------------------------------------------------------

    sort(
        nums.begin(),
        nums.end(),
        greater<int>()
    );

    cout << "Descending sort: ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    cout << endl;


    // ------------------------------------------------------------
    // reverse
    // ------------------------------------------------------------

    reverse(nums.begin(), nums.end());

    cout << "After reverse: ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    cout << endl;


    // ------------------------------------------------------------
    // find
    // ------------------------------------------------------------

    auto it = find(
        nums.begin(),
        nums.end(),
        101
    );

    if (it != nums.end())
    {
        cout << "101 found." << endl;
    }
    else
    {
        cout << "101 not found." << endl;
    }


    // ------------------------------------------------------------
    // count
    // ------------------------------------------------------------

    int occurrence = count(
        nums.begin(),
        nums.end(),
        17
    );

    cout << "17 occurs "
         << occurrence
         << " times."
         << endl;


    // ------------------------------------------------------------
    // min_element
    // ------------------------------------------------------------

    auto minimum = min_element(
        nums.begin(),
        nums.end()
    );

    cout << "Minimum: "
         << *minimum
         << endl;


    // ------------------------------------------------------------
    // max_element
    // ------------------------------------------------------------

    auto maximum = max_element(
        nums.begin(),
        nums.end()
    );

    cout << "Maximum: "
         << *maximum
         << endl;


    // ------------------------------------------------------------
    // min and max
    // ------------------------------------------------------------

    cout << "Min of 10 and 20: "
         << min(10, 20)
         << endl;

    cout << "Max of 10 and 20: "
         << max(10, 20)
         << endl;


    // ------------------------------------------------------------
    // swap
    // ------------------------------------------------------------

    int a = 10;
    int b = 20;

    swap(a, b);

    cout << "After swap: "
         << a << " "
         << b << endl;


    // ============================================================
    // 14. BINARY SEARCH
    // ============================================================

    cout << "\n========== BINARY SEARCH ==========\n";

    vector<int> sorted = {
        1, 3, 5, 7, 9, 11, 13
    };

    bool found = binary_search(
        sorted.begin(),
        sorted.end(),
        7
    );

    cout << "Is 7 present? "
         << (found ? "Yes" : "No")
         << endl;


    // ============================================================
    // 15. LOWER_BOUND
    // ============================================================

    auto lower = lower_bound(
        sorted.begin(),
        sorted.end(),
        6
    );

    if (lower != sorted.end())
    {
        cout << "Lower bound of 6: "
             << *lower
             << endl;
    }


    // ============================================================
    // 16. UPPER_BOUND
    // ============================================================

    auto upper = upper_bound(
        sorted.begin(),
        sorted.end(),
        7
    );

    if (upper != sorted.end())
    {
        cout << "Upper bound of 7: "
             << *upper
             << endl;
    }


    // ============================================================
    // 17. AUTO
    // ============================================================

    cout << "\n========== AUTO ==========\n";

    auto number = 100;
    auto text = string("Hello STL");

    cout << number << endl;
    cout << text << endl;


    // ============================================================
    // END
    // ============================================================

    cout << "\n========== STL PRACTICE COMPLETE ==========\n";

    return 0;
}