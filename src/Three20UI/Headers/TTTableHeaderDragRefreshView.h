//
//  Created by Devin Doty on 10/14/09.
//  http://github.com/enormego/EGOTableViewPullRefresh
//  Copyright 2009 enormego. All rights reserved.
//
//  Modifications copyright 2010 Facebook.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
  TTTableHeaderDragRefreshReleaseToReload,
  TTTableHeaderDragRefreshPullToReload,
  TTTableHeaderDragRefreshLoading
} TTTableHeaderDragRefreshStatus;

/**
 * Pulled from the uprise78/three20-P31 fork with consent of uprise78.
 */
@interface TTTableHeaderDragRefreshView : UIView {
  NSDate*                   _lastUpdatedDate;
  UILabel*                  _lastUpdatedLabel;
  UILabel*                  _statusLabel;
  UIImageView*              _arrowImage;
  UIActivityIndicatorView*  _activityView;
  TTTableHeaderDragRefreshStatus  _status;
}

@property (nonatomic, assign) TTTableHeaderDragRefreshStatus status;

- (void)setCurrentDate;
- (void)setUpdateDate:(NSDate*)date;

@end
