// 函数: sub_47ea10
// 地址: 0x47ea10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_2 = *(arg1 + 0x3c)
int32_t* edx = *(arg1 + 0x38)
int32_t ecx = 0
uint32_t ebx_3 = (eax_2 - edx + 3) u>> 2
int32_t result = 0

if (edx u> eax_2)
    ebx_3 = 0

if (ebx_3 != 0)
    int32_t var_4 = 0
    
    do
        int32_t eax = *edx
        int32_t var_8
        int32_t* esi_1 = &var_8
        var_8 = eax
        
        if (eax s<= 0)
            esi_1 = &var_4
        
        edx = &edx[1]
        ecx += 1
        result += *esi_1
    while (ecx != ebx_3)

return result
