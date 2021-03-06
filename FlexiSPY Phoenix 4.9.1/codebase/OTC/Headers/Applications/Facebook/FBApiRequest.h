/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSMutableArray, NSString;

@interface FBApiRequest : NSObject
{
    NSString *_friendlyName;
    NSString *_method;
    NSString *_relativeUrl;
    NSString *_body;
    NSString *_dependsOn;
    NSMutableArray *_attachFiles;
}

@property(readonly, nonatomic) NSString *dependsOn; // @synthesize dependsOn=_dependsOn;
@property(readonly, nonatomic) NSMutableArray *attachFiles; // @synthesize attachFiles=_attachFiles;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *relativeUrl; // @synthesize relativeUrl=_relativeUrl;
@property(readonly, nonatomic) NSString *method; // @synthesize method=_method;
@property(readonly, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
- (BOOL)isTypeString:(id)arg1;
- (void)dealloc;
- (id)toDictionary;
- (void)setDependsOn:(id)arg1;
- (void)addAttachDictionary:(id)arg1;
- (void)addAttachFile:(id)arg1;
- (id)initWithName:(id)arg1 method:(id)arg2 relativeUrl:(id)arg3 body:(id)arg4;

@end

