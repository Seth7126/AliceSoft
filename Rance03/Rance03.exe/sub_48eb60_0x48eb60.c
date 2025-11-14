// 函数: sub_48eb60
// 地址: 0x48eb60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatKeyDataSound::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[2] = 4
sub_402110(&arg1[3], 0x6dfb58, 0x14)
sub_402110(&arg1[9], 0x6da206, nullptr)
arg1[0xf] = 0
arg1[0x10] = 1
struct IInterface::partsengine::CFlatKeyDataSound::VTable** esi = sub_69adc6(0x20)
var_10 = esi
int32_t var_4 = 0

if (esi == 0)
    esi = nullptr
else
    *esi = &partsengine::CFlatKeyDataSound::`vftable'{for `IInterface'}
    esi[1] = 1
    esi[7] = 0xf
    esi[6] = 0
    esi[2].b = 0
    sub_402110(&esi[2], 0x6da21a, nullptr)

int32_t var_4_1 = 0xffffffff
var_10 = nullptr
*sub_42f350(&arg1[0x14], &var_10) = esi
void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
