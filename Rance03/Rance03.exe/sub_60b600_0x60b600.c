// 函数: sub_60b600
// 地址: 0x60b600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd17c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IGraphEngine::graphengined3d11::CGraphEngine::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IGraphEngine::graphengined3d11::CGraphEngine::VTable** var_10_1 = arg1
arg1[3] = arg3
arg1[5] = arg3
arg1[6] = arg4
arg1[7] = arg5
arg1[9] = arg6
*arg1 = &graphengined3d11::CGraphEngine::`vftable'{for `IGraphEngine'}
arg1[1] = 1
arg1[2] = arg2
arg1[4] = arg2
arg1[8].b = 0
arg1[0xa] = arg7
sub_60a870(&arg1[0xb])
int32_t var_4 = 0
arg1[0x1b] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CVertexBuffer, class IVertexBuffer>::`vftable'
arg2 = &arg1[0x1b]
__builtin_memset(&arg1[0x1c], 0, 0x14)
var_4.b = 1
arg1[0x1f] = sub_4a6eb0()
arg1[0x21] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CIndexBuffer, class IIndexBuffer>::`vftable'
arg2 = &arg1[0x21]
__builtin_memset(&arg1[0x22], 0, 0x14)
var_4.b = 3
arg1[0x25] = sub_4a6eb0()
arg1[0x27] = &
    graphengine::CGraphicsObjectManager<class graphengined3d11::CTexture, class ITexture>::`vftable'
arg2 = &arg1[0x27]
__builtin_memset(&arg1[0x28], 0, 0x14)
var_4.b = 5
arg1[0x2b] = sub_4a6eb0()
arg1[0x2d] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CRenderTarget, class IRenderTexture>::`vftable'
arg2 = &arg1[0x2d]
__builtin_memset(&arg1[0x2e], 0, 0x14)
var_4.b = 7
arg1[0x31] = sub_4a6eb0()
arg1[0x33] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CViewport, class IViewport>::`vftable'
arg2 = &arg1[0x33]
__builtin_memset(&arg1[0x34], 0, 0x14)
var_4.b = 9
arg1[0x37] = sub_4a6eb0()
arg1[0x39] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CVertexShader, class IInterface>::`vftable'
arg2 = &arg1[0x39]
__builtin_memset(&arg1[0x3a], 0, 0x14)
var_4.b = 0xb
arg1[0x3d] = sub_4a6eb0()
arg1[0x3f] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CPixelShader, class IInterface>::`vftable'
arg2 = &arg1[0x3f]
__builtin_memset(&arg1[0x40], 0, 0x14)
var_4.b = 0xd
arg1[0x43] = sub_4a6eb0()
var_4.b = 0xe
arg1[0x45] = &graphengine::CTextureManager::`vftable'
arg2 = &arg1[0x45]
arg1[0x46] = 0
arg1[0x47] = 0
arg1[0x46] = sub_4203c0()
var_4.b = 0xf
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x49] = sub_4a6eb0()
arg1[0x4b] = &graphengine::CSpecularTableTexture::`vftable'
arg1[0x4c] = 0
arg1[0x4d] = 0
arg1[0x4e] = 0x42000000
var_4.b = 0x11
__builtin_memset(&arg1[0x4f], 0, 0x1c)
sub_6184d0(&arg1[0x56])
var_4.b = 0x12
sub_619cd0(&arg1[0x6e])
arg1[0x86] = 0
arg1[0x87] = &graphengined3d11::CBlendStateManager::`vftable'
__builtin_memset(&arg1[0x88], 0, 0x1c)
arg1[0x8f] = &graphengined3d11::CSamplerStateManager::`vftable'
__builtin_memset(&arg1[0x90], 0, 0x24)
arg1[0x9d] = arg8
int32_t eax_17
eax_17.b = arg9
arg1[0x99].w = 0
*(arg1 + 0x266) = 1
arg1[0x9a] = 0
arg1[0x9b].b = 0
arg1[0x9c] = 0
arg1[0x9e] = 0
arg1[0x9f] = 0
arg1[0xa0] = 0
arg1[0xa1].b = eax_17.b
*(arg1 + 0x285) = 0
arg1[0x48] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
