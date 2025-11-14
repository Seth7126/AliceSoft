// 函数: sub_58bbf0
// 地址: 0x58bbf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 2
void* esi = *(arg1 + 4)
int32_t* var_4
sub_42f3d0(esi + 0x16c, &var_4, &var_8)
int32_t* eax = var_4
int32_t eax_1

if (eax != *(esi + 0x16c))
    eax_1 = eax[5]
else
    eax_1 = 0

int32_t ebx
ebx.b = eax_1 s> 0

if (*(arg1 + 0x124) s>= 2)
    eax_1 = (*(**(arg1 + 8) + 0xa8))()

if (*(arg1 + 0x124) s< 2 || eax_1.b == 0)
    eax_1.b = 0
else
    eax_1.b = 1

if (ebx.b == 0 || eax_1.b == 0)
    int32_t* ecx_5 = *(arg1 + 0x388)
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 4))()
        *(arg1 + 0x388) = 0
    
    *(arg1 + 0x3ac) = 0
    sub_52b110(arg1 + 0x314)
    *(arg1 + 0x30c) = 0
    *(arg1 + 0x310) = 0
else
    void* eax_5 = *(arg1 + 4) + 0x158
    int32_t ebx_1 = *(eax_5 + 8)
    int32_t esi_1 = *(eax_5 + 0xc)
    
    if (*(arg1 + 0x30c) == ebx_1 && *(arg1 + 0x310) == esi_1)
        goto label_58bc8a
    
    if (*(arg1 + 0x3ac) == 0)
    label_58bc9e:
        
        if (sub_534120(arg1 + 0x308, ebx_1, esi_1, *(arg1 + 8)) == 0)
            return 0
        
        if (*(arg1 + 0x3ac) != 0)
            goto label_58bcb9
    else
        sub_5341b0(arg1 + 0x308)
    label_58bc8a:
        
        if (*(arg1 + 0x3ac) == 0)
            goto label_58bc9e
        
    label_58bcb9:
        
        if (sub_5341f0(arg1 + 0x308, *(arg1 + 8)) == 0)
            return 0

return 1
