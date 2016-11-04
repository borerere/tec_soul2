using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections.Generic;

namespace Btree
{

    class TreeNode
    {
  
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
            } else if (node.value > value) {
                if(node.left != null)
                {
                    insertNode(value, node.left);
                } else
                {
                    node.left = createNewNode(value);
                }
            } else {
                if(node.right != null)
                {
                    insertNode(value, node.right);
                } else
                {
                    node.right = createNewNode(value);
                }

            }
        }

        // privateメソッド
        private TreeNode createNewNode(int value)
        {
            TreeNode newNode = new TreeNode();
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

            for (int i = 0; i< 10; i++)  {
                TN.insertNode(i,TN);
            }
        }
    }
}
