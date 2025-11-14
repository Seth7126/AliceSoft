// 函数: sub_4a6b90
// 地址: 0x4a6b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bca98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24
sub_453d80(&var_24, *(arg1 + 0xc) + 0x94)
int32_t var_c_1 = 0
void* ecx_1 = *(arg1 + 0xc)
int32_t* esi = var_24
int32_t var_3c = 0
*(ecx_1 + 0x98) = *(ecx_1 + 0x94)
int32_t var_20
uint32_t ecx_5 = (var_20 - esi + 3) u>> 2

if (esi u> var_20)
    ecx_5 = 0

if (ecx_5 != 0)
    int32_t eax_6 = 0
    
    do
        int32_t ebx_1 = *esi
        
        if (ebx_1 s> 0)
            int32_t edi_3 = ebx_1 s/ 0x2710
            void** edx_3 = *(*(arg1 + 8) + 0x1c)
            void** ecx_7 = edx_3
            void** eax_8 = edx_3[1]
            
            while (*(eax_8 + 0xd) == 0)
                if (eax_8[4] s>= edi_3)
                    ecx_7 = eax_8
                    eax_8 = *eax_8
                else
                    eax_8 = eax_8[2]
            
            void*** eax_9
            
            if (ecx_7 == edx_3 || edi_3 s< ecx_7[4])
                void** var_34 = edx_3
                eax_9 = &var_34
            else
                void** var_38 = ecx_7
                eax_9 = &var_38
            
            void** eax_10 = *eax_9
            
            if (eax_10 != *(*(arg1 + 8) + 0x1c))
                void* edx_4 = eax_10[5]
                
                if (edx_4 != 0)
                    int32_t edi_4 = *(edx_4 + 8)
                    
                    if (ebx_1 s>= edi_4 && *(edx_4 + 4) + edi_4 s> ebx_1)
                        int32_t eax_13
                        eax_13.b = *(*(edx_4 + 0xc) + ((ebx_1 - edi_4) << 2)) != 0
                        
                        if (eax_13.b != 0 && sub_4a67c0(arg1, ebx_1) != 0)
                            void* edi_5 = *(arg1 + 0xc)
                            int32_t var_30 = ebx_1
                            sub_4b7b70(edi_5, ebx_1)
                            sub_4158d0(edi_5 + 0x94, &var_30)
                            *(edi_5 + 4) = 1
            
            eax_6 = var_3c
        
        eax_6 += 1
        esi = &esi[1]
        var_3c = eax_6
    while (eax_6 != ecx_5)

int32_t* result = sub_4a6db0(&var_24, *(arg1 + 0xc) + 0x94)
int32_t* ecx_15 = var_24
int32_t* esi_1 = ecx_15
uint32_t ebp_5 = (var_20 - ecx_15 + 3) u>> 2

if (ecx_15 u> var_20)
    ebp_5 = 0

if (ebp_5 != 0)
    int32_t ebx_2 = 0
    
    do
        int32_t edi_6 = *esi_1
        int32_t var_58_5 = edi_6
        result = sub_4a52a0(*(arg1 + 8))
        int32_t* result_1 = result
        
        if (result_1 != 0)
            result = result_1[2]
            
            if (edi_6 s>= result && result_1[1] + result s> edi_6)
                if (*(result_1[3] + ((edi_6 - result) << 2)) != 0)
                    result = sub_4a6b90(eax_2)
                else
                    result = sub_4e7720(result_1, edi_6)
                    
                    if (result != 0)
                        result = sub_4a6b90(eax_2)
        
        ebx_2 += 1
        esi_1 = &esi_1[1]
    while (ebx_2 != ebp_5)
    
    ecx_15 = var_24

if (ecx_15 != 0)
    result = j__free(ecx_15)

fsbase->NtTib.ExceptionList = ExceptionList
var_4
return result
