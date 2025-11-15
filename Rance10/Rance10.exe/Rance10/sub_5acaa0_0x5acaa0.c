// 函数: sub_5acaa0
// 地址: 0x5acaa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24 = arg1
int32_t* var_28 = arg1
int32_t ecx_1 = sub_568960(arg1[0x13c], arg1[0x13d])
arg1[0x13d] = arg1[0x13c]
int32_t* var_24_1 = arg1
int32_t var_28_1 = ecx_1
Concurrency::details::Etw::Etw(arg1[0x139], arg1[0x13a])
arg1[0x13a] = arg1[0x139]
arg1[0x13f] = 0xffffffff
sub_57c210(&arg1[0x15a])
int32_t* edi = arg1[0x159]
arg1[0x159] = 0

if (edi != 0)
    sub_586a00(edi)
    int32_t var_24_2 = 0x24
    operator new(edi)

int32_t* ecx_5 = arg1[0x157]
arg1[0x157] = 0

if (ecx_5 != 0)
    int32_t var_8_1 = 0
    (*(*ecx_5 + 0x1c))(1)

int32_t result = sub_5acbb0(arg1)
arg1[0xff] = 0xffffffff
arg1[0x100] = 0xffffffff
arg1[0x11c] = 0
arg1[0xd4].b = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
