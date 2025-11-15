// 函数: sub_698c50
// 地址: 0x698c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d3b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 0x20)

if (ecx != 0)
    result = sub_403160(ecx, (*(arg1 + 0x28) - ecx) s>> 2, 4)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

int32_t var_8_1 = 0
int32_t var_8_2 = 1
int32_t* ecx_2 = *(arg1 + 0xc)

if (ecx_2 != 0)
    int32_t eax_6 = ecx_2[1]
    ecx_2[1] -= 1
    result = eax_6 - 1
    
    if (eax_6 == 1)
        result = (*(*ecx_2 + 4))(eax_2)

*(arg1 + 0xc) = 0
int32_t var_8_3 = 2
int32_t* esi_1 = *(arg1 + 4)

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    result = esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        result = (**esi_1)(eax_2)
        int32_t edi_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (edi_1 == 1)
            result = (*(*esi_1 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
