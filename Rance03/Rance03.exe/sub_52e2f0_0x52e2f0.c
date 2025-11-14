// 函数: sub_52e2f0
// 地址: 0x52e2f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c39a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(*(arg1 + 4))
int32_t result

if (arg2 s> (eax_4 - edx) s>> 1)
    result.b = 0
else
    int32_t ebx_1 = arg3
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(*(arg1 + 8))
    
    if (ebx_1 s> (eax_7 - edx_1) s>> 1)
        result.b = 0
    else
        int32_t result_2 = *(arg1 + 0x14)
        void* edx_2 = arg1 + 0x10
        result = *edx_2
        int32_t result_1 = result_2
        void* var_44_1 = edx_2
        
        if (result != result_2)
            int32_t edx_3 = *(edx_2 + 4)
            
            do
                int32_t edi_1 = *(result + 0xc)
                
                if (edi_1 s>= arg2)
                    int32_t ebx_2 = *(result + 0x10)
                    
                    if (ebx_2 s>= ebx_1 && (result_1 == edx_3 || *(result_1 + 0xc) s> edi_1
                            || *(result_1 + 0x10) s> ebx_2))
                        result_1 = result
                
                result += 0x14
            while (result != edx_3)
            
            edx_2 = var_44_1
        
        if (result_1 == result_2)
            result.b = 0
        else
            int32_t esi_1 = *(result_1 + 4)
            int32_t eax_9 = *(result_1 + 8)
            int32_t ebp_2 = *(result_1 + 0xc)
            int32_t edi_2 = *(result_1 + 0x10)
            struct sealengine::CRect::VTable* const var_34_1 = &sealengine::CRect::`vftable'
            int32_t var_30_1 = esi_1
            int32_t var_2c_1 = eax_9
            int32_t var_28_1 = ebp_2
            int32_t var_24_1 = edi_2
            int32_t var_4 = 0
            void var_38
            sub_52e790(edx_2, &var_38, result_1)
            int32_t eax_11
            int32_t edx_4
            edx_4:eax_11 = sx.q(ebp_2)
            
            if (arg2 s<= (eax_11 - edx_4) s>> 1)
                int32_t eax_21
                int32_t edx_7
                
                do
                    int32_t eax_15
                    int32_t edx_5
                    edx_5:eax_15 = sx.q(edi_2)
                    int32_t esi_3 = (eax_15 - edx_5) s>> 1
                    
                    if (ebx_1 s> esi_3)
                        break
                    
                    int32_t eax_18
                    int32_t edx_6
                    edx_6:eax_18 = sx.q(ebp_2)
                    struct sealengine::CRect::VTable* const var_20 = &sealengine::CRect::`vftable'
                    int32_t var_18_1 = eax_9
                    ebp_2 = (eax_18 - edx_6) s>> 1
                    int32_t var_14_1 = ebp_2
                    int32_t var_10_1 = esi_3
                    int32_t ebx_3 = esi_1 + ebp_2
                    int32_t var_1c_1 = ebx_3
                    var_4.b = 1
                    sub_52e6d0(var_44_1, &var_20)
                    int32_t var_1c_2 = esi_1
                    int32_t edi_5 = eax_9 + esi_3
                    var_20 = &sealengine::CRect::`vftable'
                    int32_t var_18_2 = edi_5
                    int32_t var_14_2 = ebp_2
                    int32_t var_10_2 = esi_3
                    var_4.b = 2
                    sub_52e6d0(var_44_1, &var_20)
                    var_20 = &sealengine::CRect::`vftable'
                    int32_t var_1c_3 = ebx_3
                    int32_t var_18_3 = edi_5
                    int32_t var_14_3 = ebp_2
                    int32_t var_10_3 = esi_3
                    var_4.b = 3
                    sub_52e6d0(var_44_1, &var_20)
                    ebx_1 = arg3
                    edx_7:eax_21 = sx.q(ebp_2)
                    edi_2 = esi_3
                    var_4.b = 0
                    int32_t var_28_2 = ebp_2
                    int32_t var_24_2 = edi_2
                while (arg2 s<= (eax_21 - edx_7) s>> 1)
            
            *(arg4 + 4) = esi_1
            *(arg4 + 8) = eax_9
            *(arg4 + 0xc) = ebp_2
            *(arg4 + 0x10) = edi_2
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
