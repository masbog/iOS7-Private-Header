/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABTabletStyleProvider.h"


#import "TKTonePickerStyleProvider.h"

#import "TKVibrationPickerStyleProvider.h"



@class UIColor, UIFont;



@interface ABFaceTimeStyleProvider : ABTabletStyleProvider <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>

{

}



- (id)_accessoryDisclosureIndicatorHighlightedImage;

- (id)_accessoryDisclosureIndicatorHighlightedImageShadowed;

- (id)_accessoryDisclosureIndicatorImage;

- (id)_accessoryDisclosureIndicatorImageShadowed;

- (int)abCellStyleForCardTableLinkingUI;

- (int)abCellStyleForCardTableWhenEditing:(_Bool)arg1;

- (int)abCellStyleForGroupsTableGrouped;

- (int)abCellStyleForGroupsTablePlain;

- (int)abCellStyleForMembersTable;

- (id)cardActionButtonBackgroundHighlighted;

- (id)cardActionButtonBackgroundNormal;

- (long long)cardActionButtonType;

- (id)cardActionConferenceIcon;

- (id)cardActionConferenceIconPressed;

- (_Bool)cardActionsAllowFaceTimeFavorites;

- (_Bool)cardActionsAllowVoiceFavorites;

- (id)cardCellBackgroundColor;

- (id)cardCellDividerColorVertical:(_Bool)arg1;

- (id)cardCellDividerShadowColorVertical:(_Bool)arg1;

- (_Bool)cardCellLooksDifferentWhenEditing;

- (long long)cardCellSelectionStyle;

- (id)cardClippingImageLabelBevelColor;

- (id)cardClippingImageLabelColor;

- (id)cardDeleteButtonImage;

- (id)cardDeleteButtonImagePressed;

- (id)cardHeaderDefaultLabelTextColor;

- (id)cardHeadlineTextColor;

- (id)cardLabelEmphasizedHighlightedTextColor;

- (id)cardLabelHighlightedTextColor;

- (id)cardLabelSelectedBackgroundColor;

- (id)cardLabelTextColor;

- (id)cardPhotoBackgroundImage;

- (id)cardPhotoEditOverlayImage;

- (id)cardPhotoEditPlaceholderImage;

- (id)cardPhotoFacebookAttributionImage;

- (double)cardPhotoFrameBorderSize;

- (id)cardPhotoMaskImage;

- (struct CGSize)cardPhotoOffset;

- (id)cardPhotoOverlayImage;

- (id)cardPhotoShadowImage;

- (struct CGSize)cardPhotoShadowOffset;

- (_Bool)cardPhotoShouldApplyOverlayImageWhenLabelPresent;

- (id)cardPlaceholderCompanyImage;

- (_Bool)cardPlaceholderImageShouldApplyMaskAndOverlay;

- (id)cardPlaceholderPersonImage;

- (_Bool)cardSectionAlwaysWantsHeader;

- (_Bool)cardSectionDrawsDefaultTopShadow;

- (_Bool)cardShouldUseSeparateSectionsForUnknownCardActions;

- (id)cardTableCellBorderColor;

- (_Bool)cardTableShouldRemoveBackgroundView;

- (_Bool)cardTableUsesRowFadeAnimation;

- (_Bool)cardTableViewUsesDistinctSectionHeaderFooterHeights;

- (id)cardTaglineTextColor;

- (id)cardValueClearButtonImage;

- (id)cardValueHighlightedTextColor;

- (_Bool)cardValueHighlightsWhenTouched;

- (id)cardValueTextColor;

- (_Bool)datePickerHasNavigationTitle;

- (int)dialogStyleForDeleteConfirmation;

- (id)editorViewColor;

- (id)groupAccountNameColor;

- (id)groupAccountNameShadowColor;

- (id)groupCellBackgroundColor;

- (id)groupCellHighlightedTextColor;

- (long long)groupCellSelectionStyle;

- (id)groupCellShadowColor;

- (id)groupCellTextColor;

- (id)groupHeaderBackgroudColor;

- (id)groupsTableBackgroundColor;

- (_Bool)groupsTableShouldRemoveBackgroundView;

- (long long)headerViewBorderStyle;

- (_Bool)labelPickerUsesOpaqueBackground;

- (id)memberHeaderBackgroundView;

- (id)memberNameMeCardTextColor;

- (id)memberNameSelectedColor;

