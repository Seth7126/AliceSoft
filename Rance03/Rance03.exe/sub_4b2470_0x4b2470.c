// 函数: sub_4b2470
// 地址: 0x4b2470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bd530
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg4

if (eax_3 == 1 || eax_3 == 2)
    int32_t* eax_4 = sub_4a3ac0(*(arg1 + 0x98))
    int32_t ebx_2 = *(arg1 + 0xf8) - (*(*eax_4 + 0x28))(1)
    struct partsengine::COriginPosMode::VTable* const var_34_1 =
        &partsengine::COriginPosMode::`vftable'
    int32_t eax_8 = (*(arg1 + 0xa0) - *(arg1 + 0x9c)) s>> 2
    int32_t esi_1 = *(*(arg1 + 0x174) + 0x88)
    int32_t var_30_1 = esi_1
    int32_t var_c_1 = 0
    int32_t ecx_3 = (*(*(arg1 - 4) + 0x28))(1)
    int32_t ecx_4
    
    if (esi_1 - 1 u> 8)
        ecx_4 = 0
    else
        switch (esi_1 + &jump_table_4b26ac[2]:3)
            case &lookup_table_4b26b8, &lookup_table_4b26b8[3], &lookup_table_4b26b8[6]
                ecx_4 = 0
            case &lookup_table_4b26b8[1], &lookup_table_4b26b8[4], &lookup_table_4b26b8[7]
                int32_t eax_14
                int32_t edx_2
                edx_2:eax_14 = sx.q(ecx_3)
                ecx_4 = neg.d((eax_14 - edx_2) s>> 1)
            case &lookup_table_4b26b8[2], &lookup_table_4b26b8[5], &lookup_table_4b26b8[8]
                ecx_4 = neg.d(ecx_3)
    
    struct partsengine::COriginPosMode::VTable* const var_20_1 =
        &partsengine::COriginPosMode::`vftable'
    int32_t esi_3 = *(*(arg1 + 0x174) + 0x88)
    int32_t var_1c_1 = esi_3
    int32_t var_c_2 = 1
    int32_t ebx_3 = (*(*(arg1 - 4) + 0x2c))(1)
    int32_t ebx_4
    
    if (esi_3 - 1 u> 8)
        ebx_4 = 0
    else
        switch (esi_3 + &jump_table_4b26c4[2]:3)
            case &lookup_table_4b26d0, &lookup_table_4b26d0[1], &lookup_table_4b26d0[2]
                ebx_4 = 0
            case &lookup_table_4b26d0[3], &lookup_table_4b26d0[4], &lookup_table_4b26d0[5]
                int32_t eax_22
                int32_t edx_3
                edx_3:eax_22 = sx.q(ebx_3)
                ebx_4 = neg.d((eax_22 - edx_3) s>> 1)
            case &lookup_table_4b26d0[6], &lookup_table_4b26d0[7], &lookup_table_4b26d0[8]
                ebx_4 = neg.d(ebx_3)
    
    int32_t var_c_3 = 0xffffffff
    float xmm0_1 = sub_4a1c10(*(arg1 + 0x174))
    void* ecx_7 = *(arg1 + 0x174)
    float xmm0_2 = xmm0_1 + _mm_cvtepi32_ps(zx.o(ecx_4))
    float xmm0_3 = sub_4a1cf0(ecx_7)
    float xmm3_2 = _mm_cvtepi32_ps(zx.o(arg2))
    float xmm2_2 = xmm0_3 + _mm_cvtepi32_ps(zx.o(ebx_4))
    
    if (not(xmm3_2 < xmm0_2) && not(_mm_cvtepi32_ps(zx.o(ebx_2)) + xmm0_2 < xmm3_2))
        float xmm1_9 = _mm_cvtepi32_ps(zx.o(arg3))
        
        if (not(xmm1_9 < xmm2_2))
            int32_t ecx_8 = *(arg1 + 0xfc)
            
            if (not(_mm_cvtepi32_ps(zx.o(ecx_8 * eax_8)) + xmm2_2 < xmm1_9))
                float xmm0_9 = _mm_cvtepi32_ps(zx.o(ecx_8))
                int32_t eax_29
                int32_t edx_4
                edx_4:eax_29 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x160) - *(arg1 + 0x15c))
                int32_t edx_5 = edx_4 s>> 2
                int32_t esi_5 =
                    int.d((xmm1_9 - xmm2_2) / xmm0_9 + _mm_cvtepi32_ps(zx.o(eax_4[0x40])))
                
                if (esi_5 s< (edx_5 u>> 0x1f) + edx_5)
                    int32_t var_48_1 = esi_5
                    sub_4b0370(arg1 + 0xa8)
                    sub_485dd0(arg1 + 4, esi_5, 0)
    
    eax_3 = arg4

void* result = sub_485840(arg1 + 4, arg2, arg3, eax_3, 0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
