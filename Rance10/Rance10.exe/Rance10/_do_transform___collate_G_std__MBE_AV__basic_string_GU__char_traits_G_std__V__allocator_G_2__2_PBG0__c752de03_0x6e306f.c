// 函数: ?do_transform@?$collate@G@std@@MBE?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PBG0@Z
// 地址: 0x6e306f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 4
int32_t (* var_c)(void* arg1) =
    __ehhandler$?GetBitSet@SchedulerBase@details@Concurrency@@QAE?AVQuickBitSet@23@PBVlocation@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6e307b
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
arg2[5] = 7
bool cond:0 = arg2[5] u< 8
arg2[4] = 0
int16_t* eax

if (cond:0)
    eax = arg2
else
    eax = *arg2

*eax = 0
int32_t i = (arg4 - arg3) s>> 1
int32_t var_8 = 0
int32_t var_14_1 = 1

while (i != 0)
    sub_6e3529(arg2, i, 0)
    int32_t* eax_3
    
    if (arg2[5] u< 8)
        eax_3 = arg2
    else
        eax_3 = *arg2
    
    int32_t* ecx_1
    
    if (arg2[5] u< 8)
        ecx_1 = arg2
    else
        ecx_1 = *arg2
    
    int32_t var_28 = arg1 + 8
    i = std::_LStrxfrm<uint16_t>(ecx_1, eax_3 + (arg2[4] << 1), arg3, arg4)
    
    if (i u<= arg2[4])
        break

sub_6e3529(arg2, i, 0)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e3106
return arg2
