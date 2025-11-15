// 函数: sub_451d80
// 地址: 0x451d80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x1c) = *(arg2 + 8)
*(arg1 + 0x20) = *(arg2 + 0xc)
*(arg1 + 0x28) = *(arg2 + 0x14)
*(arg1 + 0x2c) = *(arg2 + 0x18)
void* eax_4 = arg1 + 0x30
int32_t* esi = *eax_4
int32_t edi = *(eax_4 + 4)
void* var_10 = arg1

if (esi != edi)
    do
        if (sub_4509a0(*esi, arg3) == 0)
            return 0
        
        void* ecx_2 = *(*esi + 0x14)
        
        if (ecx_2 != 0 && sub_4509a0(ecx_2, arg3) == 0)
            return 0
        
        esi = &esi[1]
    while (esi != edi)
    
    arg1 = var_10

if (sub_451fd0(arg1, arg3) != 0)
    void* var_24_4 = arg1
    
    if (sub_452100(var_10, eax_4) != 0)
        return sub_4521f0(var_10, eax_4) != 0

return 0
