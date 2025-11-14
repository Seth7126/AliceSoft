// 函数: sub_58a3f0
// 地址: 0x58a3f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7a8d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CReignView::VTable** var_14 = arg1
*arg1 = &sealengine::CReignView::`vftable'
int32_t var_4 = 0xa
sub_58a690(arg1)
arg1[0x146] = &sealengine::CSurfaceTextureManager::`vftable'
void* var_10 = &arg1[0x146]
var_4.b = 0xc
sub_59c810(&arg1[0x146])
var_4.b = 0xb
int32_t* ecx_1 = arg1[0x14a]
arg1[0x149] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    (**ecx_1)(1)

int32_t** eax_4 = arg1[0x147]
sub_4200d0(&arg1[0x147], &var_10, *eax_4, eax_4)
j__free(arg1[0x147])
var_4.b = 8
int32_t* ecx_3 = arg1[0x13f]
arg1[0x13e] = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    arg1[0x13f] = 0

arg1[0x140] = 0
var_4.b = 7
sub_528510(&arg1[0x126])
var_4.b = 6
sub_59be30(&arg1[0xf5])
var_4.b = 5
int32_t* ecx_6 = arg1[0xee]
arg1[0xed] = &sealengine::CRenderTarget::`vftable'

if (ecx_6 != 0)
    (*(*ecx_6 + 4))(eax_2)
    arg1[0xee] = 0

arg1[0xef] = 0
arg1[0xf0] = 0
arg1[0xf1].b = 0
arg1[0xf2] = 0
arg1[0xf3].b = 0
var_4.b = 4
sub_534060(&arg1[0xc2])
var_4.b = 3
int32_t* ecx_8 = arg1[0xbc]
arg1[0xbb] = &sealengine::CRenderTarget::`vftable'

if (ecx_8 != 0)
    (*(*ecx_8 + 4))(eax_2)
    arg1[0xbc] = 0

arg1[0xbd] = 0
arg1[0xbe] = 0
arg1[0xbf].b = 0
arg1[0xc0] = 0
arg1[0xc1].b = 0
var_4.b = 2
arg1[0x90] = &sealengine::CSphereVolumeList::`vftable'
sub_52e850(&arg1[0x91])
var_4.b = 1
sub_59b3d0(&arg1[0x56])
var_4.b = 0
sub_547030(&arg1[0x4c])
int32_t var_4_1 = 0xffffffff
int32_t result = sub_58c600(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