- (id)memberNameSelectedShadowColor;

- (id)memberNameShadowColor;

- (id)memberNameTextColor;

- (id)memberPhotoMaskImage;

- (id)memberPhotoOverlayImage;

- (id)memberPlaceholderCompanyImage;

- (id)memberPlaceholderPersonImage;

- (id)memberSearchFieldBackgroundColor;

- (id)memberSectionListHeaderImage;

- (id)membersBackgroundColor;

- (id)membersHeaderBackgroundColor;

- (id)membersHeaderContentViewBackgroundColor;

- (double)membersIndexMaximumHeight;

- (id)membersIndexTextColor;

- (id)membersIndexTrackingBackgroundColor;

- (_Bool)membersSearchBarIsInTableHeader;

- (long long)membersSelectionStyle;

- (id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1;

- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;

- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;

- (id)newBackgroundViewForCellStyle:(int)arg1 selected:(_Bool)arg2;

- (id)newBackgroundViewForSelectedTonePickerCell:(_Bool)arg1;

- (id)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;

- (id)newCardDividerViewVertical:(_Bool)arg1;

- (id)newTableFooterViewForCellStyle:(int)arg1;

- (long long)peoplePickerBarStyle;

- (_Bool)peoplePickerBarStyleIsTranslucent;

- (id)personActionColor;

- (id)personActionFont;

- (id)personActionHighlightedColor;

- (id)personActionShadowColor;

- (struct CGSize)personActionShadowOffset;

- (id)personHeaderPasteboardColor;

- (id)personHeaderShadowColor;

- (struct CGSize)personHeaderShadowOffset;

- (id)personLabelColor;

- (id)personLabelHighlightedColor;

- (id)personLabelShadowColor;

- (id)personValueEmphasizedColor;

- (id)personValueEmphasizedHighlightColor;

- (id)personValueImportantColor;

- (id)personValueImportantHighlightColor;

- (id)personViewGetFavoritesBadge;

- (id)personViewGetFavoritesBadgeHighlighted;

- (double)personViewHeaderImageHeight;

- (double)personViewHeaderImageWidth;

- (long long)pickerTransitionStyle;

- (_Bool)presentDatePickerInPopover;

- (_Bool)presentModalViewInPopover;

- (_Bool)presentNewContactsControllersInPopover;

- (id)separatorColorForCellStyle:(int)arg1;

- (long long)separatorStyleForCellStyle:(int)arg1;

- (void)setIndicatesFaceTimeHistory:(_Bool)arg1 onActionButton:(id)arg2;

- (id)shadowColorForCellStyle:(int)arg1;

- (_Bool)shouldDefinePickerTransitionStyle;

- (_Bool)shouldPropagateStylesToPickers;

- (_Bool)shouldUseCardContentProviderWhenAvailable;

- (_Bool)shouldUsePeoplePickerBarStyle;

@property(readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;

@property(readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;

- (id)tonePickerCellSelectedTextColor;

@property(readonly, nonatomic) UIColor *tonePickerCellTextColor;

@property(readonly, nonatomic) UIFont *tonePickerCellTextFont;

@property(readonly, nonatomic) UIColor *tonePickerHeaderTextColor;

@property(readonly, nonatomic) UIFont *tonePickerHeaderTextFont;

@property(readonly, nonatomic) struct UIEdgeInsets tonePickerHeaderTextPaddingInsets;

@property(readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;

@property(readonly, nonatomic) struct UIOffset tonePickerHeaderTextShadowOffset;

@property(readonly, nonatomic) long long tonePickerTableViewSeparatorStyle;

@property(readonly, nonatomic) _Bool tonePickerUsesOpaqueBackground;

@property(readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;

@property(readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;

- (id)vibrationPickerCellSelectedTextColor;

@property(readonly, nonatomic) UIColor *vibrationPickerCellTextColor;

@property(readonly, nonatomic) UIFont *vibrationPickerCellTextFont;

@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;

@property(readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;

@property(readonly, nonatomic) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;

@property(readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;

@property(readonly, nonatomic) struct UIOffset vibrationPickerHeaderTextShadowOffset;

@property(readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;

@property(readonly, nonatomic) _Bool vibrationPickerUsesOpaqueBackground;

@property(readonly, nonatomic) _Bool wantsCustomTonePickerHeaderView;

@property(readonly, nonatomic) _Bool wantsCustomVibrationPickerHeaderView;



@end

