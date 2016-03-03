#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hcompress.h"

int main(int argc, char* argv[]) {
	
	// check to make sure the input parameters are correct
	if (argc != 3) {
		printf("Error: The correct format is \"hcompress -e filename\" or \"hcompress -d filename.huf\"\n");
		fflush(stdout);
		exit(1);
	}

	// Create the frequency table by reading the generic file
	struct tnode* leafNodes = createFreqTable("decind.txt");
	// Create the huffman tree from the frequency table
	struct tnode* treeRoot = createHuffmanTree(leafNodes);

	// encode
	if (strcmp(argv[1], "-e") == 0) {
		// Pass the leafNodes since it will process bottom up
		encodeFile(argv[2], leafNodes);

	} else { // decode
		// Pass the tree root since it will process top down
		decodeFile(argv[2], treeRoot);
	}
	return 0;
}

struct tnode* createFreqTable(char* filename) {
	return NULL;
}

struct tnode* createHuffmanTree(struct tnode* list) {
	return NULL;
}

void encodeFile(char* filename, struct tnode* tree) {

}

void decodeFile(char* filename, struct tnode* tree) {

}
