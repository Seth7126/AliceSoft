// 函数: sub_5c9cc0
// 地址: 0x5c9cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1
int32_t result_1 = (*(*arg2 + 0x10))()
int32_t i_1 = (*(*arg2 + 0x14))()
char* esi_1 = (*(*arg2 + 8))(0, 0)
int32_t result = result_1
int32_t edx_3 = (*(*arg2 + 0x1c))() - (result << 2)

if (i_1 s> 0)
    int32_t i
    
    do
        if (result s> 0)
            int32_t ecx_5 = result
            int32_t j
            
            do
                uint32_t eax_4 = zx.d(*esi_1)
                *(arg1 + (eax_4 << 2)) += 1
                uint32_t eax_5 = zx.d(esi_1[1])
                *(arg1 + (eax_5 << 2)) += 1
                uint32_t eax_6 = zx.d(esi_1[2])
                esi_1 = &esi_1[4]
                *(arg1 + (eax_6 << 2)) += 1
                j = ecx_5
                ecx_5 -= 1
            while (j != 1)
            result = result_1
        
        esi_1 = &esi_1[edx_3]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
