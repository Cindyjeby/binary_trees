BINARY TREES

This is a data structure in which each node has at most two children.
The childern are referred to as the left child and the right child.

A Tree

This is a non-linear abstract data type with a hierarchy-based structure.
It consists of nodes(wherethe data is stored) that are connected via links.
It startsfrom a single node clalled a "Root Node" and has sub trees connected to theroot.

Terms
Path - Path refers to the sequence of nodes along the edges of a tree.

Root - The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

Parent - Any node except the root node has one edge upward to a node called parent.

Child - The node below a given node connected by its edge downward is called its child node.

Leaf - The node which does not have any child node is called the leaf node.

Subtree - Subtree represents the descendants of a node.

Visiting - Visiting refers to checking the value of a node when control is on the node.

Traversing - Traversing means passing through nodes in a specific order. BINARY TREES

This is a data structure in which each node has at most two children.
The childern are referred to as the left child and the right child.

A Tree

This is a non-linear abstract data type with a hierarchy-based structure.
It consists of nodes(wherethe data is stored) that are connected via links.
It startsfrom a single node clalled a "Root Node" and has sub trees connected to theroot.

Terms
Path - Path refers to the sequence of nodes along the edges of a tree.

Root - The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

Parent - Any node except the root node has one edge upward to a node called parent.

Child - The node below a given node connected by its edge downward is called its child node.

Leaf - The node which does not have any child node is called the leaf node.

Subtree - Subtree represents the descendants of a node.

Visiting - Visiting refers to checking the value of a node when control is on the node.

Traversing - Traversing means passing through nodes in a specific order.
Types of Trees

General Trees - are unordered tree data structures where the root node has minimum 0 or maximum "n" subtrees.

Binary Trees - The root node can only hold up to maximum of 2 subtrees. left subtree and right subtree.
             - based on the number of children, binary trees are divided into 3 types:
                     .Full Binary Tree - tree type where every node has either 0or 2 child nodes.
                     .Complete Binary Tree - tree type where all leaf nodesmust be on the same level.
                     .Perfect Binary Tree - tree type where all leaf nodes are on the same level and every node except leaf nodes have 2 children

Binary Search Trees
- They are more efficient thanBinary Trees
- The data in the BST is always stored in such a way that the value in the left subtree are always less than the value in the root node and the values in the right subtree are always greater than the values in the root node

Advantages of BST
. They are more efficient since time complexity for performing various operations reduces.
. search operations aresimpler

TREE TRAVERSAL

- Traversal is a process of visiting all thenodes of atree and may print their values too.
- Because all nodes are connected via links it always starts from the root node.
- We can not randomly acces a node in a tree
- There are 3 types of ways to traverse a tree:
       . Inorder traversal: .start with left subtree, then root then right
       . preorder traversal: .start with root then left subtree then right subtree
       . postorder traversal :. start with left subtree then right then root.