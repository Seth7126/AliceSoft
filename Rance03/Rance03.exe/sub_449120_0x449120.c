// 函数: sub_449120
// 地址: 0x449120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6c08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void*** eax_5 = *(arg1 + 8)
void* result
int32_t edx

if (*sub_4494a0(eax_5, edx, &var_30, *eax_5, eax_5, arg2) == *(arg1 + 8))
    (**arg3)(eax_4)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401ff0(&var_2c, arg2, 0, 0xffffffff)
    int32_t* var_14_1 = arg3
    int32_t var_4 = 0
    int32_t* esi_1 = **(arg1 + 8)
    int32_t* eax_9 = sub_449590(esi_1, esi_1[1], &var_2c)
    int32_t eax_10 = *(arg1 + 0xc)
    
    if (0x71c71c6 - eax_10 u< 1)
        sub_69a551("list<T> too long")
        noreturn
    
    *(arg1 + 0xc) = eax_10 + 1
    esi_1[1] = eax_9
    int32_t var_4_1 = 0xffffffff
    *eax_9[1] = eax_9
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t eax_15
    int32_t edx_2
    edx_2:eax_15 = sx.q((*(*arg3 + 0x20))())
    int32_t eax_17
    int32_t edx_4
    edx_4:eax_17 = sx.q((*(*arg3 + 0x1c))())
    int32_t eax_22 = (*(*arg3 + 0x14))() * ((eax_15 ^ edx_2) - edx_2 + (eax_17 ^ edx_4) - edx_4)
    *(arg1 + 0x10) += eax_22
    
    if (*(arg1 + 0x10) u> *(arg1 + 0x14))
        while (*(arg1 + 0xc) u> 1)
            int32_t* edi_1 = *(*(*(arg1 + 8) + 4) + 0x20)
            int32_t eax_27
            int32_t edx_5
            edx_5:eax_27 = sx.q((*(*edi_1 + 0x20))())
            int32_t eax_29
            int32_t edx_7
            edx_7:eax_29 = sx.q((*(*edi_1 + 0x1c))())
            int32_t eax_34 =
                (*(*edi_1 + 0x14))() * ((eax_27 ^ edx_5) - edx_5 + (eax_29 ^ edx_7) - edx_7)
            *(arg1 + 0x10) -= eax_34
            (*(**(*(*(arg1 + 8) + 4) + 0x20) + 4))()
            int32_t* esi_11 = *(*(arg1 + 8) + 4)
            *esi_11[1] = *esi_11
            *(*esi_11 + 4) = esi_11[1]
            *(arg1 + 0xc) -= 1
            
            if (esi_11[7] u>= 0x10)
                j__free(esi_11[2])
            
            esi_11[7] = 0xf
            esi_11[6] = 0
            esi_11[2].b = 0
            j__free(esi_11)
            
            if (*(arg1 + 0x10) u<= *(arg1 + 0x14))
                break
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
