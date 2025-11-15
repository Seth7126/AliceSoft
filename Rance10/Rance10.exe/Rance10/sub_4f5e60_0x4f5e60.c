// 函数: sub_4f5e60
// 地址: 0x4f5e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73644e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 == arg1[1])
    int32_t eax_3
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct commonsystemdata::CZlibCompressor::VTable* const var_1c =
    &commonsystemdata::CZlibCompressor::`vftable'
int32_t var_18 = 0
int32_t var_8_1 = 0
int64_t* ebx = sub_6cc630(0x765624)
int64_t* var_18_1 = ebx
char arg_b
int64_t* eax_4

if (ebx == 0)
    arg_b = 0
else
    int32_t ecx_3 = *arg1
    int32_t esi_2 = arg1[1] - ecx_3
    eax_4 = (*(*ebx + 8))(ecx_3, esi_2)
    
    if (eax_4 == 0)
        arg_b = 0
    else
        int32_t* eax_7 = (*(*eax_4 + 0x14))(eax_2) & 0x80000003
        bool cond:0_1 = eax_7 == 0
        
        if (eax_7 s< 0)
            void* eax_9 = (eax_7 - 1) | 0xfffffffc
            eax_7 = eax_9 + 1
            cond:0_1 = eax_9 == 0xffffffff
        
        if (not(cond:0_1))
            int32_t esi_3 = *eax_4
            (*(esi_3 + 0xc))((*(esi_3 + 0x14))() + 4 - eax_7)
        
        int32_t eax_14
        int32_t edx_2
        edx_2:eax_14 = sx.q((*(*eax_4 + 0x14))())
        
        if ((*(*arg2 + 0x40))((((edx_2 & 3) + eax_14) s>> 2) + 1) != 0)
            bool cond:1_1 = (*(*arg2 + 0x2c))(0, esi_2) == 0
            int32_t eax_18 = *eax_4
            
            if (cond:1_1)
                (*(eax_18 + 4))()
                arg_b = 0
            else
                sub_700660((*(*arg2 + 0xc))(1, (*(*eax_4 + 0x18))((*(eax_18 + 0x14))())))
                (*(*eax_4 + 4))()
                arg_b = 1
        else
            (*(*eax_4 + 4))()
            arg_b = 0

int32_t var_8_2 = 1

if (ebx != 0)
    (*(*ebx + 4))(eax_2)

eax_4.b = arg_b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
