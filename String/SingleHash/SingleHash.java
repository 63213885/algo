class SingleHash {
	final long P = 131, M = 1410412741L;
	
	long[] h;
	long[] hi;
	long[] p;
	
	SingleHash(char[] s, int n) {
		h = new long[n + 1];
		hi = new long[n + 2];
		p = new long[n + 1];
		p[0] = 1;
		
		for (int i = 1; i <= n; i++) {
			h[i] = (h[i - 1] * P + s[i]) % M;
			p[i] = p[i - 1] * P % M;
		}
		for (int i = n; i >= 1; i--) {
			hi[i] = (hi[i + 1] * P + s[i]) % M;
		}
	}
	
	long get(int l, int r) {
		return (h[r] - h[l - 1] * p[r - l + 1] % M + M) % M;
	}
	long geti(int l, int r) {
		return (hi[l] - hi[r + 1] * p[r - l + 1] % M + M) % M;
	}
	
	boolean isPalindrome(int l, int r) {
		return get(l, r) == geti(l, r);
	}
	boolean same(int l1, int r1, int l2, int r2) {
		return get(l1, r1) == get(l2, r2);
	}
	
	long mergeFF(int l1, int r1, int l2, int r2) { // Forward and Forward
		return get(l1, r1) * p[r2 - l2 + 1] + get(l2, r2);
	}
	long mergeFR(int l1, int r1, int l2, int r2) { // Forward and reverse
		return get(l1, r1) * p[r2 - l2 + 1] + geti(l2, r2);
	}
	long mergeRF(int l1, int r1, int l2, int r2) { // reverse and Forward
		return geti(l1, r1) * p[r2 - l2 + 1] + get(l2, r2);
	}
	long mergeRR(int l1, int r1, int l2, int r2) { // reverse and reverse
		return geti(l1, r1) * p[r2 - l2 + 1] + geti(l2, r2);
	}
}
