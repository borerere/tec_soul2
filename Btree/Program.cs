using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Btree
{

    class TreeNode
    {
        StringBuilder output = new StringBuilder();

        // publicメンバ
        public int value;
        public TreeNode left;
        public TreeNode right;
        
        //publicメソッド
        public void insertNode(int value, TreeNode node)
        {
            if (node == null)
            // １つも挿入されていない場合
            {
                TreeNode treeRoot;
                treeRoot = createNewNode(value);
                return;
            } else if (node.value > value) {
                if(node.left != null){
                    insertNode(value, node.left);
                } else {
                    node.left = createNewNode(value);
                }
            } else {
                if(node.right != null){
                    insertNode(value, node.right);
                } else {
                    node.right = createNewNode(value);
                }
            }
            return;
        }

        public void printNode(TreeNode node)
        {

            // 対象ノードの値を出力
            output.Append(node.value);

            // 左側の値を出力
            if (node.left != null){
                output.Append("(");
                printNode(node.left);
                output.Append(",");
            } else {
                output.Append("(_,");
            }
            // 右側の値を出力
            if (node.right != null) {
                printNode(node.right);
                output.Append(")");
            } else {
                output.Append("_)");
            }
            Console.WriteLine(output);
        }

        // privateメソッド
        private TreeNode createNewNode(int value){
            TreeNode newNode = new TreeNode();
            newNode.value = value;
            newNode.left = null;
            newNode.right = null;
            return newNode;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            TreeNode TN = new TreeNode();

            for (int i = 0; i< 10; i++){
                Random randam = new Random(i);
                int randamuNumber = randam.Next(30);
                TN.insertNode(randamuNumber,TN);
            }
            TN.printNode(TN);
            Console.ReadLine();
        }
    }
}
