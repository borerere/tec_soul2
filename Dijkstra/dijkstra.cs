using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Dijkstra
{

    class Node
    {
        public int X { get; set; }
        public int Y { get; set; }
        List<Edge> Edzes;

        public Node(int x,int y)
        {
            X = x;
            Y = y;
        }
        public void LinkNode(Node linkingNode,int cost)
        {
            Edzes.Add(new Edge(linkingNode,cost));

        }

    }

    class Edge
    {
        Node NextNode;
        int Cost;
        public Edge(Node linkingNode,int cost)
        {
            NextNode = linkingNode;
            Cost = cost;
        }
    }

    class graph
    {
        List<Node> Nodes;
        Node StartNode { get; set; }
        Node GoalNode { get; set;}

    public graph()
        {
            
        }
        public void AddNode(int x ,int y)
        {
            Nodes.Add(new Node(x, y));
        }

        public void ConnectNode(Node Node1 ,Node Node2)
        {
            double cost = getDistance(Node1, Node2);
            Node1.LinkNode(Node2,(int)cost);
            Node2.LinkNode(Node1,(int)cost);
        }

        private double getDistance(Node Node1, Node Node2)
        {
            double distanceX = Math.Abs(Node1.X - Node2.X);
            double distanceY = Math.Abs(Node1.Y - Node2.Y);

            return Math.Sqrt((distanceX * distanceX) + (distanceY * distanceY));
        }
    }

    class dijkstra
    {
    }

}
