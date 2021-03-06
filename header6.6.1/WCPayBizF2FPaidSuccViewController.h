//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class MMUILabel, UIButton, UIScrollView, WCPayWebImageView;
@protocol WCPayBizF2FPaidSuccViewControllerDelegate;

@interface WCPayBizF2FPaidSuccViewController : WCPayBaseViewController
{
    _Bool _shouldQryActivityStatus;
    id <WCPayBizF2FPaidSuccViewControllerDelegate> _delegate;
    UIScrollView *_contentView;
    WCPayWebImageView *_activityLogoImgView;
    MMUILabel *_activityTitleLabel;
    MMUILabel *_activityContentLabel;
    UIButton *_activityBtn;
}

@property(nonatomic) _Bool shouldQryActivityStatus; // @synthesize shouldQryActivityStatus=_shouldQryActivityStatus;
@property(retain, nonatomic) UIButton *activityBtn; // @synthesize activityBtn=_activityBtn;
@property(retain, nonatomic) MMUILabel *activityContentLabel; // @synthesize activityContentLabel=_activityContentLabel;
@property(retain, nonatomic) MMUILabel *activityTitleLabel; // @synthesize activityTitleLabel=_activityTitleLabel;
@property(retain, nonatomic) WCPayWebImageView *activityLogoImgView; // @synthesize activityLogoImgView=_activityLogoImgView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCPayBizF2FPaidSuccViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshActivityContent;
- (void)qryActivityStatusIfNeed;
- (void)activityBtnClick;
- (void)doneBtnClick;
- (id)genGreenButton;
- (id)genActivityInfoView;
- (void)setupContentView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)dealloc;

@end

