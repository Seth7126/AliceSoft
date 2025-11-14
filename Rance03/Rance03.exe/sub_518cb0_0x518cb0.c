// 函数: sub_518cb0
// 地址: 0x518cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2738
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg1
void* result_1 = result
void** i = *(result + 0xa8)

if (i != *(result + 0xac))
    int32_t ebx_1 = arg2
    
    do
        void* ebp_1 = *i
        int32_t eax_3 = *(result + 0xcc)
        void* var_40_1 = arg1
        sub_516d60(ebp_1, ebp_1 + 0xb0, ebx_1, eax_3, _mm_cvtepi32_ps(zx.o(*(ebp_1 + 0xe8))))
        int32_t eax_6 = *(ebp_1 + 0xf0) - *(ebp_1 + 0xec)
        int32_t* var_18 = nullptr
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(eax_6))
        int32_t var_4 = 0
        sub_515f90(&var_18, ebp_1 + 0x1c)
        int32_t* edi_1 = var_18
        void* ecx_2 = var_14_1 - edi_1
        int32_t var_4_1 = 0xffffffff
        int32_t eax_8
        int32_t edx_1
        edx_1:eax_8 = muls.dp.d(0x2aaaaaab, ecx_2)
        int32_t edx_2 = edx_1 s>> 2
        
        if (edi_1 != 0)
            int32_t* eax_12 = edi_1
            
            if (eax_12 != var_14_1)
                do
                    if (edi_1[5] u>= 0x10)
                        j__free(*edi_1)
                    
                    edi_1[5] = 0xf
                    edi_1[4] = 0
                    *edi_1 = 0
                    edi_1 = &edi_1[6]
                while (edi_1 != var_14_1)
                
                eax_12 = var_18
            
            ecx_2 = j__free(eax_12)
            var_18 = nullptr
            int32_t var_14_2 = 0
            int32_t var_10_2 = 0
        
        ebx_1 = arg2
        void* var_40_6 = ecx_2
        sub_516d60(ebp_1, ebp_1 + 0xbc, ebx_1, eax_3, 
            xmm0_4 / _mm_cvtepi32_ps(zx.o((edx_2 u>> 0x1f) + edx_2)))
        void* var_40_8 = ebp_1
        arg1 = ebp_1
        sub_516d60(arg1, ebp_1 + 0xd4, ebx_1, eax_3, _mm_cvtepi32_ps(zx.o(*(ebp_1 + 0xe8))))
        result = result_1
        i = &i[1]
    while (i != *(result + 0xac))

fsbase->NtTib.ExceptionList = ExceptionList
return result
