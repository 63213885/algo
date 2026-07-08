class RMQ {
	
	int[] lg;
	int[][] f;
	int[][] g;
	
	RMQ(int[] a, int n) {
		int m = (int) (Math.log(n) / Math.log(2)) + 1;
		lg = new int[n + 1];
		f = new int[n + 1][m + 1];
		g = new int[n + 1][m + 1];
		
		for (int i = 1; i <= n; i++) {
			f[i][0] = a[i];
			g[i][0] = a[i];
			lg[i] = (int) (Math.log(i) / Math.log(2));
		}
		for (int j = 1; j <= m; j++) {
			for (int i = 1; i + (1 << j) - 1 <= n; i++) {
				f[i][j] = Math.max(f[i][j - 1], f[i + (1 << j - 1)][j - 1]);
				g[i][j] = Math.min(g[i][j - 1], g[i + (1 << j - 1)][j - 1]);
			}
		}
	}
	
	int max(int l, int r) {
		int k = lg[r - l + 1];
		return Math.max(f[l][k], f[r - (1 << k) + 1][k]);
	}
	int min(int l, int r) {
		int k = lg[r - l + 1];
		return Math.min(g[l][k], g[r - (1 << k) + 1][k]);
	}
}
