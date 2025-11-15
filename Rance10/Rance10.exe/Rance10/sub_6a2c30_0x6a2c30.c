// 函数: sub_6a2c30
// 地址: 0x6a2c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_10 = 0xffffffff
int32_t esi = 0
uint32_t ebx = zx.d(*(arg2 + 2))
int32_t edx = 0x8a
*(arg2 + (arg4 << 2) + 6) = 0xffff

if (ebx != 0)
    edx = 7

int32_t eax
eax.b = ebx != 0
int32_t result = eax + 3

if (arg4 s>= 0)
    void* ebp_1 = arg2 + 6
    arg4 += 1
    int32_t i
    
    do
        esi += 1
        uint32_t var_4_1 = ebx
        uint32_t var_8_1 = ebx
        uint32_t edi_2 = ebx
        uint32_t var_c_1 = ebx
        ebx = zx.d(*ebp_1)
        
        if (esi s>= edx || edi_2 != ebx)
            if (esi s< result)
                *(arg3 + (edi_2 << 2) + 0xa7c) += esi.w
            else if (var_8_1 != 0)
                if (edi_2 != var_10)
                    *(arg3 + (edi_2 << 2) + 0xa7c) += 1
                
                *(arg3 + 0xabc) += 1
            else if (esi s> 0xa)
                *(arg3 + 0xac4) += 1
            else
                *(arg3 + 0xac0) += 1
            
            esi = 0
            var_10 = edi_2
            
            if (ebx == 0)
                edx = 0x8a
                result = 3
            else if (var_4_1 != ebx)
                edx = 7
                result = 4
            else
                edx = 6
                result = 3
        
        ebp_1 += 4
        i = arg4
        arg4 -= 1
    while (i != 1)

return result
