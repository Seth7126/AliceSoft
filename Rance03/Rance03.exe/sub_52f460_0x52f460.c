// 函数: sub_52f460
// 地址: 0x52f460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (esi == 0)
    result.b = 0
else
    void* ebp_1 = arg3
    int32_t edx_1
    edx_1:result = muls.dp.d(0x2aaaaaab, *(ebp_1 + 0x68) - *(ebp_1 + 0x64))
    int32_t edx_2 = edx_1 s>> 2
    int32_t edi_3 = (edx_2 u>> 0x1f) + edx_2
    
    if (edi_3 s<= 0)
        result.b = 1
    else
        struct sealengine::CWriteVB::VTable* const var_28_1 = &sealengine::CWriteVB::`vftable'
        int32_t var_4 = 0
        int32_t __saved_edi
        struct _EXCEPTION_REGISTRATION_RECORD** esi_1 =
            (*(*esi + 0x18))(__security_cookie ^ &__saved_edi)
        
        if (esi_1 == 0)
            result.b = 0
        else
            if (edi_3 s> 0)
                arg3 = nullptr
                int32_t ebx_1 = 0
                
                do
                    float var_24
                    sub_52f100(&var_24, ebx_1, arg2, ebp_1)
                    float ecx_5 = *(ebp_1 + 0x58) + *(arg3 + *(ebp_1 + 0x64) + 0xc) * 0x24
                    float var_18
                    sub_52f710(&var_18, ecx_5, arg2, ecx_5 i+ 0xc, ecx_5 i+ 0x18)
                    float xmm0_1 = var_24
                    float xmm4_1 = var_18
                    *esi_1 = xmm4_1
                    float var_14
                    esi_1[1] = var_14
                    float var_10
                    esi_1[2] = var_10
                    __builtin_memset(&esi_1[3], 0, 0x18)
                    esi_1[9] = 0xffff0000
                    esi_1[0xa] = 0xffffffff
                    __builtin_memset(&esi_1[0xb], 0, 0x2c)
                    esi_1[0x16] = xmm4_1 + xmm0_1 * 0.0149999997f
                    float var_20
                    esi_1[0x17] = var_14 + var_20 * 0.0149999997f
                    float var_1c
                    esi_1[0x18] = var_10 + var_1c * 0.0149999997f
                    __builtin_memset(&esi_1[0x19], 0, 0x18)
                    esi_1[0x1f] = 0xff00ff00
                    esi_1[0x20] = 0xffffffff
                    __builtin_memset(&esi_1[0x21], 0, 0x2c)
                    arg3 += 0x18
                    ebx_1 += 1
                    esi_1 = &esi_1[0x2c]
                while (ebx_1 s< edi_3)
            
            if ((*(**(arg1 + 4) + 0x1c))().b == 0)
                result.b = 0
            else
                *(arg1 + 8) = 1
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
