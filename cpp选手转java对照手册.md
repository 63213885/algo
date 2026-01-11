# **cpp选手转java对照手册**

1. 基本数据类型

   ```java
   int				Integer
   long			Long
   char			Character
   boolean		Boolean
   ```

2. 原生数组

3. String

   ```java
   String s = "abc";
   s.length();
   s.charAt(i);
   char[] t = s.toCharArray();
   s.contains(c);
   s.compareTo(t);
   s.startsWith(prefix) / s.endsWith(suffix);
   s.substring(begin) / s.substring(begin, end);
   ```

4. StringBuilder

   ```java
   StringBuilder sb = new StringBuilder("abc");
   sb.reverse();
   String res = sb.toString(); // "cba"
   ```

   

5. vector

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

6. stack

   ```java
   Deque<Integer> st = new ArrayDeque<>();
   
   st.push(x); // st.addFirst();
   
   st.pop(); // st.removeFirst();
   
   st.peek();
   ```

7. queue

   ```java
   Deque<Integer> q = new ArrayDeque<>();
   
   q.offer(x);
   
   q.poll();
   
   q.peek();
   ```

8. deque

   ```java
   Deque<Integer> q = new ArrayDeque<>();
   
   offerFirst(e) / offerLast(e)
   pollFirst() / pollLast()
   peekFirst() / peekLast()
   
   addFirst(e) / addLast(e)
   removeFirst() / removeLast()
   getFirst() / getLast()
   ```

9. priority_queue

   ```
   ```

10. set

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
    ```

12. mysql

    ```
    timestampdiff(day, a.recordDate, b.recordDate) = -1
    ```

    