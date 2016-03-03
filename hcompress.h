struct tnode {
	double weight;
	int c;
	struct tnode* left;
	struct tnode* right;
	struct tnode* parent;
};

extern struct tnode* createFreqTable(char*);
extern struct tnode* createHuffmanTree(struct tnode*);
extern void encodeFile(char*, struct tnode*);
extern void decodeFile(char*, struct tnode*);
