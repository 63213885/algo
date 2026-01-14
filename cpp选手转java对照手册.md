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
   
   // Integer.parseInt() 可以进制转换！！！
   int n = Integer.parseInt("1010", 2);   // 10
   int m = Integer.parseInt("1A", 16);    // 26
   ```

3. 原生数组

4. String

   ```java
   String s = "abc";
   s.length();
   s.charAt(i);
   
   s.contains(c);
   s.compareTo(t);
   s.startsWith(prefix) / s.endsWith(suffix);
   s.substring(begin) / s.substring(begin, end);
   ```

5. StringBuilder

   ```java
   StringBuilder sb = new StringBuilder("abc")
     								.append("ABC")
     								.append(100);
   String s = sb.toString();
   
   sb.reverse();
   String res = sb.toString(); // "cba"
   ```

   

6. vector

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
   ```

7. stack

   ```java
   Deque<Integer> st = new ArrayDeque<>();
   
   st.push(x); // st.addFirst();
   
   st.pop(); // st.removeFirst();
   
   st.peek();
   ```

8. queue

   ```java
   Deque<Integer> q = new ArrayDeque<>();
   
   q.offer(x);
   
   q.poll();
   
   q.peek();
   ```

9. deque

   ```java
   Deque<Integer> q = new ArrayDeque<>();
   
   offerFirst(e) / offerLast(e)
   pollFirst() / pollLast()
   peekFirst() / peekLast()
   
   addFirst(e) / addLast(e)
   removeFirst() / removeLast()
   getFirst() / getLast()
   ```

10. priority_queue

   ```
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

    ```
    timestampdiff(day, a.recordDate, b.recordDate) = -1
    ```

    