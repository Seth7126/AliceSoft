// 函数: sub_464fa0
// 地址: 0x464fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8e02
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_464f30(arg1)
int32_t* ecx = arg2
int32_t esi = 0
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x38e38e39, ecx[1] - *ecx)
int32_t edx_3 = edx_2 s>> 3
int32_t ebp_2 = (edx_3 u>> 0x1f) + edx_3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebp_2 s> 0)
    int32_t edi_1 = 0
    
    do
        if (sub_465240(arg1, *ecx + edi_1).b == 0)
            result.b = 0
            goto label_46521d
        
        ecx = arg2
        esi += 1
        edi_1 += 0x24
    while (esi s< ebp_2)

while (*(arg1 + 0x10) != *(arg1 + 0x14))
    int32_t edi_2 = *(arg1 + 8)
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x38e38e39, *(arg1 + 0x14) - *(arg1 + 0x10))
    int32_t edx_5 = edx_4 s>> 3
    void* ebp_5 = *(arg1 + 0x10) + ((((edx_5 u>> 0x1f) + edx_5) * 9 - 9) << 2)
    int32_t eax_11
    
    if (ebp_5 u< edi_2)
        eax_11 = *(arg1 + 4)
    
    int32_t* edi_8
    
    if (ebp_5 u>= edi_2 || eax_11 u> ebp_5)
        int32_t eax_23 = *(arg1 + 0xc)
        
        if (edi_2 == eax_23 && (eax_23 - edi_2) s/ 0x24 u< 1)
            int32_t eax_28
            int32_t edx_20
            edx_20:eax_28 = muls.dp.d(0x38e38e39, edi_2 - *(arg1 + 4))
            int32_t edx_21 = edx_20 s>> 3
            int32_t ecx_18 = (edx_21 u>> 0x1f) + edx_21
            
            if (0x71c71c7 - ecx_18 u< 1)
                sub_69a551("vector<T> too long")
                noreturn
            
            int32_t eax_30
            int32_t edx_22
            edx_22:eax_30 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - *(arg1 + 4))
            int32_t edx_23 = edx_22 s>> 3
            int32_t ecx_23 = (edx_23 u>> 0x1f) + edx_23
            uint32_t edx_25 = ecx_23 u>> 1
            int32_t ecx_24
            
            if (0x71c71c7 - edx_25 u>= ecx_23)
                ecx_24 = ecx_23 + edx_25
            else
                ecx_24 = 0
            
            if (ecx_24 u< ecx_18 + 1)
                ecx_24 = ecx_18 + 1
            
            sub_45d5a0(arg1 + 4, ecx_24)
        
        edi_8 = *(arg1 + 8)
        arg2 = edi_8
        int32_t* var_10_2 = edi_8
        int32_t var_4_1 = 1
    else
        int32_t eax_13 = *(arg1 + 0xc)
        
        if (edi_2 == eax_13 && (eax_13 - edi_2) s/ 0x24 u< 1)
            int32_t ecx_6 = *(arg1 + 4)
            int32_t edi_6 = (edi_2 - ecx_6) s/ 0x24
            
            if (0x71c71c7 - edi_6 u< 1)
                sub_69a551("vector<T> too long")
                noreturn
            
            int32_t eax_20
            int32_t edx_14
            edx_14:eax_20 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - ecx_6)
            int32_t edx_15 = edx_14 s>> 3
            int32_t ecx_9 = (edx_15 u>> 0x1f) + edx_15
            uint32_t edx_17 = ecx_9 u>> 1
            int32_t ecx_10
            
            if (0x71c71c7 - edx_17 u>= ecx_9)
                ecx_10 = ecx_9 + edx_17
            else
                ecx_10 = 0
            
            if (ecx_10 u< edi_6 + 1)
                ecx_10 = edi_6 + 1
            
            sub_45d5a0(arg1 + 4, ecx_10)
        
        edi_8 = *(arg1 + 8)
        arg2 = edi_8
        int32_t* var_10_1 = edi_8
        ebp_5 = *(arg1 + 4) + (ebp_5 - eax_11) s/ 0x24 * 0x24
        int32_t var_4 = 0
    
    if (edi_8 != 0)
        *edi_8 = &exfile::CToken::`vftable'
        edi_8[6] = 0xf
        edi_8[5] = 0
        edi_8[1].b = 0
        sub_401ff0(&edi_8[1], ebp_5 + 4, 0, 0xffffffff)
        edi_8[7] = *(ebp_5 + 0x1c)
        edi_8[8] = *(ebp_5 + 0x20)
    
    int32_t var_4_2 = 0xffffffff
    *(arg1 + 8) += 0x24
    (**(*(arg1 + 0x14) - 0x24))(0)
    *(arg1 + 0x14) -= 0x24

*(arg1 + 0x20) = 1
result.b = 1
label_46521d:
fsbase->NtTib.ExceptionList = ExceptionList
return result
