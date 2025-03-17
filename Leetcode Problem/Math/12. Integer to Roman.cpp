class Solution
{
public:
    string intToRoman(int a)
    {
        string ans;
        while (a > 0)
        {
            if (a >= 1000)
            {
                ans += 'M';
                a -= 1000;
            }
            else if (a >= 900)
            {
                ans += "CM";
                a -= 900;
            }
            else if (a >= 500)
            {
                ans += 'D';
                a -= 500;
            }
            else if (a >= 400)
            {
                ans += "CD";
                a -= 400;
            }
            else if (a >= 100)
            {
                ans += 'C';
                a -= 100;
            }
            else if (a >= 90)
            {
                ans += "XC";
                a -= 90;
            }
            else if (a >= 50)
            {
                ans += 'L';
                a -= 50;
            }
            else if (a >= 40)
            {
                ans += "XL";
                a -= 40;
            }
            else if (a >= 10)
            {
                ans += 'X';
                a -= 10;
            }
            else if (a >= 9)
            {
                ans += "IX";
                a -= 9;
            }
            else if (a >= 5)
            {
                ans += 'V';
                a -= 5;
            }
            else if (a >= 4)
            {
                ans += "IV";
                a -= 4;
            }
            else
            {
                ans += 'I';
                a -= 1;
            }
        }
        return ans;
    }
};
