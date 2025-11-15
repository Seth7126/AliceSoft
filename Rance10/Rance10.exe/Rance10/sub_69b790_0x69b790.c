// 函数: sub_69b790
// 地址: 0x69b790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg1[0x1c] != 0
*arg1 = &std::_Task_async_state<bool, 1>::`vftable'{for `std::_Packaged_state<bool __cdecl ()>'}

if (not(cond:0))
    void* ecx = arg1[0x2a]
    
    if (ecx == 0)
        sub_697bc0()
        noreturn
    
    sub_698340(ecx)

int32_t var_8_1 = 0
int32_t* edi = arg1[0x2b]

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

void* result = sub_69bb80(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
