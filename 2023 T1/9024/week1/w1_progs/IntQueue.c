// Integer Queue ADO implementation
#include "IntQueue.h"
#include <assert.h>

typedef struct {
   int item[MAXITEMS];
   int top;
} queueRep;                // defines the Data Structure

static queueRep queueObject;  // defines the Data Object

void QueueInit() {         // set up empty queue
   queueObject.top = -1;
}

int QueueIsEmpty() {      // check whether queue is empty
   return (queueObject.top < 0);
}

void QueueEnqueue(int n) {   // insert int on top of queue
   assert(queueObject.top < MAXITEMS-1);
   queueObject.top++;
   int i;
   for (i = queueObject.top; i > 0; i--) {
      queueObject.item[i] = queueObject.item[i-1];
   }
   queueObject.item[0] = n;
}

int QueueDequeue() {          // remove int from top of queue
   assert(queueObject.top > -1);
   int i = queueObject.top;
   int n = queueObject.item[i];
   queueObject.top--;
   return n;
}