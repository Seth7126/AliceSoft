// 函数: sub_4e1910
// 地址: 0x4e1910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result
result.b = *(arg2 + 0xa8)

if (result.b != 0)
    int32_t esi_1 = *(arg1[0x87] + 0xa4)
    int32_t ebx_1 = (*(*arg1 + 0x24))(1)
    int32_t ebx_2
    
    if (esi_1 - 1 u> 8)
        ebx_2 = 0
    else
        switch (esi_1 + &jump_table_4e1af4[2]:3)
            case &lookup_table_4e1b00, &lookup_table_4e1b00[3], &lookup_table_4e1b00[6]
                ebx_2 = 0
            case &lookup_table_4e1b00[1], &lookup_table_4e1b00[4], &lookup_table_4e1b00[7]
                int32_t eax_8
                int32_t edx_1
                edx_1:eax_8 = sx.q(ebx_1)
                ebx_2 = neg.d((eax_8 - edx_1) s>> 1)
            case &lookup_table_4e1b00[2], &lookup_table_4e1b00[5], &lookup_table_4e1b00[8]
                ebx_2 = neg.d(ebx_1)
    
    int32_t esi_3 = *(arg1[0x87] + 0xa4)
    int32_t ecx_1 = (*(*arg1 + 0x28))(1)
    int32_t ecx_2
    
    if (esi_3 - 1 u> 8)
        ecx_2 = 0
    else
        switch (esi_3 + &jump_table_4e1b0c[2]:3)
            case &lookup_table_4e1b18, &lookup_table_4e1b18[1], &lookup_table_4e1b18[2]
                ecx_2 = 0
            case &lookup_table_4e1b18[3], &lookup_table_4e1b18[4], &lookup_table_4e1b18[5]
                int32_t eax_16
                int32_t edx_2
                edx_2:eax_16 = sx.q(ecx_1)
                ecx_2 = neg.d((eax_16 - edx_2) s>> 1)
            case &lookup_table_4e1b18[6], &lookup_table_4e1b18[7], &lookup_table_4e1b18[8]
                ecx_2 = neg.d(ecx_1)
    
    void* eax_19 = arg1[0x28]
    int32_t ecx_3 = arg1[0x87]
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx_2))
    int32_t xmm1_2 = _mm_cvtepi32_ps(zx.o(ebx_2))
    *(eax_19 + 0x94) = xmm0_2
    *(eax_19 + 0x90) = xmm1_2
    void* var_2c
    char* eax_20 = sub_4ee1f0(ecx_3, &var_2c, 2)
    int32_t var_8_1 = 0
    char* ecx_5 = arg1[0x28] + 0x1e8
    
    if (ecx_5 != eax_20)
        sub_403590(ecx_5, eax_20, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    void* var_44
    char* eax_23 = sub_4ee1f0(arg1[0x87], &var_44, 3)
    int32_t var_8_3 = 1
    char* ecx_8 = arg1[0x28] + 0x200
    
    if (ecx_8 != eax_23)
        sub_403590(ecx_8, eax_23, 0, 0xffffffff)
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    *(arg1[0x28] + 0x1a8) = 1
    *(arg1[0x28] + 0x1b5) = *(arg1[0x87] + 0x1b5)
    *(arg1[0x28] + 0x1a9) = *(arg1[0x87] + 0x1a9)
    result = *(arg1[0x87] + 0x1ac)
    *(arg1[0x28] + 0x1ac) = result

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
