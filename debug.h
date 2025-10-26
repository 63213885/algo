#include <bits/stdc++.h>

using namespace std;

namespace fastread {
	template <typename T> void inline print_i128(T x) {
		if (x < 0) cout << "-", x = -x;
		if (x >= 10) print_i128(x / 10); cout << (int)(x % 10);
	}
}
using namespace fastread;

namespace Debug {
	template <typename T>
	void print_arg(const T &Arg, const __int128 &arg) { // Single variable 
		cout << Arg << " = "; print_i128(arg);
	}
	
	template <typename T, typename A>
	void print_arg(const T &Arg, const A &arg) { // Single variable 
		cout << Arg << " = " << arg;
	}
	
	template <typename T, typename A, typename B>
	void print_arg(const T &Arg, pair<A, B> arg) { // pair<A, B> 
		cout << Arg << " = [" << arg.first << ", " << arg.second << "]";
	}
	
	template <typename T, typename A>
	void print_arg(const T &Arg, std::vector<A> arg) { // vector<A> 
		cout << Arg << " = [";
		bool First = true;
		for (auto it : arg) {
			cout << (First ? (First = false, "") : ", ") << it;
		}
		cout << "]";
	}
	
	template <typename T, typename A, size_t N>
	void print_arg(const T &Arg, std::array<A, N> arg) { // array<A, N> 
		cout << Arg << " = [";
		bool First = true;
		for (auto it : arg) {
			cout << (First ? (First = false, "") : ", ") << it;
		}
		cout << "]";
	}
	
