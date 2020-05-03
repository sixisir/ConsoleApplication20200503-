// ConsoleApplication20200503.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_set<int> a;
	unordered_set<int> b;
	for (int i = 0; i < nums.size(); i++) {
		a.insert(nums[i]);
		b.insert(i);
	}
	int r = 0;
	int x, y;
	while (!a.empty()) {
		
		unordered_set<int>::iterator ita = a.begin();
		unordered_set<int>::iterator itb = b.begin();
		x = *ita, y = *itb;
		a.erase(a.begin());
		b.erase(b.begin());
		if (a.find(target - x) != a.end()) {
			break;
		}
		
	}
	int t1 = y;
	int i = 0;
	for (i = t1 + 1; i < nums.size(); i++) {
		if (target - nums[i] == nums[t1]) break;
	}
	int s[2] = { t1,i };
	vector<int> s2(s, s + 2);
	return s2;
}
int main()
{
	int a[4] = { 2,6,7,11 };
	vector<int> a1(a, a + 4);
	
    vector<int> a2= twoSum(a1, 9);
	cout << a2[0] << " " << a2[1] << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
