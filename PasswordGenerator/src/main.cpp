#include "util.h"
#include "Generator.h"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " n" << endl;
        return 1;
    }

    int n = atoi(argv[1]);
    int size = 16;

    char passwords[n][size];

    for (int i = 0; i < n; i++)
    {
        Generate(passwords[i], size);
        OutputPassword(passwords[i], size);
    }

    return 0;
}
