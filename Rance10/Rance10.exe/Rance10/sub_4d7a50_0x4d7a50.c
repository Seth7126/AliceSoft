// 函数: sub_4d7a50
// 地址: 0x4d7a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73447f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 8) = 4
sub_403490(arg1 + 0xc, 0x764670, 0x14)
sub_403490(arg1 + 0x24, 0x75d067, nullptr)
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 1
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataSound::VTable** 
    eax_3 = sub_6e810c(0x20)
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataSound::VTable** 
    var_14 = eax_3
int32_t var_8_1 = 0
eax_3[1] = 1
*eax_3 =
    &partsengine::CFlatKeyDataSound::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
eax_3[7] = 0xf
eax_3[6] = 0
int32_t* eax_4

if (eax_3[7] u< 0x10)
    eax_4 = &eax_3[2]
else
    eax_4 = eax_3[2]

*eax_4 = 0
sub_403490(&eax_3[2], 0x75d08e, nullptr)
int32_t var_8_2 = 0xffffffff
var_14 = nullptr
void* var_1c
sub_42ebc0(arg1 + 0x50, &var_1c, &var_14)
*(var_1c + 0x14) = eax_3
void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
