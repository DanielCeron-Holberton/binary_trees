#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_


#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/*Binary Search Tree*/
typedef struct binary_tree_s bst_t;

/*AVL Tree*/
typedef struct binary_tree_s avl_t;

/*PRINT FUNCTION*/
void binary_tree_print(const binary_tree_t *);

/*CREATE FUNCTION*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*INSERT LEFT FUNCTION*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/*INSERT RIGHT FUNCTION*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/*DELETES BINARY TREE*/
void binary_tree_delete(binary_tree_t *tree);
/*CHECKS IF LEAF*/
int binary_tree_is_leaf(const binary_tree_t *node);
/*CHECKS IF */
int binary_tree_is_root(const binary_tree_t *node);
/*PRE-ORDER TRAVERSE*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/*IN-ORDER TRAVERSE*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/*POST-ORDER TRAVERSE*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/*HEIGHT CHECK*/
size_t binary_tree_height(const binary_tree_t *tree);
/*DEPTH CHECK*/
size_t binary_tree_depth(const binary_tree_t *tree);
/*SIZE CHECK*/
size_t binary_tree_size(const binary_tree_t *tree);



#endif /* _BINARY_TREES_H_ */
