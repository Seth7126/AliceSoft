// 函数: sub_4c2150
// 地址: 0x4c2150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
char* result = __security_cookie ^ &var_24
char* result_1 = result
int32_t* esi = arg1

if (arg2 s<= 0)
    bool cond:0 = esi[5] u< 0x10
    esi[4] = 0
    
    if (not(cond:0))
        esi = *esi
    
    *esi = 0
    sub_69a5bc(result_1 ^ &var_24)
    return result

int32_t ebp = esi[4]

if (ebp != 0 && ebp s> arg2)
    void* eax_1 = nullptr
    int32_t edi_1 = 0
    
    if (arg2 s> 0)
        while (eax_1 s< ebp)
            int32_t ecx_3 = esi[5]
            char* edx_1
            
            if (ecx_3 u< 0x10)
                edx_1 = esi
            else
                edx_1 = *esi
            
            int32_t* edx_2
            
            if (*(edx_1 + eax_1) u>= 0x81)
                if (ecx_3 u< 0x10)
                    edx_2 = esi
                else
                    edx_2 = *esi
            
            if (*(edx_1 + eax_1) u>= 0x81 && *(edx_2 + eax_1) u<= 0x9f)
                eax_1 += 1
            else
                int32_t* edx_3
                
                if (ecx_3 u< 0x10)
                    edx_3 = esi
                else
                    edx_3 = *esi
                
                if (*(edx_3 + eax_1) u>= 0xe0)
                    int32_t* ecx_4
                    
                    if (ecx_3 u< 0x10)
                        ecx_4 = esi
                    else
                        ecx_4 = *esi
                    
                    if (*(ecx_4 + eax_1) u<= 0xef)
                        eax_1 += 1
            
            edi_1 += 1
            eax_1 += 1
            
            if (edi_1 s>= arg2)
                break
    
    int32_t var_20
    result = sub_403070(esi, &var_20, 0, eax_1)
    int32_t* result_2 = result
    
    if (esi != result_2)
        if (esi[5] u>= 0x10)
            j__free(*esi)
        
        esi[5] = 0xf
        esi[4] = 0
        *esi = 0
        result = sub_4030b0(esi, result_2)
    
    int32_t var_c
    
    if (var_c u>= 0x10)
        result = j__free(var_20)

sub_69a5bc(result_1 ^ &var_24)
return result
