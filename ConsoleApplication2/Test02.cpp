#include <memory>
#include <vector>
#include <string>
#include <iostream>
struct Member {
	std::weak_ptr<std::vector<Member>> 所属先グループ;
	std::string name;
	void dump_other_members() const
	{
		for (const auto& r : *所属先グループ.lock()) {
			if (&r != this)
				std::cout << r.name << std::endl;
		}
	}
};
void f()
{
	auto a_group = std::make_shared<std::vector<Member>>();
	auto b_group = std::make_shared<std::vector<Member>>();
	a_group->push_back({a_group, "ALPHA" });
	a_group->push_back({a_group, "BETA" });
	a_group->push_back({a_group, "GAMMA" });
	a_group->push_back({a_group, "DELTA" });
	b_group->push_back({b_group, "alpha" });
	b_group->push_back({b_group, "beta" });
	b_group->push_back({b_group, "gamma" });
	b_group->push_back({b_group, "delta" });

	a_group->at(2).dump_other_members();
	b_group->at(3).dump_other_members();
}
int main()
{
	f();
}
