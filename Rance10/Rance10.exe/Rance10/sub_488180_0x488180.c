// 函数: sub_488180
// 地址: 0x488180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSoundChannel::VTable** esi = nullptr

if (*(arg1 + 0x7c) != 0)
    EnterCriticalSection(*(arg1 + 0x90) + 4)
    int32_t var_48_2 = arg2
    struct kiwi::CMultiChannelSet::VTable** eax_7 = sub_47fb60(arg1 + 0x78)
    
    if (eax_7 != 0)
        esi = sub_481520(eax_7, arg3, &eax_7[4])
    
    LeaveCriticalSection(*(arg1 + 0x90) + 4)

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75ce9e, nullptr)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
void* ebx
ebx.b = sub_488300(arg1, esi, arg3, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t result

if (ebx.b == 0)
    result = (*(esi[1]->vFunc_0 + 0x10))(eax_2)
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
