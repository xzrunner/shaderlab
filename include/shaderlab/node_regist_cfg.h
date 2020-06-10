#ifndef EXE_FILEPATH
#error "You must define EXE_FILEPATH macro before include this file"
#endif

//////////////////////////////////////////////////////////////////////////
// artistic
//////////////////////////////////////////////////////////////////////////

// adjustment

#define NODES_GROUP_NAME Artistic-Adjustment

#define PARM_NODE_CLASS ChannelMixer
#define PARM_NODE_NAME channel_mixer
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Contrast
#define PARM_NODE_NAME contrast
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Hue
#define PARM_NODE_NAME hue
#include EXE_FILEPATH

#define PARM_NODE_CLASS InvertColors
#define PARM_NODE_NAME invert_colors
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS ReplaceColor
#define PARM_NODE_NAME replace_color
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Saturation
#define PARM_NODE_NAME saturation
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS WhiteBalance
#define PARM_NODE_NAME white_balance
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// blend

#define NODES_GROUP_NAME Artistic-Blend

#define PARM_NODE_CLASS Blend
#define PARM_NODE_NAME blend
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// mask

#define NODES_GROUP_NAME Artistic-Mask

#define PARM_NODE_CLASS ChannelMask
#define PARM_NODE_NAME channel_mask
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS ColorMask
#define PARM_NODE_NAME color_mask
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// normal

#define NODES_GROUP_NAME Artistic-Normal

#define PARM_NODE_CLASS NormalBlend
#define PARM_NODE_NAME normal_blend
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS NormalReconstructZ
#define PARM_NODE_NAME normal_reconstruct_z
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS NormalStrength
#define PARM_NODE_NAME normal_strength
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS NormalUnpack
#define PARM_NODE_NAME normal_unpack
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// utility

#define NODES_GROUP_NAME Artistic-Utility

#define PARM_NODE_CLASS ColorspaceConversion
#define PARM_NODE_NAME colorspace_conversion
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

//////////////////////////////////////////////////////////////////////////
// channel
//////////////////////////////////////////////////////////////////////////

#define NODES_GROUP_NAME Channel

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Combine
#define PARM_NODE_NAME combine
#include EXE_FILEPATH

#define PARM_NODE_CLASS Flip
#define PARM_NODE_NAME flip
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Split
#define PARM_NODE_NAME split
#include EXE_FILEPATH

#define PARM_NODE_CLASS Swizzle
#define PARM_NODE_NAME swizzle
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

//////////////////////////////////////////////////////////////////////////
// input
//////////////////////////////////////////////////////////////////////////

// basic

#define NODES_GROUP_NAME Input-Basic

#define PARM_NODE_CLASS Bool
#define PARM_NODE_NAME bool
#include EXE_FILEPATH

#define PARM_NODE_CLASS Constant
#define PARM_NODE_NAME constant
#include EXE_FILEPATH

#define PARM_NODE_CLASS Float
#define PARM_NODE_NAME float1
#include EXE_FILEPATH

#define PARM_NODE_CLASS Float2
#define PARM_NODE_NAME float2
#include EXE_FILEPATH

#define PARM_NODE_CLASS Float3
#define PARM_NODE_NAME float3
#include EXE_FILEPATH

#define PARM_NODE_CLASS Float4
#define PARM_NODE_NAME float4
#include EXE_FILEPATH

#define PARM_NODE_CLASS Int
#define PARM_NODE_NAME int1
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Time
#define PARM_NODE_NAME time
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// geometry

#define NODES_GROUP_NAME Input-Geometry

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS TexCoords
#define PARM_NODE_NAME tex_coords
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS UV
#define PARM_NODE_NAME uv
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// gradient

#define NODES_GROUP_NAME Input-Gradient

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Blackbody
#define PARM_NODE_NAME blackbody
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// texture

#define NODES_GROUP_NAME Input-Texture

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS SampleTexture2D
#define PARM_NODE_NAME sample_texture2d
#include EXE_FILEPATH

//#define PARM_NODE_CLASS Texture2DAsset
//#define PARM_NODE_NAME texture2d_asset
//#include EXE_FILEPATH

#undef NODES_GROUP_NAME

//////////////////////////////////////////////////////////////////////////
// master
//////////////////////////////////////////////////////////////////////////

#define NODES_GROUP_NAME Master

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS PBR
#define PARM_NODE_NAME pbr
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Raymarching
#define PARM_NODE_NAME raymarching
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS SDF
#define PARM_NODE_NAME sdf
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

//////////////////////////////////////////////////////////////////////////
// math
//////////////////////////////////////////////////////////////////////////

#define NODES_GROUP_NAME Math

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Add
#define PARM_NODE_NAME add
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Subtract
#define PARM_NODE_NAME sub
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Multiply
#define PARM_NODE_NAME mul
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Divide
#define PARM_NODE_NAME div
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

//////////////////////////////////////////////////////////////////////////
// procedural
//////////////////////////////////////////////////////////////////////////

// noise

#define NODES_GROUP_NAME Procedural-Noise

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS fBm
#define PARM_NODE_NAME fbm
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS GradientNoise
#define PARM_NODE_NAME gradient_noise
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS SimpleNoise
#define PARM_NODE_NAME simple_noise
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Voronoi
#define PARM_NODE_NAME voronoi
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS WorleyNoise
#define PARM_NODE_NAME worley_noise
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// sdf

#define NODES_GROUP_NAME Procedural-SDF

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS SDF_Primitives
#define PARM_NODE_NAME sdf_primitives
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

#define NODES_GROUP_NAME Procedural-SDF-Primitives

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS SDF_Sphere
#define PARM_NODE_NAME sdf_sphere
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

// shapes

#define NODES_GROUP_NAME Procedural-Shapes

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Checkerboard
#define PARM_NODE_NAME checkerboard
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Ellipse
#define PARM_NODE_NAME ellipse
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Polygon
#define PARM_NODE_NAME polygon
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Rectangle
#define PARM_NODE_NAME rectangle
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS RoundedPolygon
#define PARM_NODE_NAME rounded_polygon
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS RoundedRectangle
#define PARM_NODE_NAME rounded_rectangle
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

//////////////////////////////////////////////////////////////////////////
// utility
//////////////////////////////////////////////////////////////////////////

#define NODES_GROUP_NAME Utility

// Illumination

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Phong
#define PARM_NODE_NAME phong
#include EXE_FILEPATH

// shader

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS FragmentShader
#define PARM_NODE_NAME frag_shader
#include EXE_FILEPATH

// tools

#define PARM_NODE_CLASS Input
#define PARM_NODE_NAME input
#include EXE_FILEPATH

#define PARM_NODE_CLASS Output
#define PARM_NODE_NAME output
#include EXE_FILEPATH

#undef NODES_GROUP_NAME

//////////////////////////////////////////////////////////////////////////
// uv
//////////////////////////////////////////////////////////////////////////

#define NODES_GROUP_NAME UV

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Flipbook
#define PARM_NODE_NAME flipbook
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS PolarCoordinates
#define PARM_NODE_NAME polar_coordinates
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS RadialShear
#define PARM_NODE_NAME radial_shear
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Rotate
#define PARM_NODE_NAME rotate
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS Spherize
#define PARM_NODE_NAME spherize
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define PARM_NODE_CLASS TilingAndOffset
#define PARM_NODE_NAME tiling_and_offset
#include EXE_FILEPATH

#define NO_PARM_FILEPATH
#define ENABLE_PREVIEW
#define PARM_NODE_CLASS Twirl
#define PARM_NODE_NAME twirl
#include EXE_FILEPATH

#undef NODES_GROUP_NAME
