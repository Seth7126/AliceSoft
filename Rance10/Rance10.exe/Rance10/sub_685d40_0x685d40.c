// 函数: sub_685d40
// 地址: 0x685d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747052
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IGraphEngine>::graphengined3d11::CGraphEngine::VTable** 
    var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
*arg1 =
    &graphengined3d11::CGraphEngine::`vftable'{for `common::SuicideRefCounter<class IGraphEngine>'}
arg1[2] = &common::CSize::`vftable'
arg1[3] = *(arg2 + 4)
arg1[4] = *(arg2 + 8)
int32_t var_8_1 = 0
arg1[5] = &common::CSize::`vftable'
arg1[6] = *(arg3 + 4)
arg1[7] = *(arg3 + 8)
var_8_1.b = 1
arg1[9] = arg4
arg1[8].b = 0
arg1[0xa] = arg5
sub_684d50(&arg1[0xb])
arg2 = &arg1[0x1f]
arg1[0x1f] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CVertexBuffer, class IVertexBuffer>::`vftable'
__builtin_memset(&arg1[0x20], 0, 0x14)
var_8_1.b = 3
arg3 = &arg1[0x23]
arg1[0x23] = sub_4f2cd0()
arg2 = &arg1[0x25]
arg1[0x25] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CIndexBuffer, class IIndexBuffer>::`vftable'
__builtin_memset(&arg1[0x26], 0, 0x14)
var_8_1.b = 5
arg3 = &arg1[0x29]
arg1[0x29] = sub_4f2cd0()
arg2 = &arg1[0x2b]
arg1[0x2b] = &
    graphengine::CGraphicsObjectManager<class graphengined3d11::CTexture, class ITexture>::`vftable'
__builtin_memset(&arg1[0x2c], 0, 0x14)
var_8_1.b = 7
arg3 = &arg1[0x2f]
arg1[0x2f] = sub_4f2cd0()
arg2 = &arg1[0x31]
arg1[0x31] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CRenderTarget, class IRenderTexture>::`vftable'
__builtin_memset(&arg1[0x32], 0, 0x14)
var_8_1.b = 9
arg3 = &arg1[0x35]
arg1[0x35] = sub_4f2cd0()
arg2 = &arg1[0x37]
arg1[0x37] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CViewport, class IViewport>::`vftable'
__builtin_memset(&arg1[0x38], 0, 0x14)
var_8_1.b = 0xb
arg3 = &arg1[0x3b]
arg1[0x3b] = sub_4f2cd0()
arg2 = &arg1[0x3d]
arg1[0x3d] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CVertexShader, class IInterface>::`vftable'
__builtin_memset(&arg1[0x3e], 0, 0x14)
var_8_1.b = 0xd
arg3 = &arg1[0x41]
arg1[0x41] = sub_4f2cd0()
arg2 = &arg1[0x43]
arg1[0x43] = &graphengine::CGraphicsObjectManager<class graphengined3d11::CPixelShader, class IInterface>::`vftable'
__builtin_memset(&arg1[0x44], 0, 0x14)
var_8_1.b = 0xf
arg3 = &arg1[0x47]
arg1[0x47] = sub_4f2cd0()
var_8_1.b = 0x10
arg2 = &arg1[0x49]
arg3 = &arg1[0x4a]
arg1[0x49] = &graphengine::CTextureManager::`vftable'
arg1[0x4a] = 0
arg1[0x4b] = 0
arg1[0x4a] = sub_42e780()
var_8_1.b = 0x11
arg1[0x4c] = 0
arg3 = &arg1[0x4d]
arg1[0x4d] = 0
arg1[0x4e] = 0
arg1[0x4d] = sub_4f2cd0()
arg1[0x4f] = &graphengine::CSpecularTableTexture::`vftable'
arg1[0x50] = 0
arg1[0x51] = 0
arg1[0x52] = 0x42000000
var_8_1.b = 0x13
__builtin_memset(&arg1[0x53], 0, 0x28)
sub_6922c0(&arg1[0x5d])
var_8_1.b = 0x14
sub_6939f0(&arg1[0x7b])
arg1[0x99] = 0
arg1[0x9a] = &graphengined3d11::CBlendStateManager::`vftable'
__builtin_memset(&arg1[0x9b], 0, 0x1c)
arg1[0xa2] = &graphengined3d11::CSamplerStateManager::`vftable'
__builtin_memset(&arg1[0xa3], 0, 0x24)
arg1[0xb0] = arg6
int32_t eax_18
eax_18.b = arg7
arg1[0xac].w = 0
*(arg1 + 0x2b2) = 1
arg1[0xad] = 0
arg1[0xae].b = 0
arg1[0xaf] = 0
arg1[0xb1] = 0
arg1[0xb2] = 0
arg1[0xb3] = 0
arg1[0xb4].b = eax_18.b
*(arg1 + 0x2d1) = 0
*(arg1 + 0x164) = zx.o(0)
arg1[0x4c] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
