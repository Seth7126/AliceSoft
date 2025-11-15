// 函数: sub_5ba880
// 地址: 0x5ba880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f828
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 0x60)
int32_t edi = *(arg1 + 0x64)
int32_t* var_20 = esi
int32_t var_24 = edi

while (esi != edi)
    void* ecx = *esi
    result = *(ecx + 0x77)
    
    if (result != 0)
        void* var_38
        sub_5bc760(&var_38, ecx + 0x24)
        int32_t var_8_1 = 0
        int32_t i
        int32_t i_1 = i
        void* ebx_1 = var_38
        
        if (ebx_1 != i_1)
            void* edx_1 = arg1
            void* ecx_2 = ebx_1 + 0x50
            void* var_1c_1 = ecx_2
            void* edi_1 = edx_1 + 0x78
            
            do
                int32_t* ebx_2 = ecx_2 - 0x4c
                int32_t* var_14_1 = ebx_2
                int32_t j_1 = 3
                int32_t j
                
                do
                    void* var_68_2 = ecx + 0x24
                    int32_t edx_2 = *(edx_1 + 0x7c)
                    int32_t ecx_3 = *ebx_2 * 3
                    int32_t eax_5 = *edi_1
                    int128_t xmm1_1 = *(eax_5 + (ecx_3 << 3))
                    int64_t xmm0_1 = *(eax_5 + (ecx_3 << 3) + 0x10)
                    int32_t* ecx_4 = *edi_1
                    int128_t var_50 = xmm1_1
                    int64_t var_40_1 = xmm0_1
                    var_50:4.d = var_50:4.d * -1f
                    var_50.d = xmm1_1 f* -1f
                    var_50:8.d = var_50:8.d * -1f
                    int32_t* eax_7 = sub_5bee30(&var_50, edx_2, ecx_4, &var_50)
                    
                    if (eax_7 == edx_2)
                        int32_t eax_12
                        int32_t edx_5
                        edx_5:eax_12 = muls.dp.d(0x2aaaaaab, *(edi_1 + 4) - *edi_1)
                        int32_t edx_6 = edx_5 s>> 2
                        sub_5bc8b0(edi_1, &var_50)
                        *var_14_1 = (edx_6 u>> 0x1f) + edx_6
                        ebx_2 = var_14_1
                    else
                        int32_t eax_8
                        int32_t edx_3
                        edx_3:eax_8 = muls.dp.d(0x2aaaaaab, eax_7 - *edi_1)
                        int32_t edx_4 = edx_3 s>> 2
                        *ebx_2 = (edx_4 u>> 0x1f) + edx_4
                    
                    edx_1 = arg1
                    ebx_2 = &ebx_2[0xa]
                    var_14_1 = ebx_2
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                int128_t* ecx_10 = var_1c_1
                int128_t xmm1_3 = *(ecx_10 - 0x28)
                int128_t xmm2_1 = *(ecx_10 - 0x18)
                int64_t xmm3_1 = *(ecx_10 - 8)
                *(ecx_10 - 0x28) = *ecx_10
                *(ecx_10 - 0x18) = ecx_10[1]
                *(ecx_10 - 8) = ecx_10[2].q
                *ecx_10 = xmm1_3
                ecx_10[1] = xmm2_1
                ecx_10[2].q = xmm3_1
                ecx_2 = ecx_10 + 0x78
                var_1c_1 = ecx_2
            while (ecx_2 - 0x50 != i)
            
            esi = var_20
            edi = var_24
            ebx_1 = var_38
            i_1 = i
        
        int32_t var_68_4 = 0.d
        result = sub_5be670(ecx + 0x24, *(ecx + 0x28), ebx_1, i_1)
        int32_t var_8_2 = 0xffffffff
        
        if (ebx_1 != 0)
            int32_t var_30
            result = sub_403160(ebx_1, (var_30 - ebx_1) s/ 0x78, 0x78)
            var_38 = nullptr
            i = 0
            var_30 = 0
    
    esi = &esi[1]
    var_20 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
