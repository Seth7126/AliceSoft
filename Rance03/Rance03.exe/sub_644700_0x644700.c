// 函数: sub_644700
// 地址: 0x644700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_98
int32_t eax_1 = __security_cookie ^ &var_98
int32_t esi = arg4
int32_t ebp = arg2
int32_t var_8c = ebp
int32_t eax_2 = ebp
int32_t var_90 = esi

if (esi != 0)
    eax_2 = esi

int32_t edi = arg3
var_98 = edi
int32_t* result_1 = _malloc(eax_2 << 2)
char var_88
_memset(&var_88, 0, 0x84)
int32_t ebx = 0

if (ebp s> 0)
    int32_t* result_3 = result_1
    int32_t eax_4 = var_98
    
    while (true)
        int32_t i_2 = *(eax_4 + (ebx << 2))
        
        if (i_2 s> 0)
            int32_t esi_1 = *(&var_88 + (i_2 << 2))
            
            if (i_2 s< 0x20 && esi_1 u>> i_2.b != 0)
                goto label_6448a0
            
            *result_3 = esi_1
            int32_t i = i_2
            result_3 = &result_3[1]
            
            do
                int32_t ecx_1 = *(&var_88 + (i << 2))
                
                if ((ecx_1.b & 1) != 0)
                    if (i != 1)
                        void* ecx_3 = &(&var_88)[i << 2]
                        *ecx_3 = *(ecx_3 - 4) * 2
                    else
                        int32_t var_84 = var_84 + 1
                    
                    break
                
                *(&var_88 + (i << 2)) = ecx_1 + 1
                i -= 1
            while (i s> 0)
            
            for (int32_t i_1 = i_2 + 1; i_1 s< 0x21; i_1 += 1)
                int32_t edx = *(&var_88 + (i_1 << 2))
                
                if (edx u>> 1 != esi_1)
                    break
                
                esi_1 = edx
                *(&var_88 + (i_1 << 2)) = (&var_8c)[i_1] * 2
            
            esi = var_90
            eax_4 = var_98
        else if (esi == 0)
            result_3 = &result_3[1]
        
        ebx += 1
        
        if (ebx s>= ebp)
            edi = var_98
            break

int32_t* result

if (esi == 1)
label_64482b:
    int32_t ebx_1 = 0
    
    if (ebp s> 0)
        int32_t* result_2 = result_1
        
        do
            int32_t edi_1 = *(edi + (ebx_1 << 2))
            int32_t eax_14 = 0
            int32_t ecx_5 = 0
            
            if (edi_1 s> 0)
                do
                    uint32_t edx_3 = *result_2 u>> ecx_5.b
                    ecx_5 += 1
                    eax_14 = (eax_14 * 2) | (edx_3 & 1)
                while (ecx_5 s< edi_1)
                
                ebp = var_8c
            
            if (var_90 == 0 || edi_1 != 0)
                *result_2 = eax_14
                result_2 = &result_2[1]
            
            edi = var_98
            ebx_1 += 1
        while (ebx_1 s< ebp)
    
    result = result_1
else
    int32_t edx_1 = 1
    
    while ((*(&var_88 + (edx_1 << 2)) & 0xffffffff u>> (0x20 - edx_1.b)) == 0)
        edx_1 += 1
        
        if (edx_1 s>= 0x21)
            goto label_64482b
    
label_6448a0:
    _free(result_1)
    result = nullptr

sub_69a5bc(eax_1 ^ &var_98)
return result
