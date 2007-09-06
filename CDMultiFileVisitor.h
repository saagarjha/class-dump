// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 2007 Steve Nygard.  All rights reserved.

#import "CDTextClassDumpVisitor.h"

@class CDSymbolReferences;

@interface CDMultiFileVisitor : CDTextClassDumpVisitor
{
    NSString *outputPath;
    unsigned int referenceIndex;
}

- (id)init;
- (void)dealloc;

- (NSString *)outputPath;
- (void)setOutputPath:(NSString *)newOutputPath;

- (void)createOutputPathIfNecessary;

- (void)buildClassFrameworks;

- (void)generateStructureHeader;

- (void)willBeginVisiting;

- (void)willVisitClass:(CDOCClass *)aClass;
- (void)didVisitClass:(CDOCClass *)aClass;

- (void)willVisitCategory:(CDOCCategory *)aCategory;
- (void)didVisitCategory:(CDOCCategory *)aCategory;

- (void)willVisitProtocol:(CDOCProtocol *)aProtocol;
- (void)didVisitProtocol:(CDOCProtocol *)aProtocol;

@end
