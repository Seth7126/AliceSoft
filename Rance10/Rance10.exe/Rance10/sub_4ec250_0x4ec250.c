// 函数: sub_4ec250
// 地址: 0x4ec250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735a30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result
result.b = *(arg2 + 0xa8)

if (result.b != 0)
    int32_t esi_1 = *(arg1[0x76] + 0xa4)
    int32_t ebx_1 = (*(*arg1 + 0x24))(1)
    int32_t ebx_2
    
    if (esi_1 - 1 u> 8)
        ebx_2 = 0
    else
        switch (esi_1 + &jump_table_4ec6b0[2]:3)
            case &lookup_table_4ec6bc, &lookup_table_4ec6bc[3], &lookup_table_4ec6bc[6]
                ebx_2 = 0
            case &lookup_table_4ec6bc[1], &lookup_table_4ec6bc[4], &lookup_table_4ec6bc[7]
                int32_t eax_8
                int32_t edx_1
                edx_1:eax_8 = sx.q(ebx_1)
                ebx_2 = neg.d((eax_8 - edx_1) s>> 1)
            case &lookup_table_4ec6bc[2], &lookup_table_4ec6bc[5], &lookup_table_4ec6bc[8]
                ebx_2 = neg.d(ebx_1)
    
    int32_t esi_3 = *(arg1[0x76] + 0xa4)
    int32_t ecx_1 = (*(*arg1 + 0x28))(1)
    int32_t ecx_2
    
    if (esi_3 - 1 u> 8)
        ecx_2 = 0
    else
        switch (esi_3 + &jump_table_4ec6c8[2]:3)
            case &lookup_table_4ec6d4, &lookup_table_4ec6d4[1], &lookup_table_4ec6d4[2]
                ecx_2 = 0
            case &lookup_table_4ec6d4[3], &lookup_table_4ec6d4[4], &lookup_table_4ec6d4[5]
                int32_t eax_16
                int32_t edx_2
                edx_2:eax_16 = sx.q(ecx_1)
                ecx_2 = neg.d((eax_16 - edx_2) s>> 1)
            case &lookup_table_4ec6d4[6], &lookup_table_4ec6d4[7], &lookup_table_4ec6d4[8]
                ecx_2 = neg.d(ecx_1)
    
    int32_t eax_19 = arg1[0x41]
    int32_t esi_5 = arg1[0x42]
    int32_t ecx_3 = arg1[0x40]
    int32_t eax_21
    int32_t edx_3
    edx_3:eax_21 = sx.q(ecx_3)
    int32_t eax_23 = (eax_21 - edx_3) s>> 1
    int32_t var_58 = eax_23
    int32_t var_54
    int32_t* ecx_4 = &var_54
    var_54 = esi_5
    int32_t esi_6 = arg1[0x43]
    int32_t var_4c
    int32_t* eax_24 = &var_4c
    
    if (esi_5 s>= eax_23)
        ecx_4 = &var_58
    
    var_4c = 0
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx_2))
    
    if (*ecx_4 s> 0)
        eax_24 = ecx_4
    
    int32_t* ecx_5 = &var_4c
    int32_t eax_25 = *eax_24
    int32_t eax_27
    int32_t edx_4
    edx_4:eax_27 = sx.q(eax_19)
    var_4c = esi_6
    int32_t eax_29 = (eax_27 - edx_4) s>> 1
    var_58 = eax_29
    int32_t* eax_30 = &var_54
    var_54 = 0
    
    if (esi_6 s>= eax_29)
        ecx_5 = &var_58
    
    if (*ecx_5 s> 0)
        eax_30 = ecx_5
    
    int32_t esi_7 = *eax_30
    int32_t* var_98 = &std::_Func_impl<class <lambda_6ac82d4dcbfe7671402ec2f5c884f3d0>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_94_1 = arg1
    int32_t** var_74_3 = &var_98
    sub_4c2b20(&arg1[0x10], var_98)
    void* eax_31 = arg1[0x28]
    int32_t var_74_4 = 2
    *(eax_31 + 0x90) = _mm_cvtepi32_ps(zx.o(ebx_2))
    *(eax_31 + 0x94) = xmm0_2
    *(arg1[0x28] + 0x1a8) = 1
    void* var_2c
    char* eax_33 = sub_4ee1f0(arg1[0x76], &var_2c, var_74_4)
    int32_t var_8_1 = 0
    char* ecx_9 = arg1[0x28] + 0x1e8
    
    if (ecx_9 != eax_33)
        sub_403590(ecx_9, eax_33, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    char* eax_36 = sub_4ee1f0(arg1[0x76], &var_2c, 3)
    int32_t var_8_3 = 1
    char* ecx_12 = arg1[0x28] + 0x200
    
    if (ecx_12 != eax_36)
        sub_403590(ecx_12, eax_36, 0, 0xffffffff)
    
    int32_t var_8_4 = 0xffffffff
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    int32_t edx_5 = 0xff
    
    if ((*(*arg1 + 0x18))(eax_2) != 0)
        edx_5 = 0xc8
    
    int32_t var_74_10 = 0xff
    int32_t var_78_7 = edx_5
    sub_504150(arg1[0x28] + 0x84, edx_5)
    void* eax_42 = arg1[0x29]
    float xmm0_7 = _mm_cvtepi32_ps(zx.o(eax_25))
    int32_t var_74_11 = 2
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(ebx_2))
    *(eax_42 + 0x90) = xmm0_7 + xmm2_2
    *(eax_42 + 0x94) = _mm_cvtepi32_ps(zx.o(esi_7)) + xmm0_2
    void* eax_43 = arg1[0x29]
    float xmm0_13 = _mm_cvtepi32_ps(zx.o(ecx_3))
    *(eax_43 + 0x1a9) = 1
    void* eax_44 = arg1[0x2a]
    *(eax_44 + 0x94) = xmm0_2
    *(eax_44 + 0x90) = xmm0_13 + xmm2_2 - 16f
    char* eax_45 = sub_4ee1f0(arg1[0x76], &var_2c, var_74_11)
    int32_t var_8_5 = 2
    char* ecx_18 = arg1[0x2a] + 0x1e8
    
    if (ecx_18 != eax_45)
        sub_403590(ecx_18, eax_45, 0, 0xffffffff)
    
    int32_t var_8_6 = 0xffffffff
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    char var_44
    char* eax_48 = sub_4ee1f0(arg1[0x76], &var_44, 3)
    int32_t var_8_7 = 3
    char* ecx_21 = arg1[0x2a] + 0x200
    
    if (ecx_21 != eax_48)
        sub_403590(ecx_21, eax_48, 0, 0xffffffff)
    
    int32_t var_8_8 = 0xffffffff
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_74_17 = 1
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    *(arg1[0x2b] + 0x25c) = 0
    void* eax_52 = arg1[0x2b]
    var_44 = 0
    int32_t eax_54 = (*(**(eax_52 + 0x74) + 0x28))(var_74_17)
    float xmm1_2 = xmm0_2
    int32_t edx_6 = eax_19
    int32_t ecx_25 = int.d(sub_4ed860(arg1[0x76])) + eax_54
    void* esi_9 = data_7fcbbc
    int32_t eax_57 = int.d(xmm1_2) + ecx_25 + edx_6
    int32_t ecx_26
    
    if (esi_9 != 0)
        if (sub_63c080(esi_9) != 0)
            ecx_26 = (*(**(esi_9 + 0x2c) + 0x54))()
        else
            ecx_26 = 0
        
        xmm1_2 = xmm0_2
        edx_6 = eax_19
    else
        ecx_26 = 0
    
    void* eax_61 = arg1[0x2b]
    int32_t xmm0_18 = _mm_cvtepi32_ps(zx.o(ebx_2))
    
    if (ecx_26 s> eax_57)
        *(eax_61 + 0xa4) = 1
        result = arg1[0x2b]
        *(result + 0x90) = xmm0_18
        *(result + 0x94) = _mm_cvtepi32_ps(zx.o(edx_6)) + xmm1_2
    else
        *(eax_61 + 0xa4) = 7
        result = arg1[0x2b]
        *(result + 0x90) = xmm0_18
        *(result + 0x94) = xmm1_2

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
