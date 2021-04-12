import heapq
import math
from typing import  List


def find_shortestpath(
    n: int, edges: List[List[int]], pathlength: List[float], start: int, end: int
):
    adjacent_list = {}

    edgesT = []
    for i, x in enumerate(edges):
        edgesT.append(x[::-1])


    for x in range(n):
        temp = {}
        # [([0,1], 0), ([1,2], 1), ([0,2], 2), ([2,0],2), ([2,1], 1), ([1,0], 0)]
        for idx,element in enumerate(edges):
            if(element[0]==x):
                temp[element[1]] = pathlength[idx]

        for idx, element in enumerate(edgesT):
            if(element[0]==x):
                temp[element[1]] = pathlength[idx]
        adjacent_list[x] = temp

    print("adjacent", adjacent_list)

    distances = {v: math.inf for v in adjacent_list}
    distances[start] = 0

    priority_queue = [(0, start)]
    while len(priority_queue) > 0:
        current_distance, current_vertex = heapq.heappop(priority_queue)

        if current_distance> distances[current_vertex]:
            continue

        for neighbour, weight in adjacent_list[current_vertex].items():
            dist = current_distance + weight

            if dist < distances[neighbour]:
                distances[neighbour] = dist
                heapq.heappush(priority_queue, (dist, neighbour))

    return(distances[end])



if __name__ == "__main__":
    print("Solution: testcases")
    find_shortestpath(3, [[0, 1], [1, 2], [0, 2]], [0.5,0.5,0.2],0, 2)
    find_shortestpath(6, [[0,1], [0,2], [0,3],[1,2], [1,3],[2,3],[2,4],[2,5],[3,4],[4,5]], [2, 5, 1, 2, 3, 2, 3, 1, 5, 1, 1], 0, 2)
