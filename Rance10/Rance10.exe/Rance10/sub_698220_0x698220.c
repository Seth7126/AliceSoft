// 函数: sub_698220
// 地址: 0x698220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c16c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct Concurrency::details::_Task_impl_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0x12]
*arg1 = &Concurrency::details::_Task_impl_base::`vftable'

if (ecx != 2)
    int32_t eax_3 = ecx[1]
    ecx[1] -= 1
    
    if (eax_3 == 1)
        (*(*ecx + 4))(eax_2)

void* ecx_1 = arg1[0x2f]

if (ecx_1 != 0)
    sub_403160(ecx_1, (arg1[0x31] - ecx_1) s>> 2, 4)
    arg1[0x2f] = 0
    arg1[0x30] = 0
    arg1[0x31] = 0

int32_t var_8_1 = 0
int32_t* ebx = arg1[0x2b]

if (ebx != 0)
    bool cond:0_1 = ebx[1] != 1
    ebx[1]
    ebx[1] -= 1
    
    if (not(cond:0_1))
        (**ebx)(eax_2)
        bool cond:2_1 = ebx[2] != 1
        ebx[2]
        ebx[2] -= 1
        
        if (not(cond:2_1))
            (*(*ebx + 4))()

__Mtx_destroy_in_situ(&arg1[0x1e])
__Cnd_destroy_in_situ(&arg1[0x14])
int32_t result = __Mtx_destroy_in_situ(&arg1[5])
int32_t var_8_2 = 1
int32_t* esi_1 = arg1[4]

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    result = esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        result = (**esi_1)(eax_2)
        int32_t edi_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (edi_1 == 1)
            result = (*(*esi_1 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
