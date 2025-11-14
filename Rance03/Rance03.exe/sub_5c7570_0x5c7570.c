// 函数: sub_5c7570
// 地址: 0x5c7570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_4 = ebx
void* ecx = &arg1[0x5b]
arg1[0x8d] -= 4
int32_t ebp = *arg1[0x8d]
int32_t eax_3 = (*(ecx + 0xc) - *(ecx + 8)) s>> 2

if (ebp u< eax_3)
    eax_3 = *(ecx + 8)
    void* esi_1 = *(eax_3 + (ebp << 2))
    
    if (esi_1 != 0)
        char* esi_2
        
        if (*(esi_1 + 0xc) != 0)
            esi_2 = *(esi_1 + 8)
        
        void* esi_3
        
        if (*(esi_1 + 0xc) == 0 || esi_2 == 0)
            esi_3 = nullptr
        else
            do
                eax_3.b = *esi_2
                esi_2 = &esi_2[1]
            while (eax_3.b != 0)
            
            esi_3 = esi_2 - &esi_2[1]
        
        int32_t edx_2 = arg1[0x8b]
        int32_t ebx_4 = (arg1[0x8d] - arg1[0x8a]) s>> 2
        
        if (ebx_4 + 1 u>= edx_2)
            sub_64ad90(&arg1[0x89], edx_2 * 2)
            ecx = &arg1[0x5b]
            arg1[0x8d] = arg1[0x8a] + (ebx_4 << 2)
        
        *arg1[0x8d] = esi_3
        arg1[0x8d] += 4
        int32_t result
        int32_t* ecx_2
        int32_t edx_3
        result, ecx_2, edx_3 = sub_5d5e80(ecx, ebp)
        
        if (result.b != 0)
            return result
        
        return sub_5c24e0(result, edx_3, ecx_2, arg1, 0x6e7b00)

int32_t var_14_3 = ebp
int32_t var_18_2 = 0x6e7ac8
int32_t edx
return sub_5c2400(eax_3, edx, ecx, arg1, "S_LENGTHBYTE2")
