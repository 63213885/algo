class DSU {
	int[] f;
	int[] sz;
	
	DSU(int n) {
		f = new int[n + 1];
		sz = new int[n + 1];
		for (int i = 0; i <= n; i++) {
			f[i] = i;
		}
	}
	
	int find(int x) {
		while (x != f[x]) x = f[x] = f[f[x]];
		return x;
	}
	boolean same(int x, int y) {
		return find(x) == find(y);
	}
	boolean merge(int x, int y) {
		x = find(x);
		y = find(y);
		if (x == y) return false;
		sz[x] += sz[y];
		f[y] = x;
		return true;
	}
	int size(int x) {
		return sz[find(x)];
	}
}