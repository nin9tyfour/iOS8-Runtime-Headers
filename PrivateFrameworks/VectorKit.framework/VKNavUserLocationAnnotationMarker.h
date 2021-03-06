/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKAnimation;

@interface VKNavUserLocationAnnotationMarker : VKAnnotationMarker  {
    bool_shouldBillboard;
    VKAnimation *_billboardAnimation;
    float _billboardFactor;
    float _scale;
    bool_shouldShowCourse;
    bool_puckFlipped;
    double _presentationCourse;
    double _sizePoints;
    double _puckOffset;
    bool_stale;
    VKAnimation *_puckStyleAnimation;
    int _puckStyle;
    float _greyPuckAlphaScale;
    struct { 
        struct { 
            double v[4][4]; 
        } arrowMatrix; 
        struct { 
            double v[4][4]; 
        } circleMatrix; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } arrowColor; 
    } _puckState;
    int _style;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _arrowColor;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _arrowColorStale;
    float _circleBrightness;
    float _arrowBrightness;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _textureArrow;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _textureCircle;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _gglPuckRenderState;
    struct shared_ptr<ggl::TextureWithBrightness::Shader::Setup> { 
        struct Setup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _circleShaderSetup;
    struct shared_ptr<ggl::TextureAlphaMask::Shader::Setup> { 
        struct Setup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _arrowShaderSetup;
    struct shared_ptr<ggl::RenderItem> { 
        struct RenderItem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _arrowRenderItem;
    struct shared_ptr<ggl::RenderItem> { 
        struct RenderItem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _circleRenderItem;
    bool_needsTextureUpdate;
}

@property bool shouldBillboard;
@property bool shouldShowCourse;
@property float scale;
@property(getter=isStale) bool stale;
@property int style;
@property double presentationCourse;
@property struct { float x1; float x2; float x3; float x4; } innerColor;


- (bool)shouldShowCourse;
- (bool)shouldBillboard;
- (void)updateWithStyleQuery:(const struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 style:(int)arg3;
- (void)setStale:(bool)arg1;
- (void)setShouldShowCourse:(bool)arg1;
- (void)setShouldBillboard:(bool)arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setInnerColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (struct { float x1; float x2; float x3; float x4; })innerColor;
- (double)presentationCourse;
- (void)_updateTexturesIfNeeded;
- (void)_updatePuckStyle;
- (void)appendCommandsToBuffer:(struct CommandBuffer { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned long long x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1 inContext:(id)arg2;
- (void)layoutWithContext:(id)arg1;
- (bool)isStale;
- (void)setStyle:(int)arg1;
- (void)setScale:(float)arg1;
- (int)style;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)scale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setModel:(id)arg1;

@end
