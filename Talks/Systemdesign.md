3) Load Balancing
- all server are expected to have equal 1/n server
- changing bucket size when no of servers increase
- Now with loadbalancing, same gaurav is mapped to paricular server and cache info change
- Overall change should be less

4) Consistent hashing
- adding or removing servers is problem
- hashing the server ids is also possible

5) Monolith vs Microservices
- Monolith: same stack coupled together in multiple box, DBs etci
Faster communication and easier testing of components
Microservices:
- easier to design and deploy
- just know context of service and parallel development is always there
Justifying Microservice architecture is there
- Stackoverflow uses Monolith

Database Sharding
- optimise tables:
sharding, queries
- Horizontal partiotining, database servers shared together- consistency is important, accuracy
- shard is like optimising and sharing pizza
Problems:1) Joins, 2)fixed no of shards
- create an index on sharding

11)Tinder
= For storing images
blob vs file: Arguments

- Profile Service:
How to ensure Update profile is authentic? Token(for profile service)
Decoupled actions
Image Service
Profile Service

Direct Messaging:
sending message uid1 to uid2 through Gateway service
XMPP protocol and client and server chat through this 

HTTP protocal - client server
Websocket, TCP

Noting Recommendations:
Create a Matcher and send session and map things
Is recommendations preserval is there?

Recommendations Creation for each person:

Index in DB??
Optimisation of DB for querying is build.
1) Cassandra/ Dynamic DB for non-sql
2) Or use Horizontal partitioning
- Used because we need to optimise based on Location, sort on age and things like REcommendation engine
Have a master slave architecture
- Current locationDB and recommendation service

15) PUBLISHER SUBSRIBER MODEL

Request response cycle in normal systems have lot of disadvantages: data inconsistency

Instead used Message broker like Kaffka/RabbitMQ which is great as Message queues.
Decoupling
Simplifies interaction and has Multiple point of failure
Transaction guarantees
Easily scalable

Disadv: Having a consistency in the system for financial services is usually difficult.
(transfer 1000 by 950 after deduct 50)
