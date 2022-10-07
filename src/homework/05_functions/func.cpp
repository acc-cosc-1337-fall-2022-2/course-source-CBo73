//add include statements
#include <string>
#include "func.h"
using std::string;

//add function code here

double get_gc_content(const string& dna)
{
    double counter = 0;
    int i;
    double division;

    for(int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'C' || dna[i] == 'c' || dna[i] == 'g' || dna[i] == 'G')
        {
            counter++;
        }

    }

    division = counter / dna.length();

return division;

}

string get_dna_complement(string dna)
{
    dna = reverse_string(dna);

    for(int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'c' || dna[i] == 'C')
        {
            dna[i] = 'G';
        }
        else if (dna[i] == 'g' || dna[i] == 'G')
        {
            dna[i] = 'C';
        }
        else if (dna[i] == 'a' || dna[i] == 'A')
        {
            dna[i] = 'T';
        }
        else if (dna[i] == 't' || dna[i] == 'T')
        {
            dna[i] = 'A';
        }
    }

    return dna;
}

string reverse_string(string dna)
{
    string reverse_of_dna = dna;

    for (int i= 0; i < dna.length(); i++)
    {
        if (dna[i] == 'a' || dna[i] == 'A' || dna[i] == 't' || dna[i] == 'T' || dna[i] == 'g' || dna[i] == 'G' || dna[i] == 'c' || dna[i] == 'C')
        {
            dna[i] = reverse_of_dna[(dna.length()-1) - i];
        }
    }
    return dna;
}