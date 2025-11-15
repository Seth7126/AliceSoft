// 函数: sub_69bc30
// 地址: 0x69bc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74879c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::_Packaged_state<bool __cdecl ()>::std::_Task_async_state<bool, 0>::VTable** result =
    arg1
int32_t var_8_1 = 0
bool cond:0 = result[0x1c] != 0
*result = &std::_Task_async_state<bool, 0>::`vftable'{for `std::_Packaged_state<bool __cdecl ()>'}

if (not(cond:0))
    sub_69ad60(arg1)

var_8_1.b = 1
int32_t* edi = result[0x2b]

if (edi != 0)
    bool cond:1_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:1_1))
        (**edi)(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 4))()

sub_69bb80(result)

if ((arg2 & 1) != 0)
    int32_t var_24_1 = 0xb0
    operator new(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
