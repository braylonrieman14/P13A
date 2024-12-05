#include <iostream> 
#include <iomanip>
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
	cout << "\nPress Enter to continue...";
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

    while (true)
    {
        char temp;
        inFile >> temp;
        if (inFile.eof())
            break;
        if (isalpha(temp))
        {
            characters++;
            temp = toupper(temp);
            switch (temp)
            {
            case 'A': a++; break;
            case 'B': b++; break;
            case 'C': c++; break;
            case 'D': d++; break;
            case 'E': e++; break;
            case 'F': f++; break;
            case 'G': g++; break;
            case 'H': h++; break;
            case 'I': i++; break;
            case 'J': j++; break;
            case 'K': k++; break;
            case 'L': l++; break;
            case 'M': m++; break;
            case 'N': n++; break;
            case 'O': o++; break;
            case 'P': p++; break;
            case 'Q': q++; break;
            case 'R': r++; break;
            case 'S': s++; break;
            case 'T': t++; break;
            case 'U': u++; break;
            case 'V': v++; break;
            case 'W': w++; break;
            case 'X': x++; break;
            case 'Y': y++; break;
            case 'Z': z++; break;
            }
        }
    }
    inFile.close();

    //output
    cout << "\nTotal number of letters: " << characters << "\nFrequencey: " << fixed << setprecision(3);
    cout << "\n'A': " << setw(6) << (double) a / characters * 100;
    cout << "\n'B': " << setw(6) << (double)b / characters * 100;
    cout << "\n'C': " << setw(6) << (double)c / characters * 100;
    cout << "\n'D': " << setw(6) << (double)d / characters * 100;
    cout << "\n'E': " << setw(6) << (double)e / characters * 100;
    cout << "\n'F': " << setw(6) << (double)f / characters * 100;
    cout << "\n'G': " << setw(6) << (double)g / characters * 100;
    cout << "\n'H': " << setw(6) << (double)h / characters * 100;
    cout << "\n'I': " << setw(6) << (double)i / characters * 100;
    cout << "\n'J': " << setw(6) << (double)j / characters * 100;
    cout << "\n'K': " << setw(6) << (double)k / characters * 100;
    cout << "\n'L': " << setw(6) << (double)l / characters * 100;
    cout << "\n'M': " << setw(6) << (double)m / characters * 100;
    cout << "\n'N': " << setw(6) << (double)n / characters * 100;
    cout << "\n'O': " << setw(6) << (double)o / characters * 100;
    cout << "\n'P': " << setw(6) << (double)p / characters * 100;
    cout << "\n'Q': " << setw(6) << (double)q / characters * 100;
    cout << "\n'R': " << setw(6) << (double)r / characters * 100;
    cout << "\n'S': " << setw(6) << (double)s / characters * 100;
    cout << "\n'T': " << setw(6) << (double)t / characters * 100;
    cout << "\n'U': " << setw(6) << (double)u / characters * 100;
    cout << "\n'V': " << setw(6) << (double)v / characters * 100;
    cout << "\n'W': " << setw(6) << (double)w / characters * 100;
    cout << "\n'X': " << setw(6) << (double)x / characters * 100;
    cout << "\n'Y': " << setw(6) << (double)y / characters * 100;
    cout << "\n'Z': " << setw(6) << (double)z / characters * 100;
}
