// 函数: sub_56b320
// 地址: 0x56b320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6118
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm0 = arg2
float var_2c = xmm0
int32_t ebx = *(arg3 + 0x1d8)
int32_t result

if (ebx != 0)
    int32_t edi_1 = 0
    int32_t* ebp_1 = nullptr
    int32_t* var_28 = nullptr
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    int32_t var_4 = 0
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x1a6d01a7, *(ebx + 0x18) - *(ebx + 0x14))
    int32_t edx_2 = edx_1 s>> 6
    int32_t esi_3 = (edx_2 u>> 0x1f) + edx_2
    int32_t esi_4 = 0
    
    if (esi_3 s> 0)
        while (true)
            if (esi_4 s>= 0)
                int32_t ecx_4 = *(ebx + 0x18) - *(ebx + 0x14)
                
                if (esi_4 s< ecx_4 s/ 0x26c)
                    void* eax_9 = *(ebx + 0x14)
                    
                    if (eax_9 != neg.d(edi_1))
                        int32_t var_50_1 = ecx_4
                        
                        if (sub_56b590(eax_9 + edi_1, arg3, ebx, &var_28, xmm0).b == 0)
                            break
                        
                        xmm0 = var_2c
            
            esi_4 += 1
            edi_1 += 0x26c
            
            if (esi_4 s>= esi_3)
                edi_1 = var_24_1
                ebp_1 = var_28
                goto label_56b41c
        
        goto label_56b510
    
label_56b41c:
    int32_t* esi_6 = *(arg1 + 0x30)
    
    if (esi_6 == *(arg1 + 0x34))
    label_56b4ac:
        
        if (ebp_1 != edi_1)
            if (*(arg1 + 0x64) == 0)
                struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** eax_17 =
                    sub_69adc6(0x10)
                
                if (eax_17 == 0)
                    eax_17 = nullptr
                else
                    *eax_17 = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
                    eax_17[1] = 0
                    eax_17[2] = 0
                    eax_17[3].w = 0x101
                
                *(arg1 + 0x64) = eax_17
            
            int32_t var_50_5 = arg4
            void* ecx_12 = *(arg1 + 0x64)
            int128_t var_1c = data_709450
            
            if (sub_547cc0(ecx_12, &var_28, &var_1c, 0, 0).b != 0)
                ebx.b = 1
            else
                ebx.b = 0
        else
            int32_t* ecx_8 = *(arg1 + 0x64)
            
            if (ecx_8 != 0)
                (*(*ecx_8 + 0x10))(1)
                *(arg1 + 0x64) = 0
            
            ebx.b = 1
    else
        while (true)
            void* edi_2 = *esi_6
            
            if (edi_2 != 0)
                int32_t ebp_3 = *(edi_2 + 4)
                
                if (ebp_3 s< 0)
                    break
                
                int32_t eax_11
                int32_t edx_5
                edx_5:eax_11 = muls.dp.d(0x1a6d01a7, *(ebx + 0x18) - *(ebx + 0x14))
                int32_t edx_6 = edx_5 s>> 6
                
                if (ebp_3 s>= (edx_6 u>> 0x1f) + edx_6)
                    break
                
                int32_t eax_14 = ebp_3 * 0x26c
                
                if (eax_14 == neg.d(*(ebx + 0x14)))
                    break
                
                result.b = *(eax_14 + *(ebx + 0x14) + 0x205)
                
                if (result.b != 0 && *(edi_2 + 0x274) != 0 && *(edi_2 + 0xc) == 0
                        && sub_5596d0(edi_2 + 0x31c, &var_28).b == 0)
                    break
            
            esi_6 = &esi_6[1]
            
            if (esi_6 == *(arg1 + 0x34))
                edi_1 = var_24_1
                ebp_1 = var_28
                goto label_56b4ac
        
    label_56b510:
        edi_1 = var_24_1
        ebx.b = 0
        ebp_1 = var_28
    
    int32_t var_4_1 = 0xffffffff
    
    if (ebp_1 != 0)
        int32_t* esi_7 = ebp_1
        
        if (ebp_1 != edi_1)
            do
                (**esi_7)(0)
                esi_7 = &esi_7[0xb]
            while (esi_7 != edi_1)
        
        j__free(ebp_1)
    
    result.b = ebx.b
else
    int32_t* ecx = *(arg1 + 0x64)
    
    if (ecx != 0)
        (*(*ecx + 0x10))(1)
        *(arg1 + 0x64) = ebx
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
