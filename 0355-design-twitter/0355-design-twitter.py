class Twitter:

    def __init__(self):
        self.tweets = defaultdict(list)
        self.followers = defaultdict(set)
        self.time = 0

    def postTweet(self, userId: int, tweetId: int) -> None:
        self.tweets[userId].append([self.time, tweetId])
        self.time -= 1

    def getNewsFeed(self, userId: int) -> List[int]:
        followers = self.followers[userId]
        followers.add(userId)

        newsFeed = []
        for f in followers:
            i = len(self.tweets[f]) - 1
            if i >= 0:
                time, tweetId = self.tweets[f][i]
                newsFeed.append([time, tweetId, f, i])
        heapq.heapify(newsFeed)
        
        res = []

        while newsFeed and len(res) < 10:
            time, tweetId, f, i = heapq.heappop(newsFeed)
            res.append(tweetId)

            if i > 0:
                time, tweetId = self.tweets[f][i-1]
                heapq.heappush(newsFeed, [time, tweetId, f, i-1])
        return res

    def follow(self, followerId: int, followeeId: int) -> None:
        self.followers[followerId].add(followeeId)

    def unfollow(self, followerId: int, followeeId: int) -> None:
        if followeeId in self.followers[followerId]:
            self.followers[followerId].remove(followeeId)


# Your Twitter object will be instantiated and called as such:
# obj = Twitter()
# obj.postTweet(userId,tweetId)
# param_2 = obj.getNewsFeed(userId)
# obj.follow(followerId,followeeId)
# obj.unfollow(followerId,followeeId)