	template <typename T, typename A>
	void print_arg(const T &Arg, std::vector<std::vector<A>> arg) { // vector<vector<A>> 
		cout << Arg << " = {" << endl;
		for (auto v : arg) {
			bool First = true;
			cout << "	[";
			for (auto it : v) {
				cout << (First ? (First = false, "") : ", ") << it;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	template <typename T, typename A, size_t N>
	void print_arg(const T &Arg, std::vector<std::array<A, N>> arg) { // vector<array<A, N>> 
		cout << Arg << " = {" << endl;
		for (auto v : arg) {
			bool First = true;
			cout << "	[";
			for (auto it : v) {
				cout << (First ? (First = false, "") : ", ") << it;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	template <typename T, typename A, typename B>
	void print_arg(const T &Arg, std::vector<pair<A, B>> arg) { // vector<pair<A, B>> 
		cout << Arg << " = [";
		bool First = true;
		for (auto [x, y] : arg) {
			cout << (First ? (First = false, "") : ", ") << "[" << x << ", " << y << "]";
		}
		cout << "]";
	}
	
	template <typename T, typename A>
	void print_arg(const T &Arg, queue<A> arg) { // queue<A> 
		cout << Arg << " = [";
		bool First = true;
		while (arg.size()) {
			auto it = arg.front(); arg.pop();
			cout << (First ? (First = false, "") : ", ") << it;
		}
		cout << "]";
	}
	
	template <typename T, typename A, typename B>
	void print_arg(const T &Arg, map<A, B> arg) { // map<A, B> 
		cout << Arg << " = [";
		bool First = true;
		for (auto [x, y] : arg) {
			cout << (First ? (First = false, "") : ", ") << "[" << x << ", " << y << "]";
		}
		cout << "]";
	}
	
	template <typename T, typename A, typename B>
	void print_arg(const T &Arg, map<A, vector<B>> arg) { // map<A, vector<B>> 
		cout << Arg << " = {" << endl;
		for (auto [x, v] : arg) {
			cout << "	" << x << " : [";
			bool First = true;
			for (auto it : v) {
				cout << (First ? (First = false, "") : ", ") << it;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	template <typename T, typename A>
	void print_arg(const T &Arg, set<A> arg) { // set<A> 
		cout << Arg << " = [";
		bool First = true;
		for (auto it : arg) {
			cout << (First ? (First = false, "") : ", ") << it;
		}
		cout << "]";
	}
	
	template <typename T, typename A, typename B>
	void print_arg(const T &Arg, set<pair<A, B>> arg) { // set<pair<A, B>> 
		cout << Arg << " = [";
		bool First = true;
		for (auto [x, y] : arg) {
			cout << (First ? (First = false, "") : ", ") << "[" << x << ", " << y << "]";
		}
		cout << "]";
	}
	
	template <typename T, typename A, size_t N>
	void print_arg(const T &Arg, set<array<A, N>> arg) { // set<array<A, N>> 
		cout << Arg << " = {" << endl;
		for (auto it : arg) {
			cout << "	[";
			bool F = true;
			for (auto x : it) {
				cout << (F ? (F = false, "") : ", ") << x;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	template <typename T, typename A, size_t N>
	void print_arg(const T &Arg, queue<array<A, N>> arg) { // queue<array<A, N>> 
		cout << Arg << " = {" << endl;
		while (arg.size()) {
			auto it = arg.front();
			arg.pop();
			cout << "	[";
			bool F = true;
			for (auto x : it) {
				cout << (F ? (F = false, "") : ", ") << x;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	template <typename T, typename A>
	void print_arg(const T &Arg, priority_queue<A> arg) { // priority_queue<A> 
		cout << Arg << " = [";
		bool F = true;
		while (arg.size()) {
			auto it = arg.top();
			arg.pop();
			cout << (F ? (F = false, "") : ", ") << it;
		}
		cout << "]";
	}
	
	template <typename T, typename A, size_t N>
	void print_arg(const T &Arg, priority_queue<array<A, N>> arg) { // priority_queue<array<A, N>> 
		cout << Arg << " = {" << endl;
		while (arg.size()) {
			auto it = arg.top();
			arg.pop();
			cout << "	[";
			bool F = true;
			for (auto x : it) {
				cout << (F ? (F = false, "") : ", ") << x;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	template <typename T, typename A>
	void print_arg(const T &Arg, priority_queue<A, vector<A>, greater<A>> arg) { // priority_queue<A, vector<A>, greater<A>> 
		cout << Arg << " = [";
		bool F = true;
		while (arg.size()) {
			auto it = arg.top();
			arg.pop();
			cout << (F ? (F = false, "") : ", ") << it;
		}
		cout << "]";
	}
	
	template <typename T, typename A, size_t N>
	void print_arg(const T &Arg, priority_queue<array<A, N>, vector<array<A, N>>, greater<array<A, N>>> arg) { // priority_queue<array<A, N>, vector<array<A, N>>, greater<array<A, N>>> 
		cout << Arg << " = {" << endl;
		while (arg.size()) {
			auto it = arg.top();
			arg.pop();
			cout << "	[";
			bool F = true;
			for (auto x : it) {
				cout << (F ? (F = false, "") : ", ") << x;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	/*--------------------------------------------------------------------------*/
	
	template <typename T>
	void err(string Arg, const T &arg) {
		print_arg(Arg, arg); cout << endl;
	}
	
	template <typename T, typename... Ts>
	void err(string Arg, const T &arg, const Ts &...args) {
		size_t pos = Arg.find(',');
		print_arg(Arg.substr(0, pos), arg); cout << ",";
		err(Arg.substr(pos + 1), args...);
	}
	
	#define debug(args...) err(#args, ##args)
}
using namespace Debug;




namespace Dbg {
	template <typename T, typename A>
	void _print_arg(const T &Arg, const A &arg) { // Single variable 
		cout << Arg << " = " << arg;
	}
	
	template <typename T, typename A>
	void _print_arg(const T &Arg, std::vector<A> arg) { // vector<A> 
		arg.erase(arg.begin());
		cout << Arg << " = [";
		bool First = true;
		for (auto it : arg) {
			cout << (First ? (First = false, "") : ", ") << it;
		}
		cout << "]";
	}
	
	template <typename T, typename A, size_t N>
	void _print_arg(const T &Arg, std::array<A, N> arg) { // array<A, N> 
		cout << Arg << " = [";
		bool First = true;
		for (int i = 1; i < N; i++) {
			cout << (First ? (First = false, "") : ", ") << arg[i];
		}
		cout << "]";
	}
	
	template <typename T, typename A>
	void _print_arg(const T &Arg, std::vector<std::vector<A>> arg) { // vector<vector<A>> 
		arg.erase(arg.begin());
		for (auto &v : arg) {
			v.erase(v.begin());
		}
		cout << Arg << " = {" << endl;
		for (auto v : arg) {
			bool First = true;
			cout << "	[";
			for (auto it : v) {
				cout << (First ? (First = false, "") : ", ") << it;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	template <typename T, typename A, size_t N>
	void _print_arg(const T &Arg, std::vector<std::array<A, N>> arg) { // vector<array<A, N>> 
		arg.erase(arg.begin());
		cout << Arg << " = {" << endl;
		for (auto v : arg) {
			bool First = true;
			cout << "	[";
			for (auto it : v) {
				cout << (First ? (First = false, "") : ", ") << it;
			}
			cout << "]" << endl;
		}
		cout << "}";
	}
	
	template <typename T, typename A, typename B>
	void _print_arg(const T &Arg, std::vector<pair<A, B>> arg) { // vector<pair<A, B>> 
		cout << Arg << " = [";
		bool First = true;
		for (auto [x, y] : arg) {
			cout << (First ? (First = false, "") : ", ") << "[" << x << ", " << y << "]";
		}
		cout << "]";
	}
	
	/*--------------------------------------------------------------------------*/
	template <typename T>
	void _err(string Arg, const T &arg) {
		_print_arg(Arg, arg); cout << endl;
	}
	
	template <typename T, typename... Ts>
	void _err(string Arg, const T &arg, const Ts &...args) {
		size_t pos = Arg.find(',');
		_print_arg(Arg.substr(0, pos), arg); cout << ",";
		_err(Arg.substr(pos + 1), args...);
	}
	
	#define dbg(args...) _err(#args, ##args)
}
using namespace Dbg;

int Case = 0;
