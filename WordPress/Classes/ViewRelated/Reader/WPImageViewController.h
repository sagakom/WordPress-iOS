#import <UIKit/UIKit.h>

@interface WPImageViewController : UIViewController

@property (nonatomic, strong) NSURL *url;
@property (nonatomic) BOOL isLoadingImage;
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIImage *image;

- (instancetype)initWithImage:(UIImage *)image;
- (instancetype)initWithURL:(NSURL *)url;
- (instancetype)initWithImage:(UIImage *)image andURL:(NSURL *)url NS_DESIGNATED_INITIALIZER;
- (void)loadImage;
- (void)hideBars:(BOOL)hide animated:(BOOL)animated;
- (void)centerImage;

@end
