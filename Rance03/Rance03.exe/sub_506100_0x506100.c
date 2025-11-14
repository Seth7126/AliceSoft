// 函数: sub_506100
// 地址: 0x506100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1578
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1[1]

if (result == 0 || arg2 s<= 0 || arg3 s<= 0)
    result.b = 0
else
    int32_t var_24_1 = result[2]
    int32_t* edi_1 = sub_514500(arg1)
    
    if (edi_1 == 0)
        result.b = 0
    else
        int32_t ebx
        ebx.b = (*(*edi_1 + 0x24))(eax_2)
        result = (*(*edi_1 + 0x28))()
        int32_t* eax_9
        int32_t* esi_2
        
        if (ebx.b != 0)
            int32_t eax_6 = *edi_1
            
            if (result.b == 0)
                int32_t eax_10 = (*(eax_6 + 0x18))()
                int32_t* ecx_4 = arg1[4]
                
                if (ecx_4 != 0)
                    eax_9 = (*(*ecx_4 + 0xc))(arg2, arg3, eax_10)
                    goto label_5061d4
                
                esi_2 = nullptr
                goto label_5061da
            
            int32_t eax_7 = (*(eax_6 + 0x18))()
            int32_t* ecx_3 = arg1[4]
            
            if (ecx_3 != 0)
                eax_9 = (*(*ecx_3 + 8))(arg2, arg3, eax_7)
                goto label_5061d4
            
            esi_2 = nullptr
            goto label_5061da
        
        if (result.b == 0)
            result.b = 0
        else
            int32_t* ecx_5 = arg1[4]
            
            if (ecx_5 != 0)
                eax_9 = (*(*ecx_5 + 0x10))(arg2, arg3)
            label_5061d4:
                esi_2 = eax_9
                goto label_5061da
            
            esi_2 = nullptr
        label_5061da:
            int32_t eax_14
            int32_t ecx_7
            eax_14, ecx_7 = (*(*edi_1 + 0x14))()
            int32_t var_24_5 = ecx_7
            uint128_t xmm0_3 = zx.o((*(*edi_1 + 0x10))(_mm_cvtepi32_ps(zx.o(eax_14))))
            int32_t eax_17 = *esi_2
            int32_t var_28_4 = _mm_cvtepi32_ps(xmm0_3)
            int32_t var_3c_1 = (*(*esi_2 + 0x10))((*(eax_17 + 0x14))(edi_1))
            sub_504040(&arg1[5], esi_2)
            arg3 = &partsengine::CSpriteEngineWrapper::`vftable'
            int32_t var_4 = 0
            void* eax_21 = arg1[1]
            int32_t eax_22
            
            if (eax_21 != 0)
                eax_22 = *(eax_21 + 8)
            else
                eax_22 = 0xffffffff
            
            int32_t var_4_1 = 0xffffffff
            bool cond:2_1 = sub_514550(eax_22, esi_2) != 0
            int32_t eax_24 = *esi_2
            
            if (cond:2_1)
                (*(eax_24 + 4))()
                result.b = 1
            else
                (*(eax_24 + 4))()
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
