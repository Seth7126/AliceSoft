// 函数: sub_5204a0
// 地址: 0x5204a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx = arg3
int32_t edx = 0
int32_t* edi = arg2
int32_t eax = *(arg1 + 0x110)

if (eax s> 0)
    edx = eax

int32_t result_1 = 0
*edi = edx
int32_t result = *(arg1 + 0x114)

if (result s> 0)
    result_1 = result

void* esi_1 = arg1 + 0x19c
*ebx = result_1

if (*(esi_1 + 0x10) != 0)
    bool cond:0_1 = *(esi_1 + 0x14) u< 0x10
    arg2 = nullptr
    arg3 = 0
    
    if (not(cond:0_1))
        esi_1 = *esi_1
    
    result = sub_44c5f0(esi_1, &arg2, &arg3)
    int32_t* ecx = *edi
    
    if (ecx s< arg2)
        ecx = arg2
    
    *edi = ecx
    uint32_t ecx_1 = *ebx
    
    if (ecx_1 s< arg3)
        ecx_1 = arg3
    
    *ebx = ecx_1

return result
