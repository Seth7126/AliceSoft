// 函数: sub_5515b0
// 地址: 0x5515b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 0
*(arg2 + 0x58) = *(arg1 + 0x4c)
*(arg2 + 0x5c) = *(arg1 + 0x50)
*(arg2 + 0x60) = *(arg1 + 0x58)
void* result = *(arg1 + 0x5c)
*(arg2 + 0x64) = result
int32_t ebx_2 = (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2

if (ebx_2 s> 0)
    do
        result = *(arg1 + 8)
        int32_t* ecx = *(result + (esi << 2))
        void* edx_1 = *ecx
        
        if (edx_1 == 0)
            break
        
        void* var_14_1 = arg2
        result.b = *(arg1 + 0x40) == esi
        ecx[5].b = result.b
        *(edx_1 + 0x18) = result.b
        result = sub_54e2e0(ecx)
        esi += 1
    while (esi s< ebx_2)

return result
