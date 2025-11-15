// 函数: sub_591010
// 地址: 0x591010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* ebp = arg1
void* var_4 = ebp
int32_t edi = *(ebp + 0x2c)

for (void* i = *(ebp + 0x28); i != edi; i += 0x30)
    int32_t ebx_1 = *(i + 0x1c)
    
    if (ebx_1 != 0xffffffff)
        int32_t j = 0
        int32_t eax_1
        int32_t edx_3
        edx_3:eax_1 = muls.dp.d(0x2aaaaaab, *(ebp + 0x2c) - *(ebp + 0x28))
        int32_t edx_4 = edx_3 s>> 3
        
        if ((edx_4 u>> 0x1f) + edx_4 s> 0)
            int32_t eax_4
            int32_t edx_7
            edx_7:eax_4 = muls.dp.d(0x2aaaaaab, *(ebp + 0x2c) - *(ebp + 0x28))
            int32_t edx_8 = edx_7 s>> 3
            int32_t eax = *(var_4 + 0x28) + 0x18
            
            do
                if (*eax == ebx_1)
                    *(i + 0x20) = j
                    break
                
                j += 1
                eax += 0x30
            while (j s< (edx_8 u>> 0x1f) + edx_8)
            
            ebp = var_4
