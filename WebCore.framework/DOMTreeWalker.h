/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class <DOMNodeFilter>, DOMNode;

@interface DOMTreeWalker : DOMObject  {
}

@property(retain,readonly) DOMNode * root;
@property(readonly) unsigned int whatToShow;
@property(retain,readonly) <DOMNodeFilter> * filter;
@property(readonly) BOOL expandEntityReferences;
@property(retain) DOMNode * currentNode;


- (void)finalize;
- (id)currentNode;
- (void)setCurrentNode:(id)arg1;
- (id)root;
- (unsigned int)whatToShow;
- (id)filter;
- (BOOL)expandEntityReferences;
- (id)previousNode;
- (id)nextNode;
- (id)previousSibling;
- (id)parentNode;
- (id)lastChild;
- (id)nextSibling;
- (id)firstChild;
- (void)dealloc;

@end
