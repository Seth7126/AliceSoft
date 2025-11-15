// 函数: sub_5561a0
// 地址: 0x5561a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg3
int32_t* esi = arg2
int32_t* ebx_1 = arg1 + 0xc + ebp * 0x18

if (esi[5] u< 0x10)
    arg3 = esi
else
    arg3 = *esi

if (ebx_1[5] u< 0x10)
    arg2 = ebx_1
else
    arg2 = *ebx_1

int32_t ecx = esi[4]
int32_t eax_4 = ecx

if (ebx_1[4] u< ecx)
    eax_4 = ebx_1[4]

int32_t eax_5 = sub_406ac0(eax_4, arg3, arg2, eax_4)
void** result
int32_t ecx_2

if (eax_5 == 0)
    result = esi[4]
    ecx_2 = ebx_1[4]

if (eax_5 != 0 || ecx_2 u< result || ecx_2 u> result)
    if (ebx_1 != esi)
        sub_403590(ebx_1, esi, 0, 0xffffffff)
    
    result = ebp - 2
    
    if (ebp == 2)
        int32_t* ecx_5 = *(arg1 + 0x74)
        
        if (ecx_5 != 0)
            result = (*(*ecx_5 + 4))()
            *(arg1 + 0x74) = 0
    else
        void** result_1 = result
        result -= 1
        
        if (result_1 == 1)
            int32_t* ecx_4 = *(arg1 + 0x78)
            
            if (ecx_4 != 0)
                result = (*(*ecx_4 + 4))()
                *(arg1 + 0x78) = 0
    
    if (esi[4] != 0)
        return sub_555d90(arg1, esi, ebp)

return result
