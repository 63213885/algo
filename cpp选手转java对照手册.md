# **cpp选手转java对照手册**

1. 基本数据类型

   ```java
   int				Integer
   long			Long
   char			Character
   boolean		Boolean
   
   Integer.MAX_VALUE
   Integer.MIN_VALUE
   Long.MAX_VALUE
   Long.MIN_VALUE
   ```

2. 类型互转

   ```java
   // String s  <=>  char[] t
   char[] t = s.toCharArray();
   String s = new String(t);
   
   // String s  <=> StringBuilder sb
   StringBuilder sb = new StringBuilder(s);
   String s = sb.toString();
   
   // int x  <=>  String s
   String s = Integer.toString(x);   String s = String.valueOf(x);
   int x = Integer.parseInt(s);   int x = Integer.valueOf(s);
   
   // int x  <=> StringBuilder sb
   StringBuilder sb = new StringBuilder().append(x);
   int x = Integer.parseInt(sb.toString());
   ```

3. 静态方法

   ```java
   // Arrays
   // vector<vector<int>> g(n)
   List<Integer>[] g = new ArrayList[n];
   Arrays.setAll(g, i -> new ArrayList<>());
   
   int[] a = new int[] {1, 2, 5, 3};
   Arrays.sort(a);
   Arrays.sort(a, 1, 2);
   
   int[] g = Arrays.copyOf(f, f.length);
   int[] g = Arrays.copyOfRange(f, 0, f.length);
   
   List<Integer> a = Arrays.asList(1, 2, 3);
   List<Integer> b = new ArrayList<>(Arrays.asList(1, 2, 3));
   Set<Integer> s = new HashSet<>(Arrays.asList(1, 2, 3));
   
   // Integer.parseInt() 可以进制转换！！！
   int n = Integer.parseInt("1010", 2);   // 10
   int m = Integer.parseInt("1A", 16);    // 26
   
   // Collections
   Collections.sort(list);
   Collections.reverse(list);
   Collections.shuffle(list);
   Collections.swap(list, i, j);
   ```

4. 原生数组

5. String

   ```java
   String s = "abc";
   s.length();
   s.charAt(i);
   
   s.contains(c);
   s.compareTo(t);
   s.startsWith(prefix) / s.endsWith(suffix);
   s.substring(begin) / s.substring(begin, end);
   
   s.repeat(n);
   ```

6. StringBuilder

   ```java
   StringBuilder sb = new StringBuilder("abc")
     								.append("ABC")
     								.append(100);
   String s = sb.toString();
   
   sb.reverse();
   String res = sb.toString(); // "cba"
   ```

   

7. vector

   ```java
   List<Integer> a = ArrayList<>();
   List<Integer> a = ArrayList<>(n);
   
   a.add(x);
   a.add(i, x);
   
   a.remove(i);
   
   a.set(i, x);
   
   a.get(i);
   
   a.size();
   a.contains(x);
   a.isEmpty();
   a.clear();
   
   a.sort(null);
   
   // vector<vector<int>> g(n)
   List<Integer>[] g = new ArrayList[n];
   Arrays.setAll(g, i -> new ArrayList<>());
   
   t.subList(l, r).sort(
       (a, b) -> Integer.compare(b.get(0), a.get(0))
   );
   ```

8. stack

   ```java
   Deque<Integer> st = new ArrayDeque<>();
   
   st.push(x); // st.addFirst();
   
   st.pop(); // st.removeFirst();
   
   st.peek();
   ```

9. queue

   ```java
   Deque<Integer> q = new ArrayDeque<>();
   
   q.offer(x);
   
   q.poll();
   
   q.peek();
   ```

10. deque

   ```java
   Deque<Integer> q = new ArrayDeque<>();
   
   offerFirst(e) / offerLast(e)
   pollFirst() / pollLast()
   peekFirst() / peekLast()
   
   addFirst(e) / addLast(e)
   removeFirst() / removeLast()
   getFirst() / getLast()
   ```

11. priority_queue

   ```java
   // 小根堆
   PriorityQueue<E> pq = new PriorityQueue<>();
   
   // 大根堆
   PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);
   
   pq.offer(x);
   pq.peek();
   pq.poll();
   ```

11. set

   ```java
   Set<Integer> S = new TreeSet<>();
   
   first()
   last()
   lower(x)				< x 的最大元素
   floor(x)				<= x 的最大元素
   ceiling(x)			>= x 的最小元素
   higher(x)				> x 的最小元素
   
   ```

11. map

    ```java
    Map<Integer, Integer> mp = new HashMap<>();
    
    mp.computeIfAbsent(key, _ -> newValue);
    mp.merge(key, value, Integer::sum);
    mp.getOrDefault(key, newValue);
    
    for (Integer key : map.keySet())
    for (Integer value : map.values())
    for (Map.Entry<Integer, Integer> entry : map.entrySet())
    ```

12. mysql

    ```mysql
    # 执行顺序
    from
    where
    group by
    having
    select
    order by
    # WHERE 过滤“行（row）” HAVING 过滤“组（group）”
    
    # 去重
    distinct
    
    # 返回字符串 s 的长度
    char_length(s)
    
    # 对字符串 s 的下标 i 开始截取一个长度为 len 的子串
    substring(s, i, len)
    
    # 内连接 & 外连接
    inner join # 内连接 <=> join
    left join # 左外连接
    cross join # 交叉连接/笛卡尔积
    
    # 全连接（MySQL 不支持 FULL JOIN）
    SELECT *
    FROM A LEFT JOIN B ON A.id = B.id
    UNION
    SELECT *
    FROM A RIGHT JOIN B ON A.id = B.id;
    
    # 把两个 SELECT 的结果“纵向合并”，并自动去重
    UNION # 就像把两张结果表 上下拼在一起。
    UNION ALL # 不去重
    
    # 计算时间差
    # type = day/hour/second;
    # result = b.date - a.date
    timestampdiff(type, a.date, b.date) = result
    
    # result = a.date - b.date
    datediff(a.date, b.date) = result
    
    # 排序
    asc # 升序
    desc # 降序
    
    # 聚合函数
    count(*)
    sum(col) # 自动忽略 NULL
    avg(col)
    min(col)
    max(col)
    
    if(col = 'val', res1, res2)
    
    ifNull(col, 0) 
    # IS NULL      → 判 NULL
    # IS NOT NULL  → 判非 NULL
    
    round(result, n) # result 四舍五入，保留 n 位小数
    mod(n, k) # 返回 n 模 k 的结果
    
    where in
    
    # 时间数据格式化
    date_format(date, format)
    DATE_FORMAT(trans_date, '%Y-%m')
    date_add(date, interval 1 day)
    date_sub(date, interval 1 day)
    
    # case...when...
    case
        when 布尔表达式1 then 返回值1
        when 布尔表达式2 then 返回值2
        else 返回值3
    end
    
    # count(*) over(partition by id)
    select id, count(*) over(partition by id)
    from Id
    ```
    
    