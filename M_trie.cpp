/*
count for number of children nodes of a given node
my first thought was to create char tree, but since i never implemented it myself so i went for a easy way,
whicn was to use a nested for-loop, i know it would timeout and it did :/
every time i try for the easy route it just wouldnt work and became a waste of time
should of do the optimized way always :/
anyways, i had to look up in the discussion board to learn how to implement my though,
and i found user rohan_parkash's solution,
what's different from my original thought was that his code included a node count variable in the Node class
this way to get number of children became exceptionally easy, very brilliant
https://www.hackerrank.com/challenges/contacts/problem?isFullScreen=true
*/
#include <bits/stdc++.h>
#define N_ALPHABET 26

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'contacts' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts 2D_STRING_ARRAY queries as parameter.
 */
 
struct Node {
    Node* children[N_ALPHABET];
    int nchildren;
    
    Node(): nchildren(0) {
        for (int i=0; i<N_ALPHABET; ++i) { children[i] = NULL; }
    }
};

void trieInsert(Node* t, string s) {
    for (char i: s) {
        // if there is a child found, look into that node
        // else, create new one
        if (!t->children[i-'a']) { t->children[i-'a'] = new Node(); }
        t = t->children[i-'a'];
        // update children count for 
        ++t->nchildren;
    }
}

int trieNchildren(Node* t, string s) {
    for (char i: s) {
        if (!t->children[i-'a']) { return 0; }
        else { t = t->children[i-'a']; }
    }
    return t->nchildren;
}

vector<int> contacts(vector<vector<string>> queries) {
    vector<int> clist;
    Node trie;
    
    for (auto i: queries) {
        if (i[0] == "add") {
            trieInsert(&trie, i[1]);
        }
        else {
            clist.push_back(trieNchildren(&trie, i[1]));
        }
    }
    
    return clist;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string queries_rows_temp;
    getline(cin, queries_rows_temp);

    int queries_rows = stoi(ltrim(rtrim(queries_rows_temp)));

    vector<vector<string>> queries(queries_rows);

    for (int i = 0; i < queries_rows; i++) {
        queries[i].resize(2);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            string queries_row_item = queries_row_temp[j];

            queries[i][j] = queries_row_item;
        }
    }

    vector<int> result = contacts(queries);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
