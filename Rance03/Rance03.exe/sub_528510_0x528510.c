// 函数: sub_528510
// 地址: 0x528510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3522
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CBackCGView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CBackCGView::VTable** var_10_1 = arg1
*arg1 = &sealengine::CBackCGView::`vftable'
int32_t var_4 = 5
sub_528630(arg1)
int32_t eax_3 = arg1[0x10]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

var_4.b = 3
sub_4b4d00(&arg1[0xd])
int32_t eax_4 = arg1[0xa]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

int32_t eax_5 = arg1[7]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t* eax_6 = arg1[4]

if (eax_6 != 0)
    sub_4107c0(eax_6, arg1[5])
    j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

int32_t result = arg1[1]

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
