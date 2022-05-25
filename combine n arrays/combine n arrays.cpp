#include <iostream>
#include <vector>

typedef std::vector<std::vector<char>> vc;
typedef std::vector<int> vci;
vc op = {
	{'a','p','u','y','o','r'},
	{'a','q'},
	{'a','k','g','l'},
	{'a','h','d'}
};

void comb()
{
	int k = op.size();
	int a = 0;
	vci pos(k);
	while (a != k)
	{
		a = 0;
		for (int i = 0; i < k; i++)
		{
			std::cout << op[i][pos[i]];
		}
		std::cout << std::endl;
		for (int j = 0; j < k; j++)
		{
			if (pos[j] == op[j].size() - 1)
			{
				a++;
				pos[j] = 0;
				continue;
			}
			pos[j]++;
			break;
		}
	}
}
int main()
{
	comb();
	return 0;
}