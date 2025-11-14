// 函数: sub_64c660
// 地址: 0x64c660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce930
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** var_10_1 = arg1
*arg1 = &dplogviewer::CLogWnd::`vftable'{for `dplogviewer::CTextChildWnd'}
int32_t var_4 = 4

if (arg1[0x3e].b != 0)
    void* eax_3 = &arg1[0x3f]
    
    if (arg1[0x44] u>= 0x10)
        eax_3 = *eax_3
    
    sub_64ce90(arg1, eax_3, 0)

if (arg1[0x44] u>= 0x10)
    j__free(arg1[0x3f])

arg1[0x44] = 0xf
arg1[0x43] = 0
arg1[0x3f].b = 0

if (arg1[0x3d] u>= 0x10)
    j__free(arg1[0x38])

arg1[0x3d] = 0xf
arg1[0x3c] = 0
arg1[0x38].b = 0

if (arg1[0x37] u>= 0x10)
    j__free(arg1[0x32])

arg1[0x37] = 0xf
arg1[0x36] = 0
arg1[0x32].b = 0
int32_t* eax_4 = arg1[0x2e]

if (eax_4 != 0)
    sub_4107c0(eax_4, arg1[0x2f])
    j__free(arg1[0x2e])
    arg1[0x2e] = 0
    arg1[0x2f] = 0
    arg1[0x30] = 0

int32_t var_4_1 = 0xffffffff
BOOL result = sub_650650(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
