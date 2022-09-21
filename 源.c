#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	int val;
	struct Node* left;
	struct Node* right;
}TreeNode;

void show(TreeNode*);
TreeNode* create(TreeNode* p);

int isSameTree(TreeNode* p, TreeNode* q);



int main() {
	TreeNode *T1, *T2;
	T1 = NULL;
	T2 = NULL;
	T1 = create(T1);
	T2 = create(T2);
	//show(T1);
	//show(T2);
	printf("%d\n", isSameTree(T1, T2));

}


TreeNode * create(TreeNode* p) {
	int n;
	scanf_s("%d", &n);
	if (n == 0) {
		p = NULL;
	}
	else {
		p = (TreeNode*)malloc(sizeof(TreeNode));
		p -> val = n;
		p->left = create(p->left);
		p->right = create(p->right);
	}
	return p;
}

void show(TreeNode* p) {
	if (p == NULL)return;
	else {
		printf("%d ", p->val);
		show(p->left);
		show(p->right);
	}
}

int isSameTree(TreeNode* p, TreeNode* q) {
	if (!p && !q)return 1;
	else {
		printf("%d %d\n", p->val, q->val);
		if (p->val != q->val)return 0;
		isSameTree(p->left, q->left);
		isSameTree(p->right, q->right);
	}
}