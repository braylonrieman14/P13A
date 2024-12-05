#include <iostream> 
#include <string>
#include <fstream> 
using namespace std;

//function prototypes
void pressEnterToContinue();
int readFromFile(string filename);

int main()
{
	string datafile;
	cout << "Enter filename: ";
	getline(cin, datafile);
	readFromFile(datafile);
	pressEnterToContinue();
}

// pressEnterToContinue: used to keep the console window open long enough to see your program's output
void pressEnterToContinue(void) {
	char c;
	cout << "Press Enter to continue...";
	cin.ignore(1024, '\n');
	do { cin.get(c); } while (c != '\n' && c != EOF);
	return;
}

int readFromFile(string filename)
{
    ifstream inFile;
    int characters = 0;

    //letter count
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;
    int t = 0;
    int u = 0;
    int v = 0;
    int w = 0;
    int x = 0;
    int y = 0;
    int z = 0;

    inFile.open(filename);

    if (inFile.fail())
    {
        cout << "Read error - Sorry!\n";
        return 0;
    }

    while (!inFile.eof())
    {
        char temp;
        inFile >> temp;
        if (isalpha(temp))
        {
            characters++;
            temp = toupper(temp);
            switch (temp)
            {
            case 'A': a++;
            case 'B': b++;
            case 'C': c++;
            case 'D': d++;
            case 'E': e++;
            case 'F': f++;
            case 'G': g++;
            case 'H': h++;
            case 'I': i++;
            case 'J': j++;
            case 'K': k++;
            case 'L': l++;
            case 'M': m++;
            case 'N': n++;
            case 'O': o++;
            case 'P': p++;
            case 'Q': q++;
            case 'R': r++;
            case 'S': s++;
            case 'T': t++;
            case 'U': u++;
            case 'V': v++;
            case 'W': w++;
            case 'X': x++;
            case 'Y': y++;
            case 'Z': z++;
            }
        }
    }
    inFile.close();

    //output
    cout << "\nTotal number of letters: " << characters << "\nFrequencey: ";
    cout << "'A': " << a;
    cout << "'B': " << b;
    cout << "'C': " << c;
    cout << "'D': " << d;
    cout << "'E': " << e;
    cout << "'F': " << f;
    cout << "'G': " << g;
    cout << "'H': " << h;
    cout << "'I': " << i;
    cout << "'J': " << j;
    cout << "'K': " << k;
    cout << "'L': " << l;
    cout << "'M': " << m;
    cout << "'N': " << n;
    cout << "'O': " << o;
    cout << "'P': " << p;
    cout << "'Q': " << q;
    cout << "'R': " << r;
    cout << "'S': " << s;
    cout << "'T': " << t;
    cout << "'U': " << u;
    cout << "'V': " << v;
    cout << "'W': " << w;
    cout << "'X': " << x;
    cout << "'Y': " << y;
    cout << "'Z': " << z;
}
