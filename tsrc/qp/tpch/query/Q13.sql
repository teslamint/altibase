ALTER SESSION SET EXPLAIN PLAN = ON;
ALTER SYSTEM SET TRCLOG_EXPLAIN_GRAPH = 1;

SET TIMING ON;
SET TIMESCALE MILSEC;

SELECT C_COUNT,
       COUNT(*) AS CUSTDIST
FROM ( SELECT C_CUSTKEY AS C_CUSTKEY,
              COUNT(O_ORDERKEY) AS C_COUNT
       FROM CUSTOMER LEFT OUTER JOIN ORDERS 
            ON C_CUSTKEY = O_CUSTKEY 
            AND O_COMMENT NOT LIKE '%special%requests%'
       GROUP BY C_CUSTKEY ) C_ORDERS
GROUP BY C_COUNT
ORDER BY CUSTDIST DESC,
	     C_COUNT DESC; 

ALTER SYSTEM SET TRCLOG_EXPLAIN_GRAPH = 0;
