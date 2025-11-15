// 函数: sub_69bb80
// 地址: 0x69bb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = arg1[0x29]

if (ecx != 0)
    (*(*ecx + 0x10))(ecx != &arg1[0x20])
    arg1[0x29] = 0

int32_t var_8_2 = 0xffffffff
bool cond:0 = *(arg1 + 0x75) == 0
*arg1 = &std::_Associated_state<bool>::`vftable'

if (not(cond:0) && arg1[0x1c] == 0)
    __Cnd_unregister_at_thread_exit(&arg1[5])

__Cnd_destroy_in_situ(&arg1[0x11])
__Mtx_destroy_in_situ(&arg1[5])
void* result = __ExceptionPtrDestroy(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
