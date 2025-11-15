// 函数: sub_4f1f60
// 地址: 0x4f1f60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4f25b0(arg1)
void* ebx = *(arg1 + 4)
char* result = *(ebx + 0x70)
int32_t esi = *(result + 0xbc)

if (esi s> 0)
    int32_t var_10_1 = esi
    result = sub_4f15e0(*(arg1 + 8))
    
    if (result != 0)
        int32_t edx_1 = *(result + 8)
        void* const ecx_3
        
        if (esi s< edx_1 || *(result + 4) + edx_1 s<= esi)
            ecx_3 = nullptr
        else
            result = *(result + 0xc)
            ecx_3 = *(result + ((esi - edx_1) << 2))
        
        if (ecx_3 != 0)
            return sub_504260(ecx_3 + 0x84, *(ebx + 0x40))

return result
