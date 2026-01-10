class LazySegmentTree {
	int n;
	Info[] info;
	Tag[] tag;
	
	LazySegmentTree(int n) {
		this.n = n;
		info = new Info[n << 2];
		tag = new Tag[n << 2];
		build(1, 0, n);
	}
	
	void build(int u, int l, int r) {
		tag[u] = new Tag();
		if (l == r) {
			info[u] = new Info();
			return;
		}
		int mid = l + r >> 1;
		build(u << 1, l, mid);
		build(u << 1 | 1, mid + 1, r);
		pushup(u);
	}
	
	void pushup(int u) {
		info[u] = Info.merge(info[u << 1], info[u << 1 | 1]);
	}
	
	void apply(int u, Tag v) {
		info[u].apply(v);
		tag[u].apply(v);
	}
	void pushdown(int u) {
		apply(u << 1, tag[u]);
		apply(u << 1 | 1, tag[u]);
		tag[u] = new Tag();
	}
	
	void modify(int u, int l, int r, int x, Info v) {
		if (l == r) {
			info[u] = v;
			return;
		}
		int mid = l + r >> 1;
		pushdown(u);
		if (x <= mid) {
			modify(u << 1, l, mid, x, v);
		} else {
			modify(u << 1 | 1, mid + 1, r, x, v);
		}
		pushup(u);
	}
	void modify(int p, Info v) {
		modify(1, 0, n, p, v);
	}
	
	void rangeApply(int u, int l, int r, int x, int y, Tag v) {
		if (r < x || l > y) {
			return;
		}
		if (x <= l && r <= y) {
			apply(u, v);
			return;
		}
		int mid = l + r >> 1;
		pushdown(u);
		rangeApply(u << 1, l, mid, x, y, v);
		rangeApply(u << 1 | 1, mid + 1, r, x, y, v);
		pushup(u);
	}
	void Apply(int p, Tag v) {
		rangeApply(1, 0, n, p, p, v);
	}
	void rangeApply(int l, int r, Tag v) {
		rangeApply(1, 0, n, l, r, v);
	}
	
	Info rangeQuery(int u, int l, int r, int x, int y) {
		if (r < x || l > y) {
			return new Info();
		}
		if (x <= l && r <= y) {
			return info[u];
		}
		int mid = l + r >> 1;
		pushdown(u);
		if (y <= mid) {
			return rangeQuery(u << 1, l, mid, x, y);
		} else if (x > mid) {
			return rangeQuery(u << 1 | 1, mid + 1, r, x, y);
		}
		Info left = rangeQuery(u << 1, l, mid, x, y);
		Info right = rangeQuery(u << 1 | 1, mid + 1, r, x, y);
		return Info.merge(left, right);
	}
	Info Query(int p) {
		return rangeQuery(1, 0, n, p, p);
	}
	Info rangeQuery(int l, int r) {
		return rangeQuery(1, 0, n, l, r);
	}
}

class Info {
	
	Info() {
		
	}
	Info() {
		
	}
	
	void apply(Tag v) {
		
	}
	
	static Info merge(Info l, Info r) {
		Info res = new Info();
		
		return res;
	}
}

class Tag {
	
	Tag() {
		
	}
	Tag(long x) {
		
	}
	
	void apply(Tag v) {
		
	}
}