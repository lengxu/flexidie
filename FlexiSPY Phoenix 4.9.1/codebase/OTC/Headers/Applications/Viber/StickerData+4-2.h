/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSNumber, NSString, UIImage;

//@interface StickerData : NSObject
//{
//    NSString *_imagePath;
//    NSString *_outlinePath;
//    id <FICEntity> _imageEntity;
//    id <FICEntity> _outlineEntity;
//    NSNumber *_stickerID;
//    unsigned int _downloadStatus;
//    NSString *_cacheFormatName;
//}
@interface StickerData (Viber4_2)
+ (id)defaultOutline;
+ (id)defaultSticker;
@property(readonly, nonatomic) NSString *cacheFormatName; // @synthesize cacheFormatName=_cacheFormatName;
@property(readonly, nonatomic) unsigned int downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(readonly, nonatomic) NSNumber *stickerID; // @synthesize stickerID=_stickerID;
//- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) struct CGSize size;
- (void)failedToDownload;
- (void)stickerDownloaded;
- (void)notifyStickerLoadedAndSizeChanged:(BOOL)arg1;
@property(readonly, nonatomic) UIImage *lowResOutline;
@property(readonly, nonatomic) UIImage *lowResImage;
//@property(readonly, nonatomic) id <FICEntity> stickerImageEntity;
//@property(readonly, nonatomic) id <FICEntity> outlineEntity;
@property(readonly, nonatomic) NSString *outlinePath;
@property(readonly, nonatomic) NSString *imagePath;
- (void)setDownloadStatus:(unsigned int)arg1;
- (id)getFormatNameFromStickerDimensionsWidth:(int)arg1 height:(int)arg2;
- (id)getFormatFromStickerImageSize:(struct CGSize)arg1;
- (id)getFormatNameFrom:(id)arg1;
- (id)getFormatNameFromImage;
- (void)checkStatus;
- (id)initWithID:(id)arg1;
- (id)initWithSticker:(id)arg1;

@end

