#ifndef BINARYTREE_H
#define BINARYTREE_H


class BinaryTree
{
	public:
		BinaryTree() {}          // Default
		virtual ~BinaryTree() {} // Base destructor
		// Reinitialize the queue.  The user is responsible for
		// reclaiming the storage used by the queue elements.
		virtual void clear() = 0 ;
		// Insere o elemento no na árvore respeitando as restrições de maior à direita e menor à esquerda.
		virtual void insert(int) = 0;
		// Return: a altura da árvore.
		virtual int height() = 0;
		// Return: o tamanho do caminho até o nó. Caso o nó não exista retorna -1.
		virtual int pathForNode(int) = 0;
		// Return: true se a árvore for cheia e 0 caso contrário.
		virtual bool isFull() = 0;
		// Return: true se a árvore for completa e 0 caso contrário.
		virtual bool isComplete() = 0;
};

#endif // BINARYTREE_H
